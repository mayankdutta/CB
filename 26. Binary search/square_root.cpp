// https://leetcode.com/problems/sqrtx/

#define ll long long int
class Solution {
public:
  int mySqrt(int x) {
    ll low = 1;
    ll high = x;

    int ans = 0;

    while (low <= high) {

      ll mid = (low + high) / 2;
      ll square_mid = (ll)mid * (ll)mid;

      if (square_mid == x) {
        ans = mid;
        break;
      } else if (square_mid < x) {
        ans = mid;
        low = mid + 1;
      } else if (square_mid > x) {
        high = mid - 1;
      }
    }
    return ans;
  }
};
