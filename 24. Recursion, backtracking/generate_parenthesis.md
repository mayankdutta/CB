## [question](https://leetcode.com/problems/generate-parentheses/submissions/)

#### method 1

```cpp
#include <iostream>
using namespace std;

class Solution {
public:
  vector<string> ans;

  void fun(int i, string curr, int n) {
    int open = count(curr.begin(), curr.end(), '(');
    int close = count(curr.begin(), curr.end(), ')');

    if (i == n) {
      if (open == close) {
        ans.push_back(curr);
      }
      return;
    }

    if (open < close) {
      return;
    }

    curr.push_back('(');
    fun(i + 1, curr, n);
    curr.pop_back();

    curr.push_back(')');
    fun(i + 1, curr, n);
    curr.pop_back();
  }

  vector<string> generateParenthesis(int n) {

    fun(0, "", 2 * n);
    return ans;
  }
};


```


#### method 2

```cpp

class Solution {
public:
    
    vector<string> ans;
    
    void fun(int i, string curr, int n) {
        int open = count(curr.begin(), curr.end(), '(');
        int close = count(curr.begin(), curr.end(), ')');
        
        if (i == n) {
            if (open == close) {
                ans.push_back(curr); 
            }
            return;
        }
        
        if (open < close) {
            return;
        }
        
        fun(i + 1, curr + "(", n);
        fun(i + 1, curr + ")", n);
    }
    
    vector<string> generateParenthesis(int n) {
        string t = "";
        fun(0, t, 2 * n);
        return ans;
    }
};

```
