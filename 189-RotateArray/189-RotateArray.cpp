// Last updated: 8/9/2026, 6:44:30 PM
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        reverse(arr.begin(), arr.end());
        reverse(arr.begin() , arr.begin() + k);
        reverse(arr.begin() + k, arr.end());    
    }
};