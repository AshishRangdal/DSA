// https://leetcode.com/problems/subarray-sum-equals-k/

// bruteforce code
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len= nums.size();
        int sum=0,count=0;
        for(int i=0;i<len;i++){
            sum=nums[i];
            if(sum==k) count++;
            for(int j=i+1;j<len;j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
                
            }
        }
        return count;
    }
};