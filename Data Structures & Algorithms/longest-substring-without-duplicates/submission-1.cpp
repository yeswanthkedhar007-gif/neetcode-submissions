// class Solution {
// public:
//     bool isunique(string s,int start,int end){
//         vector<int> freq(256,0);
//         for(int i=start;i<=end;i++){
//             freq[s[i]]++;
//             if(freq[s[i]]>1){
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     int lengthOfLongestSubstring(string s) {
//         int n=s.length();
//         int maxi=0;
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 if(isunique(s,i,j)){
//                     maxi=max(maxi,j-i+1);
//                 }
//             }
//         }
//         return maxi;
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l=0,r=0,maxi=0;
        int n=s.length();
        while(r<n){
            if(st.find(s[r])==st.end()){
                st.insert(s[r]);
                maxi=max(maxi,r-l+1);
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return maxi;
    }
};
