// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=problem-list-v2&envId=array

// brute force approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int maxProf=0,ans=0;
        for(int i=0;i<len;i++){
           for(int j=i+1;j<len;j++){
                if(prices[i]<prices[j] && j>i)
                {
                    maxProf=prices[j]-prices[i];
                    if(maxProf > ans){
                        ans=maxProf;
                    }
                }else{
                    break;
                }
           }
        }
        return ans;
    }
};