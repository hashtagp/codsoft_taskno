#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); 
    int rand_num = rand() % 100;
    cout << "Random number generated!!!\n\n" << endl;
    int user_num = -1;

    while (user_num != rand_num) {
        cout << "Guess the number: ";
        cin >> user_num;
        if (user_num < rand_num) {
            cout << "Number is too low!!!\n\n" << endl;
        } else if (user_num > rand_num) {
            cout << "Number is too high!!!\n\n" << endl;
        }
    }

    cout << "Guessed the correct number: " << user_num << endl;
    
    return 0;
}
