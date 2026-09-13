// Last updated: 9/14/2026, 12:19:40 AM
class Solution {
public:
    int beautySum(string s) {

        // SLIGHTLY OPTIMAL 
        int n = s.size();
        int sum = 0;
        for(int i = 0; i<n ; i++){
            int freq[26] = {};
            int maxi = 0;
            for(int j = i; j<n ; j++){
                int index = s[j] - 'a';
                freq[index]++;
                maxi = max(maxi , freq[index]);
                int mini = INT_MAX;
                for(int k = 0 ; k < 26; k++){
                    if(freq[k] > 0){
                        mini = min(mini , freq[k]);
                    }
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};