#include <iostream>
using namespace std;

int main() {
    string input;

    while(true) {
        cout << "You: ";
        cin >> input;

        if(input == "hi") cout << "Bot: Hello!\n";
        else if(input == "how") cout << "Bot: I am fine!\n";
        else if(input == "bye") {
            cout << "Bot: Goodbye!\n";
            break;
        }
        else cout << "Bot: I don't understand\n";
    }
}
