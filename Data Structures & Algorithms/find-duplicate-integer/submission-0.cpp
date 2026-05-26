class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans;
        int maxi=INT_MIN;
        for(int x:nums){
            mp[x]++;
            if(mp[x]>maxi){
                maxi=mp[x];
                ans=x;
            }
        }
        return ans;
    }
};
