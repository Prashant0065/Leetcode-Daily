// Last updated: 9/17/2026, 11:43:09 AM
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] >= target){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};