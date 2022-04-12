class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int lowBuyingPrice=99999, highSellingPrice=-1;
        int maxProfit=0;
        int difference=0;
        int buyIndex=-1;
        int sellIndex=-1;
        
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<=lowBuyingPrice){
                lowBuyingPrice = prices[i];
                buyIndex=i;
            }
            if(prices[i+1]>=highSellingPrice || buyIndex>sellIndex){
                highSellingPrice = prices[i+1];
                sellIndex=i+1;
            }
            difference = highSellingPrice-lowBuyingPrice; 
            maxProfit = max(maxProfit, difference);
        }
        return maxProfit;
    }
};
