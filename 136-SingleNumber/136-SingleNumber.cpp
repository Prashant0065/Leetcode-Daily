// Last updated: 8/9/2026, 6:44:24 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int XOR = 0;

        for(int i =0; i<n ; i++){
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }

};