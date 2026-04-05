#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    string task;

    for(int i=0;i<3;i++) {
        cout << "Enter task: ";
        cin >> task;
        tasks.push_back(task);
    }

    cout << "\nTasks:\n";
    for(string t : tasks) cout << t << endl;
}
