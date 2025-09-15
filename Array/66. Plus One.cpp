// https://leetcode.com/problems/plus-one/?envType=study-plan&id=data-structure-i
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
      for(int i=len-1;i>=0;i--){
        if(digits[i]==9) {
            digits[i]=0;
        } else{
            digits[i]+=1;
            return digits;
        }
      }
    digits.insert(digits.begin(),1);
    return digits;
    }
};
