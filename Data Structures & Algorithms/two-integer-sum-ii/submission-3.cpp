class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        int i=0;
        for(int x : numbers){
            int need = target-x;
            if(mp.count(need)){
                return {mp[need]+1,i+1};
            }
            mp[x]=i;
            i++;
        }
    }
};
