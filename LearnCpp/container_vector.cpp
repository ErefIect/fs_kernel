#include <iostream>
#include <vector>
#include <set>

int main() {
    // create a vector of integers
    std::vector<int> vec = {2, 3, 5, 7, 11};

    // add some elements to the vector
    vec.push_back(13);
    vec.push_back(17);

    // print the elements of the vector
    std::cout << "Vector: ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << '\n';

    // create a set of strings
    std::set<std::string> set = {"apple", "banana", "cherry", "date"};

    // add some elements to the set
    set.insert("elderberry");
    set.insert("fig");

    // print the elements of the set
    std::cout << "Set: ";
    for (const std::string& s : set) {
        std::cout << s << " ";
    }
    std::cout << '\n';

    return 0;
}
