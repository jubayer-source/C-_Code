
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number ;
    long long factorial = 1;

    cout << "Enter any number: ";
    cin >> number;


    if (number <0)
    {
        cout << "Can't find the value of negative number.";
    }
    else if(number <=1)
    {
        cout<< number << "! = " << factorial;
    }
    else
    {
        for( int i = number; i >=2; i--)
        {
            factorial = factorial*i;
        }

        cout << number << "! = " <<factorial;
    }



    return 0;
}
