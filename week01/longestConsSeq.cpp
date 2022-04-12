class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int> bucket;
        long long int max =-1000000000; //taken a value out of constraint bound
        long long int min =1000000000;
        int consecuteCount=0;
        int maxCount=1;
        
        if(nums.size()==0) return 0;
        
        for(int i=0;i<nums.size();i++){
            bucket[nums[i]]=1;
        }
        
        for(auto x:bucket)
        {
            if(bucket.count(x.first-1) ) continue;
            int start=x.first;
            consecuteCount=0;
            while(bucket.count(start)){
                consecuteCount++;
                start++;
            }
            maxCount = std::max(consecuteCount, maxCount);   
             
            
        }
        return maxCount;
    }
};
