#include <iostream>
#include <math.h>
using namespace std;

// q1
int reverseNum()
{
    int n = 2147483647;
    int dig = 0;
    int num = 0;

    if ((num > INT32_MAX / 10) || (num < INT32_MAX / 10))
        return 0;

    while (n)
    {
        dig = n % 10;
        num = num * 10 + dig;
        n = n / 10;
    }
    cout << num << endl;
    return num;
}

// q3
int pow2()
{

    int n = 256;

    int count = 0;
    while (n)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        if (count == 2)
        {
            cout << "Aint a 2n " << endl;
            return 0;
        }

        n = n >> 1;
    }
    cout << "its a 2n" << endl;
    return count;
}

int ispower2(){

    int n = 120;
    for(int i ; i > 30 ; i++){
            if(n == pow(2,i)){
                return true;
            }else false;
        }
    
}

void twosCompliment()
{
}

int main()
{
    // twosCompliment();
    // reverseNum();

    // int num = 4568;
    // int n = sizeof(n);
    // cout << (num / pow(10, n)) << endl;
    // cout << (136 & 1 ) << endl;
    // pow2();

    ispower2();
    return 0;
}