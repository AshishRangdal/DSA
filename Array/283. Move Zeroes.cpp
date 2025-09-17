// https://leetcode.com/problems/move-zeroes/description/?envType=problem-list-v2&envId=array
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }

        for(int i=j;i<len;i++){
            nums[i]=0;
        }
    }
};