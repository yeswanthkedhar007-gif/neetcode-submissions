class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int max=0;
        for(int nums:s){
            int length;
            if(s.find(nums-1)==s.end()){
               length=1;
               while(s.find(nums+length)!=s.end()){
                length++;
               }
               if(length>max){
                max=length;
               }
            }
        }
        return max;
    }
};
