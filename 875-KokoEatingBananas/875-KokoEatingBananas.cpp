// Last updated: 10/14/2026, 11:30:52 PM
class Solution {
private:
    bool canfinish(vector<int>& nums, int speed, int h) {
        long long hours = 0;
        for (int pile = 0; pile < nums.size(); pile++) {
            hours += (nums[pile] + speed - 1LL) / speed;
            if (hours > h) {
                return false;
            }
        }
        return true;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canfinish(piles, mid, h)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
