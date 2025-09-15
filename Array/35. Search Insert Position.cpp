// https://leetcode.com/problems/search-insert-position/?envType=problem-list-v2&envId=array

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int len=nums.size();
        if(target>nums[len-1]) return len;
        if(target<nums[0]) return 0;
        for(;i<len;i++){
            if(nums[i]==target){
                return i;
            }
            else if(target > nums[i] && target < nums[i+1]){
                return i+1;
            }
        }
        return i;
    }
};