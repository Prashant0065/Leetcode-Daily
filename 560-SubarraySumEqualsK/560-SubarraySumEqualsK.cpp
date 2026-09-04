// Last updated: 9/4/2026, 4:17:35 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> prefixSumcount;
        prefixSumcount[0] = 1;
        int prefixsum = 0;
        int count = 0;
        for(int i = 0; i<n ; i++){
            prefixsum += nums[i];
            int remove = prefixsum - k;

            if(prefixSumcount.find(remove) != prefixSumcount.end()){
                count += prefixSumcount[remove];
            }
            prefixSumcount[prefixsum]++;
        }
        return count;
    }
};