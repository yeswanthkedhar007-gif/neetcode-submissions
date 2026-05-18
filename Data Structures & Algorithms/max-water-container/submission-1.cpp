// class Solution {
// public:
//     int maxArea(vector<int>& heights) {
//         int max=0;
//         int n=heights.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int p=min(heights[i],heights[j]) * (j-i);
//                 if(p>max){
//                     max=p;
//                 }
//             }
//         }
//         return max;
//     }
// };


class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int max=0;
        while(left<right){
            int area=min(heights[left],heights[right])*(right-left);
            if(max<area){
                max=area;
            }
            if(heights[left]<heights[right]) left++;
            else right--;
        }
        return max;
    }
};
