#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    long long numbers[1000];
    for( int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    long long maxNumber = numbers[0]; //Initialize maxNumber with the first number in the array.

    for (int i = 0; i < N; i++)
    {
        if (numbers[i] > maxNumber) //For each number, check if it is greater than maxNumber. If it is, update maxNumber.
        {
            maxNumber = numbers[i];
        }
    }
    cout << maxNumber <<endl;

    return 0;
}
