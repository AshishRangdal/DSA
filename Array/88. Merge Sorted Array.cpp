// https://leetcode.com/problems/merge-sorted-array/?envType=study-plan&id=data-structure-i
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=nums1.size();
        int len2=nums2.size();
        int idx=0;
        for(int i=0;i<len;i++){
            if(nums1[i]==0 && idx<len2){
                nums1[i]=nums2[idx];
                idx++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};