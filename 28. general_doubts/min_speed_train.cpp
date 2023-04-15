// https://leetcode.com/problems/minimum-speed-to-arrive-on-time/
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;


class Solution {
public:
    
    bool check_reachable(vector<int>& dist, double& hour, int speed) {
        double total_time = 0; 
        
        for (int i = 0; i < dist.size() - 1; i++) {
            double _dist = dist[i];
            double _speed = speed;
            double _total_time = _dist/_speed;
            
            total_time += ceil(_total_time);
        }
        
        total_time += (double)dist.back() / (double)speed; 
        
        if (total_time <= hour) {
            return true;
        } else {
            return false;
        }
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1; 
        int high = 1e8; // speed = distance/time
        // maximize my speed? 
        // distance maximize
        // time minimize
        // max_distance: 1e5, min_tim: 1
        // 1e5/1 ==> 1e5
        
        int ans = -1; 
        
        while (low <= high) {
            int mid = (low + (high - low) / 2);
            
            bool check = check_reachable(dist, hour, mid);
            
            if (check) {
                ans = mid; 
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};
