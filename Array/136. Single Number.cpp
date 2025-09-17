// https://leetcode.com/problems/single-number/description/?envType=problem-list-v2&envId=array

// brute force approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len-1;i+=2){
            if(nums[i]!=nums[i+1]) {
                return nums[i];
            }
        }
        return nums[len-1];
    }
};