#include <bits/stdc++.h>
using namespace std;
int main()
{

    int X;
    const int correctPassword = 1999;

    while (cin >> X) //The program uses a while loop with cin >> X to continuously read input
    { // until the correct password is entered or until there is no more input.

        if ( X == correctPassword) {
            cout << "Correct" <<endl;
            break;
        }
        else {
            cout << "Wrong" <<endl;
        }

    }



    return 0;
}
