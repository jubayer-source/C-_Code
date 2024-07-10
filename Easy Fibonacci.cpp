#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;

    if ( N >= 1) cout << "0";
    if ( N >= 2) cout << " " << "1";


    int a = 0, b = 1; // Initialize the first two Fibonacci numbers

    for ( int i = 3; i <= N; i++)
    {
        int next = a + b;
        cout << " " << next;

        a = b; // Update 'a' to the previous 'b'
        b = next; // Update 'b' to the newly calculated Fibonacci number

    }


    return 0;
}
