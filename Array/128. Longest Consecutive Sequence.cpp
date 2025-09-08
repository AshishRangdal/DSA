// https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int count=1;
        int lgCount=1;
        int len= nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<len;i++){
            if(nums[i]-nums[i-1]==0){
                continue;
            }else if(nums[i]-nums[i-1]==1){
                count++;
            }else{
                lgCount=max(count,lgCount);
                count=1;
            }
        }
        return max(count,lgCount);
    }
};