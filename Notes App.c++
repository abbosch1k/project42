#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("notes.txt");
    file << "Hello note!";
    file.close();
}
