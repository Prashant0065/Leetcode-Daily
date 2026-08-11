// Last updated: 8/11/2026, 10:33:16 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int count = 0;
        int el;
        for(int i = 0; i<n; i++){
            if(count == 0 ){
                count = 1;
                el = nums[i];
            }
            else if(nums[i]==el){
                count++;
            }
            else {
                count --;
            }
        }
        int count1=0;
        for(int i =0; i<n; i++){
            if(nums[i]==el){
                count1++;
            }
        
        }
        if(count1 >  (n/2)){
            return el;
        }
        else{
            return -1;
        }
    }
};