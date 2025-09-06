// https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/


class Solution {
public:
    int switchHelper(char ch){
        switch(ch){
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
            default: return -1;
        }
    } 
    int helper(string str){
        int len = str.length();
        int sum=0;
        for(int i=0;i<len;i++){
            int data = switchHelper(str[i]);
            if(data==-1) return len;
            sum=(sum*10) + data;
        }
        return sum;
    }
    int maximumValue(vector<string>& strs) {
        int ans=INT_MIN;
        int len=strs.size();
        for(int i=0; i<len; i++){
            int val=helper(strs[i]);
            ans=max(ans,val);
        }
        return ans;
    }
};