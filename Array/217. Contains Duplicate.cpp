// https://leetcode.com/problems/contains-duplicate/description/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums) {
            if (s.count(num)) return true;
            s.insert(num);
        }
        return false;
    }
};

// 2nd approach with unordered_map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> s;
        for (int num : nums) {
            if (s[num]==true) return true;
            s[num]=true;
        }
        return false;
    }
};

