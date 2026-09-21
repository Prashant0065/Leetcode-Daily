// Last updated: 9/21/2026, 11:33:49 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(nums[mid]>nums[high]){
                low = mid + 1;
            }
            else {
                high = mid ;
            }
        }
        return nums[low];
    }
};