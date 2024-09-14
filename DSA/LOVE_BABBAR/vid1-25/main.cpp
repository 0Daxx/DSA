#include <iostream>
using namespace std;

int uns()
{

    unsigned int a = 112;
    cout << a << " \n";
    unsigned int b = -112;
    cout << b << " ";
    return 0;
}

int arithmetic()
{

    cout << 2.0 / 5 << " \n";

    float a = 2.0 / 5;
    cout << a << " \n";

    int b = 2.0 / 5;
    cout << b << " \n";
    return 0;
}

void relation()
{

    int a = -55;
    cout << !a << " \n";

    if (a)
    {
        cout << "True since any integer number is true\n";
        //
    }
}

int asc()
{

    int ab;
    // takes any asc character as input and returns the ascii number

    ab = cin.get();
    cout << "You entered: " << ab << "\n";

    return 0;
}

// HW 1  a fn that takes input any character and returns if its lower or upper
// or if its a number
int ascii()
{

    return 0;
}

int sumOfN()
{

    // int n = cin.get();
    int n;
    cout << "ENTER number ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << "\n";
    return sum;
}
//

int prime()
{
    // by babbar

    int n;
    cout << "ENTER number ";
    cin >> n;

    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "not prime " << "\n";
        }
        i++;
    }

    return 0;
}
// *****************************************************************
int pat()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;

        while (j <= n){
            cout << "*" ;
            j++;
        }
            cout << "\n";
        i++;
    }

    return 0;
}
int main()
{

    // arithmetic();
    // relation();
    // asc();
    // sumOfN();

    // prime();
    pat();
    // uns();

    return 0;
}
