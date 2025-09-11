// https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int len=strs.size();
        string prefix="";
        for(int i=0;i<strs[0].size();i++)
        {
            if(strs[0][i]!=strs[len-1][i])
            {
                break;
            }
            else{
                 prefix+=strs[0][i];
            }
        }
        return prefix;
    }
};