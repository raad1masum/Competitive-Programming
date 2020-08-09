#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n<=9)
    {
        if (n == 1)
        {
            cout << "one" << endl;
            return 0;
        }
        if (n == 2)
        {
            cout << "two" << endl;
            return 0;
        }
        if (n == 3)
        {
            cout << "three" << endl;
            return 0;
        }
        if (n == 4)
        {
            cout << "four" << endl;
            return 0;
        }
        if (n == 5)
        {
            cout << "five" << endl;
            return 0;
        }
        if (n == 6)
        {
            cout << "six" << endl;
            return 0;
        }
        if (n == 7)
        {
            cout << "seven" << endl;
            return 0;
        }
        if (n == 8)
        {
            cout << "eight" << endl;
            return 0;
        }
        if (n == 9)
        {
            cout << "nine" << endl;
            return 0;
        }
    }
    else if (n>9)
    {
        cout << "Greater than 9" << endl;
        return 0;
    }
    return 0;
}
