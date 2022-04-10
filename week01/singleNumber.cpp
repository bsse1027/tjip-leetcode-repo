class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int previousAns=0;
        
        for(int i=0; i<nums.size();i++){
            previousAns = previousAns^nums[i];
        }
        
        return previousAns;
        
    }
};
