/* Define a class University with private members name and ranking.
Provide setters and getters. Demonstrate in main() that private data
members cannot be accessed directly, but only via the methods.*/

#include <iostream>
#include <string>
using namespace std;

class University {
private:
    string name;
    int ranking;

public:
    // Setters
    void setName(string n) { name = n; }
    void setRanking(int r) { ranking = r; }

    // Getters
    string getName() { return name; }
    int getRanking() { return ranking; }
};

int main() {
    University u;

    // ✅ Access through setters
    u.setName("Oxford");
    u.setRanking(1);

    // ❌ Direct access (this will cause an error if uncommented)
    // u.name = "Cambridge";       // Not allowed
    // u.ranking = 2;              // Not allowed

    // ✅ Access through getters
    cout << "University Name: " << u.getName() << endl;
    cout << "World Ranking  : " << u.getRanking() << endl;

    return 0;
}
