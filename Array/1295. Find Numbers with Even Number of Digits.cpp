// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
    bool isEven(int num) {
        string number = to_string(num);
        if ((number.length() ^ 1) == (number.length()+1))
            return true;
        return false;
    }

public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        for (int i = 0; i < len; i++) {
            if (isEven(nums[i])) {
                count++;
            }
        }
        return count;
    }
};