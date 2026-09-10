// Last updated: 9/10/2026, 12:16:12 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.empty()){
            return "";
        }

        string prefix = s[0];

        for(int i = 1; i<s.size() ; i++){
            int j =0;

            while(j < prefix.size() && j < s[i].size() && prefix[j]==s[i][j]){
                j++;
            }
            prefix = prefix.substr(0,j);
            if(prefix.empty()){
                return "";
            }
        }
        return prefix;
    }
};