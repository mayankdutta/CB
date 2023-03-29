[link to the question](https://leetcode.com/problems/container-with-most-water/)

## brute

## optimal

```cpp
    int maxArea(vector<int>& height) {
        int ans = 0;
        int n = height.size();

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int area = (right - left) * min(height[left], height[right]);
            ans = max(area, ans);

            if (height[left] < height[right]) {
                left ++;
            } else {
                right --;
            }


        }

        return ans;

    }

```
