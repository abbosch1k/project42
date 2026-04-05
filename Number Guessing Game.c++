#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num = rand() % 100 + 1;
    int guess;

    do {
        cout << "Guess (1-100): ";
        cin >> guess;

        if(guess > num) cout << "Too big\n";
        else if(guess < num) cout << "Too small\n";
    } while(guess != num);

    cout << "Win!";
}
