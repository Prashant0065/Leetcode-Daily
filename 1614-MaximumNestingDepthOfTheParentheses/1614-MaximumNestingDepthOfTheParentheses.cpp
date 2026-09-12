// Last updated: 9/12/2026, 11:12:24 PM
class Solution {
public:
    int maxDepth(string s) {
        int p = 0;
        int ans = 0;
        for(char ch : s){
            if(ch == '('){
                p++;
            }
            else if(ch == ')'){
                p--;
            }
            ans =max(ans , p);
        }
        return ans;
    }
};