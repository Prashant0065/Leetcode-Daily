// Last updated: 9/17/2026, 11:43:13 AM
class Solution {
public:
    int First(vector<int> &arr , int target){
        int n = arr.size();
        int low = 0; 
        int high = n-1;
        int result = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == target){
                result = mid;
                high = mid-1;
            }
            else if(arr[mid] > target){
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }
        return result;
    }
    int Last(vector<int> &arr , int target){
        int n = arr.size();
        int low = 0; 
        int high = n-1;
        int result = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == target){
                result = mid;
                low = mid+1;
            }
            else if(arr[mid] > target){
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }
        return result;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int f = First(arr , target);
        int l = Last(arr, target);
        return {f , l};
    } 
};