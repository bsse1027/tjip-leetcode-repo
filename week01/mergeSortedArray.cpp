class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int wholeSize = m+n-1;
        int firstArrSize=m-1;
        int secondArrSize=n-1;
        
        while(firstArrSize>=0 && secondArrSize>=0){
            if(nums2[secondArrSize]> nums1[firstArrSize]){
                nums1[wholeSize] = nums2[secondArrSize];
                secondArrSize--;
                wholeSize--;
            }
            else{
                nums1[wholeSize] = nums1[firstArrSize];
                firstArrSize--;
                wholeSize--;
            }
        }
      
        while(secondArrSize>=0){
            nums1[wholeSize] = nums2[secondArrSize];
            secondArrSize--;
            wholeSize--;
        }
        
    }
};
