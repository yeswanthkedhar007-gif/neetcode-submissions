class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int x=numbers[i];
            for(int j=i+1;j<numbers.size();j++){
                if((x+numbers[j]) == target){
                    return {i+1,j+1};
                }
            }
        }
    }
};
