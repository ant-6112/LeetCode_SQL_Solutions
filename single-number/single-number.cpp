class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            if(count(nums.cbegin(),nums.cend(), nums[i]) == 1){
                return nums[i];
            }
        }
        
        return 0;
    }
    
    
};