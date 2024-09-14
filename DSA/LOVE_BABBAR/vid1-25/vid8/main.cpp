#include <iostream>
using namespace std;

void switCh()
{

    int n = 2;
    // char ch = 'A';
    switch (3)
    {
    case 1:
        cout << "first" << endl;
        break;
    case 2:
        cout << "first" << endl;

        break;

    default:
        cout << "default case is run when " << endl;
        break;
    }
}

int calc()
{

    int n = 5;
    int m = 6;

    // user choose the operator to be used

    // char operator ;  WRONG
    char opert;
    cout << "enter operator :  ";
    cin >> opert;

    switch (opert)
    {
    case '+':
        cout << m + n << endl;
        break;
    case '-':
        cout << m - n << endl;
        break;
    case '*':
        cout << m * n << endl;
        break;
    case '/':
        cout << m / n << endl;
        break;

    default:
        break;
    }

    return 0;
}

int powOf()
{

    int n = 3;
    int pw = 4;

    int num = 1;
    for (int i = 1; i <= pw; i++)
    {
        num = num * n;
    }

    cout << num << endl;
    return 0;
}

bool isEven(int a)
{

    if (a & 1)
        return 0;

    return 1;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int nCr(int n = 5, int r = 1)
{

    // int n = 2 ;
    // int r = 6   ;

    return fact(n) / (fact(r) * fact(n - r));
}



bool isPrime(int n ){  
    // since it was bool i cant zero and 1 maybe 
    // Returning 0 or 1 from a boolean function is not recommended because it can lead to confusion and unexpected behavior. In C++,
    if (n == 0 || n == 1){
        cout << n << "  is neither prime nor composite" << endl;
        return false;
    }
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0){
            cout << n << "  is not prime " << endl;
            return false;
        }
    }
    cout << n << "  is prime " << endl;
    return true;
}

// 





int main() {
    // switCh();
    // calc();
    // powOf();
    // cout << isEven(5) << endl;

    // cout << nCr(7,3) << endl;
    // cout << nCr(10,4) << endl;
    // cout << nCr(8,5) << endl;
    // cout << nCr(15,7) << endl;
    
    int num = 4;

    if (isPrime(num)){
        cout << num << "  is prime " << endl;
    }
    
    return 0;
}


    // HW1 switch case in inifinite while loop : use exit()
    // HW 2 calc using switch for telling no of different notes (100 , 50 , 20 , 1 ) needed