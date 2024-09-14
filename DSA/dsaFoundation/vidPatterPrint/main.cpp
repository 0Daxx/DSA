#include <iostream>
using namespace std;


void opera(){

    // int u = 0 , 2 , 5 ;
    cout << "noice" << endl;
    cout << (4+ 3 + "   pqr ") << endl; // null WHAT 
    
}

void rever(int n ){

    int num = 0 ;
    while (n)
    {
        num = num * 10 + n%10;
        n /= 10 ;
    }
    cout << num << endl;
    
}

void sumOfSeries(int n ){

    int evenSum = 0;
    int oddSum = 0;

    
    for (int i = 1 , j = 2 ; i <= n; i += 2  , j += 2  )
    {
        evenSum += j ;
        oddSum += i ;
    }
    cout << evenSum - oddSum << endl;
    
}

void som(int n ){

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        (i%2!=0)? sum += i : sum -= i ; 
        
    }
    cout << sum << endl;
}


int fact(int n ){

    if (n == 0 || n == 1 ) return 1 ;
    int factorial = 1 ;
    for (int i = 1; i <= n ; i++)
    {
        factorial *= i ;
        cout << factorial << endl;
    }
    
}


// power 
int power(int a , int b ){

    int num = 1 ;
    for (int i = 1; i <= b; i++)
    {
        num = num *  a  ;
    }
    cout << num << endl;
}

int pat1(){

    int n = 5 ;

    for (int i = 1; i < n; i++)
    {
        
        // space 
        cout << string(n - i , ' ') ;

        // pattern 
        for (int j = 0; j < 2 * i - 1 ; j++)
        {
            cout << (char)(65+j) << ' '; 
        }
        cout << endl;

        // gaps
        for (int l = n + 1 ; l < 2 * n - 1  ; l++)
        {
            
            // gaps 
            cout << string(l - n , ' ');

            // for (int m = 0; m < ; m++)
            // {
            //     /* code */
            // }
            
        }
        
        
        
    }
    
}

int star(int n ){

    // now consider its odd always 

    for (int i = 1; i <= n ; i++){
        if (i == (n / 2) + 1 )
        {
            cout << string(n , '*') ;
        }
        cout << string(n - (n / 2) , ' ' ) << "* " << endl ;

    }


    
}
int main() {
    // opera();
    // rever(6458);
    // sumOfSeries(6);
    // som(6);
    // fact(5);
    // power(2 , 6);
    // pat1();   // incomplete
    star(7);
    return 0;
}