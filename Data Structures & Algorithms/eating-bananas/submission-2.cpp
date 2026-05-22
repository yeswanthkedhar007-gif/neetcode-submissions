class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int i=0;i<piles.size();i++){
                maxi=max(maxi,piles[i]);
        }

        int x;
        for(int k=1;k<=maxi;k++){
             long long total=0;
             for(int i=0;i<piles.size();i++){
                x=ceil((double)piles[i]/k);
                total+=x;
             }
             if(total<=h){
                return k;
             }
        }
        return -1;
    }
};
