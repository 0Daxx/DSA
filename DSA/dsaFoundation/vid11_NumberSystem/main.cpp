#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void binaryToDecimal(int n){

    // int n = ;
    
    int num = 0 ;

    int length = to_string(n).length();
    for (int i = 0; i < length; i++){
        int dig = n % 10 ; 
        n = n / 10 ;
        if (dig){
            
            // pow(2, i); 
            num += pow(2,i);
        }
    }
    cout << num << endl;
}


void decimalToBinary(int n){

    //  =  ;
    int num = 0 ;

    int length = to_string(n).length();
    // int length = 2 ;
    // for (int i = 0; i < length; i++)
    // {
    //     int dig = n % 2 ;
    //     n = n / 2 ;
    //     num = num * 10 + dig ;
    // }
    // for (int i = 0 , j = 0 ; i < length; i++ , j++)
    // {
    //     int dig = n % 2;
    //     n = n / 2 ;
    //     num = num + dig * j ;
        
    // }
    int power = 1 ;
    while (n)
    {
        int digit = n %2 ;
        num += digit * power  ;
        n /= 2 ;
        power *= 10 ;
    }
    
    cout << num << endl;
}

int add(int , int = 0); // fn prototype

int main() {
    // binaryToDecimal(101001);
    // decimalToBinary(14);
    add(6,9);
    add(6);


    return 0;
}

int add(int a , int b ){
    cout << a +b << endl;
    // return a + b;
}
