#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names;

    names.push_back("Ali");
    names.push_back("John");

    for(string n : names)
        cout << n << endl;
}
