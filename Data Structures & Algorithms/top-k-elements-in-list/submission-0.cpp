class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto x : mp){
            int number=x.first;
            int frequency=x.second;
            freq[frequency].push_back(number);
        }
        vector<int> ans;
        for(int i=freq.size()-1;i>=0;i--){
            for(auto z : freq[i]){
                ans.push_back(z);
                if(ans.size()==k){
                    return ans;
                }
            }
        }

    }
};
