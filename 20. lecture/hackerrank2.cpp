// https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    map<string, int> mp;
    int queries; 
    cin >> queries; 
    
    for (; queries > 0; queries--) {
    // for (int q = 0;  q < queries; q++) {
        int type; 
        cin >> type; 
        
        if (type == 1) {
            string name; 
            int score; 
            cin >> name; 
            cin >> score; 
            
            mp[name] = mp[name] + score; 
            
            // cout << "just checking: " << score << ' ' << new_score << '\n'; 
            // mp.insert({name, new_score}); 
            // mp.insert(make_pair(name, score + mp[name])); 
            
        } else if (type == 2) {
            string name; 
            cin >> name; 
            mp.erase(name); 
            
            // auto it = mp.find(name); 
            // mp.erase(it); 
            
        } else if (type == 3) {
            string name; 
            cin >> name; 
            cout << mp[name] << '\n';
        }
        // cout << "{\n";
        // for (auto i: mp) {
        //     cout << "       " << i.first << ' ' << i.second << '\n'; 
        // }
        // cout << "} \n"; 
    }
    
}

