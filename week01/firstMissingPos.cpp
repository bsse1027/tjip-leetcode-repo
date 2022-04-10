class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i]<=0) nums[i]=nums.size()+1;
        }
        
        for(int i=0; i<nums.size();i++){
            if(abs(nums[i])-1 < nums.size() && nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]=nums[abs(nums[i])-1]*-1;
            }
        }
        
        for(int i=1;i<=nums.size();i++){
            if(nums[i-1]>0){
                return i;
            }
        }
        
        return nums.size()+1;
       
    }
};
