class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,fp=0;
        for(int i=0;i<prices.size();i++){
            int maxi = prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(maxi<prices[j]){
                    maxi=prices[j];
                    profit=maxi-prices[i];
                }
                fp=max(profit,fp);
            }
        }
        return fp;
    }
};
