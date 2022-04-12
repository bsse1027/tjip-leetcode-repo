class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int relativeVote=0;
        int winner=nums[0];
        
        for(int i=0; i<nums.size();i++){
            if(nums[i] == winner) relativeVote++;
            else{
                relativeVote--;
            }
            if(relativeVote == 0){
                winner=nums[i];
                relativeVote++;
            }
        }
        return winner;
        
    }
};
