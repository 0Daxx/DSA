#include <iostream >
using namespace std;

int bitwise()
{
    int a = 4;
    int b = 6;

    // cout << " a&b " << a&b << endl;
    cout << " a&b " << (a & b) << '\n';
    cout << " a|b " << (a | b) << '\n';
    cout << " a^b " << (a ^ b) << '\n';
    cout << " ~a " << (~a) << '\n';

    return 0;
}

int shift()
{

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 >> 1) << endl;
    cout << (21 >> 2) << endl;
    return 0;
}

int increment()
{
    // post increment
    int i = 7;
    cout << i++ << endl;
    // 7 , i = 8

    // pre increment
    cout << "**************** \n";
    int b = 2;
    cout << ++b << endl;
    // 3 , b =  3

    // similar for decrement
    return 0;
}

int incrHW()
{

    int a = 1;
    int b = a++; // b = 1 , then a = 2
    cout << b << endl;

    int c = ++a; // a =3 , c = 3
    cout << c << endl;

    return 0;
}

int forlo()
{

    for (int a = 0, b = 1; a >= 0 || b > 1; a--, b--)
    {
        cout << a << " " << b << endl;
    }
    // cout << "chup";
    return 0;
}

int sumofN()
{
    int n;
    cout << "Enter number   : ";
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of " << n << "natural numbers : " << sum << endl;

    return 0;
}

int fibbonaci()
{

    int n;
    cout << "Enter num : ";
    cin >> n;

    int a = 0, b = 1;

    cout << a << " " << b << " ";
    for (int i = 1; i < n; i++)
    {
        int nextNumber = a + b;

        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }

    return 0;
}

int prome()
{
    int n;
    cout << "enter   : ";
    cin >> n;

    bool isPrime = 0; // assuming its not a prime number in the initializn
    for (int i = 0; i < n / 2; i++){
        if (n % i == 0){
            // cout << "not a prime number";
            break;
        }
        if (!isPrime){
            cout << "Not a prime " << endl;
        }
        else{
            cout << n << "is Prime " << endl;
        }
        cout << "noice" << endl;
    }
    return 0;
}


int main()
{

    // shift();
    // increment();
    // incrHW();
    // forlo();
    // sumofN();
    // fibbonaci();

    prome();

    return 0;
}