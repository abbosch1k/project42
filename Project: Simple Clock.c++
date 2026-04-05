#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int sec = 0;

    while (true) {
        cout << sec++ << endl;
        sleep(1);
    }
}
