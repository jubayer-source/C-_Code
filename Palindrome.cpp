#include <bits/stdc++.h>
using namespace std;

int main()
{

    int number, orginalNumber, reversedNumber;

    cout<< "Enter any number: ";
    cin >> number;


    orginalNumber = number;


    while ( number > 0)
    {
        int digit = number % 10;                      // Get the last digit
        number = number/10;                           // Remove the last digit
        reversedNumber = reversedNumber*10 + digit;   // Build the reversed number
    }




        //Now, Check if the original number is equal to the reversed number

    if (orginalNumber == reversedNumber)
    {
        cout << reversedNumber << " is palindrome number.";
    }

    else

        cout << reversedNumber << " is not palindrome number.";

    return 0;
}
