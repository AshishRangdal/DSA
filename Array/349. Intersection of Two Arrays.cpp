// https://leetcode.com/problems/intersection-of-two-arrays/?envType=problem-list-v2&envId=array

// brute force approach
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,string> mp;
        int m=nums1.size(), n=nums2.size();
        for(int i=0;i<m;i++){
            int count=0;
            while(count<n){
                if(nums1[i]==nums2[count]){
                    int rep=mp.count(nums1[i]);
                    if(rep<=0){
                        ans.push_back(nums1[i]);
                        mp.insert({nums1[i],""});
                    }
                    break;
                }
                count++;
            }
        }
        return ans;
    }
};
