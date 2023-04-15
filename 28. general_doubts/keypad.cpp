// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
    public:
    string s;
    vector<string> ans;
    map<char, string> mp;

    void fun(string digits) {
        if (digits.empty()) {
            if (!s.empty()) 
                ans.push_back(s);
            return;
        }

        for (const char& ch: mp[digits.front()]) {
            s.push_back(ch);
            fun(digits.substr(1));
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        fun(digits);
        
        return ans;
    }
};
