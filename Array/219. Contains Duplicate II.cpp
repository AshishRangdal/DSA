// https://leetcode.com/problems/contains-duplicate-ii/?envType=problem-list-v2&envId=array
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len=nums.size();
        unordered_map<int,int> ans;
        for(int i=0;i<len;i++){
            if(ans.count(nums[i])){
                if(abs(i-ans[nums[i]]) <= k){
                    return true;
                }
            }
            ans[nums[i]]=i;
        }
        return false;
    }
};