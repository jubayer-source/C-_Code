#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number, remainder, revNumber = 0;

    cout << "Enter an Integer : ";
    cin >> number;

    while ( number > 0)

    {
        remainder = number % 10;
        number = number / 10;
        revNumber = (revNumber * 10) + remainder;

    }
    cout << "Reverse number is : " << revNumber;

    /*
    Example Execution

    If the user inputs 123:
        First iteration: remainder = 3, reversedNumber = 3, number = 12
        Second iteration: remainder = 2, reversedNumber = 32, number = 1
        Third iteration: remainder = 1, reversedNumber = 321, number = 0
        The loop ends since number is now 0.
        The output will be Reversed Number: 321.

    */

    return 0;
}
