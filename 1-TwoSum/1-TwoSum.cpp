// Last updated: 8/9/2026, 7:46:17 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        int left = 0;
        int right = n-1;
        vector<pair<int , int>> arr;
        for(int i =0; i<n; i++){
            arr.push_back({nums[i],i});
        }
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[j].first < arr[i].first){
                    swap(arr[i],arr[j]);
                }
            }
        }
        while(left<right){
            int sum = arr[left].first + arr[right].first;
            if(sum==target){
                return {arr[left].second,arr[right].second};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};