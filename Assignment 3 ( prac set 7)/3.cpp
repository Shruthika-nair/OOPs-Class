/*  Top K Frequent Elements: Find the top k most frequent numbers from an array using
unordered map and priority queue.*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4};
    int n = 10;
    int k = 2;

  
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

 
    priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   greater<pair<int,int>>> pq;

  
    for (auto it = freq.begin(); it != freq.end(); it++) {
        pq.push({it->second, it->first});

        
        if (pq.size() > k) {
            pq.pop();
        }
    }

  
    cout << "Top " << k << " frequent elements:\n";
    while (!pq.empty()) {
        cout << pq.top().second << " (freq = " << pq.top().first << ")\n";
        pq.pop();
    }

    return 0;
}



