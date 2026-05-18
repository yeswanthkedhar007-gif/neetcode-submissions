// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(char c : s){
//             if(c == '(' || c == '{' || c == '['){
//                 st.push(c);
//             }
//             else{
//                 if(st.empty()) return false;
                
//                 if(c == ')' && st.top() != '(') return false;
//                 if(c == '}' && st.top() != '{') return false;
//                 if(c == ']' && st.top() != '[') return false;

//                 st.pop();
//             }
//         }
//         return st.empty();
//     }
// };

class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;  // odd length can never be valid
        
        char st[s.size()];
        int top = -1;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st[++top] = c;
            } else {
                if (top == -1) return false;
                if (c == ')' && st[top] != '(') return false;
                if (c == '}' && st[top] != '{') return false;
                if (c == ']' && st[top] != '[') return false;
                top--;
            }
        }
        
        return top == -1;
    }
};
