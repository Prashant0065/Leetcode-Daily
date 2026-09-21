// Last updated: 9/21/2026, 11:33:28 PM
class Solution {
public:

    bool isPossible(vector<int>& nums, int divisor, int threshold) {

        long long sum = 0;

        for(int num : nums) {

            sum += (num + divisor - 1) / divisor;

            if(sum > threshold)
                return false;
        }

        return true;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int answer = high;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(isPossible(nums, mid, threshold)) {

                // mid works
                answer = mid;

                // Try to find a smaller divisor
                high = mid - 1;
            }
            else {

                // mid doesn't work
                // Need a larger divisor
                low = mid + 1;
            }
        }

        return answer;
    }
};