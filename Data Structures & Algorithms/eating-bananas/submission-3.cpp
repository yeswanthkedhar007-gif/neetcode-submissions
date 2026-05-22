class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
                maxi=max(maxi,piles[i]);
        }
        return maxi;
    }

    int func(vector<int>& piles,int hourly){
        int total=0;
        for(int i=0;i<piles.size();i++){
                total+=ceil((double)piles[i]/hourly);
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findmax(piles);
        while(low<=high){
                int mid=(low+high)/2;
                int totalhrs=func(piles,mid);
                if(totalhrs<=h) high=mid-1;
                else low=mid+1;
        }
        return low;
    }
};
