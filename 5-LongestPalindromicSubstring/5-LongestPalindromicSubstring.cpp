// Last updated: 9/14/2026, 9:55:13 AM
class Solution {
private:
    int expandaroundCenter(string &s , int left , int right){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return right - left -1;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxlen = 1;
        for(int i = 0 ; i<n ; i++){
            int oddlen = expandaroundCenter(s,i,i);
            int evenlen = expandaroundCenter(s,i,i+1);
            int len  = max(oddlen , evenlen);
            if(len > maxlen){
                maxlen = len;
                start = i-(len-1)/2;
            }
        }
        return s.substr(start , maxlen);
    }
};