/* Two Sum using Hashing: Given a vector of integers and a target, find all unique pairs
whose sum equals the target using unordered map.*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int nums[] = {2, 7, 11, 15, 3, 6};
    int n = 6;
    int target = 9;

    unordered_map<int, int> mp; 

    cout << "Pairs:\n";

    for (int i = 0; i < n; i++) {
        int num1 = nums[i];
        int num2 = target - num1;

        if (mp.find(num2) != mp.end()) {
            cout << num1 << " + " << num2 << " = " << target << endl;
        }

        mp[num1] = i;
    }

    return 0;
}
