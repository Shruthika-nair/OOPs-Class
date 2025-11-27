/* Group Anagrams: Group together all words that are anagrams of each other using
unordered map<std::string, std::vector<std::string>>.*/

/* Group Anagrams: Group together all words that are anagrams of each other using
   unordered_map<string, vector<string>>. */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    vector<string> words = {"rat", "tar", "art", "dusty", "study","evil" , "live"};

    unordered_map<string, vector<string>> mp;


    for (int i = 0; i < words.size(); i++) {
        string original = words[i];
        string sorted_word = original;

      
        sort(sorted_word.begin(), sorted_word.end());

        mp[sorted_word].push_back(original);
    }

    cout << "Anagram Groups:\n";

  
    unordered_map<string, vector<string>>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++) {
        vector<string> group = it->second;

        for (int j = 0; j < group.size(); j++) {
            cout << group[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
