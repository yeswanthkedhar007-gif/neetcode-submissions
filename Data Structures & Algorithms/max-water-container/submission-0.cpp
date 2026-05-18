class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int p=min(heights[i],heights[j]) * (j-i);
                if(p>max){
                    max=p;
                }
            }
        }
        return max;
    }
};
