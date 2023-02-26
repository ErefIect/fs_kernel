#include <iostream>
#include <set>

int main() {
    // create a set of integers
    std::set<int> s;

    // insert some elements into the set
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(3);

    // check if an element is in the set
    if (s.count(5)) {
        std::cout << "5 is in the set\n";
    }

    // find an element in the set
    auto it = s.find(3);
    if (it != s.end()) {
        std::cout << "Found " << *it << " in the set\n";
    }

    // remove an element from the set
    s.erase(2);

    // print the elements of the set
    std::cout << "Set: ";
    for (int x : s) {
        std::cout << x << " ";
    }
    std::cout << '\n';

    return 0;
}
