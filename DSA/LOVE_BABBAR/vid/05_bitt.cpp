#include <iostream>
using namespace std ;

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

int prime(){

    int n ;
    cout << "enter num ";
    cin >> n ;

    bool isPrime = 1;

    for (int i = 0; i < n/2; i++)
    {
        if (n%i==0)
        {
            isPrime = 0;
            break;
        }
        
    }
    if (isPrime == 0)
    {
        cout << "Not a prime " << endl;
    } else
    {
        cout << n <<  "is prime " << endl;
    }
    
    
    return 0;
}
int main (){
    // prome();

    prime();
    cout << "kala dog " ;
    return 0;
}


