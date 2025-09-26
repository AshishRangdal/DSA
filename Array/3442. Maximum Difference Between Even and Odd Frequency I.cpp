// https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/
class Solution {
    bool isEven(int num){
        if(num & 1) return false;
        return true;
    }
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        string str="";
        int len=s.length();
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=0;i<len;i++) {
            if(mp[s[i]]==0){
                str+=s[i];
            }
            mp[s[i]]++;
        }

        int len2=str.length();
        for(int i=0;i<len2;i++) {
            if(isEven(mp[str[i]])) {
                mini=min(mini,mp[str[i]]);
            }else{
                maxi=max(maxi,mp[str[i]]);
            }
        }
      return  maxi-mini;
    }
};