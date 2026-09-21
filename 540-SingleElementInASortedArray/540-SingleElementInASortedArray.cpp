// Last updated: 9/21/2026, 11:33:37 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {

            int mid = low + (high - low) / 2;

            // Make mid even
            if (mid % 2 == 1) {
                mid--;
            }

            // If pair is correct, single element is on right
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            }
            else {
                // Single element is on left including mid
                high = mid;
            }
        }

        return nums[low];
    }
};