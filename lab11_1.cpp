// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <string>
using namespace std;

int main() {

    //random func
    srand(time(0));
    int predict = rand() % 9;

    string trash;
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    cout << "Press Enter 3 times to reveal your future.\n";

    for (int i = 0; i < 3; i++) {
        getline(cin, trash);
    }

    cout << "You will get " << grade[predict] << " in this 261102.";
    
}