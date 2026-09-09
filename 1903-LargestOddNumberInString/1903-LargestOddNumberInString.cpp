// Last updated: 9/9/2026, 11:33:30 PM
class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        int i ;
        for(i = num.size()-1; i>=0; i--){
            if((num[i]-'0') % 2 != 0){
                index = i;
                break;
            }
        }
        i = 0;
        while(i<=index && num[i]=='0'){
            i++;
        }
        return num.substr(i , index - i + 1 );
    }
};