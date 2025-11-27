/* Merge Intervals: Given a list of intervals, merge all overlapping ones using sorting and
   std::vector<std::pair<int,int>>. */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<pair<int,int>> intervals = {
        {1,4}, {2,8}, {8,16}, {15,19}, {17,21}
    };

    if (intervals.empty()) return 0;

  
    sort(intervals.begin(), intervals.end());

   
    vector<pair<int,int>> merged;

  
    for (int i = 0; i < intervals.size(); i++) {

        pair<int,int> it = intervals[i];  

       
        if (merged.empty() || merged.back().second < it.first) {
            merged.push_back(it);
        } 
        else {
           
            merged.back().second = max(merged.back().second, it.second);
        }
    }


    cout << "Merged intervals:\n";
    for (int i = 0; i < merged.size(); i++) {
        cout << "[" << merged[i].first << ", " << merged[i].second << "]\n";
    }

    return 0;
}
