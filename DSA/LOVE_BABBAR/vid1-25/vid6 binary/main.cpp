#include <iostream>
#include <math.h>

using namespace std;


void decToBinary(int n ){
    cout << "Binary of Num " << n << " :  " ;

    long long binNum = 0;
    int i = 0;
    while(n!= 0){
        // int bit = n &  1 ;
        int bit = n &  1 ;
    // cuz the bit is int , it has limits which reach quickly on number 1000  

        binNum = (bit * pow(10 , i ))  + binNum  ;

        n = n / 2 ;
        // n = n >> 1;
        i++;
    }
    cout << binNum << endl; 

}


int covertToDecimal(){

    int n = 100101;
    // int datatype limits ??? 
    int decNum = 0;
    int i = 0;
    while (n){
        if (n&1){
            decNum += pow(2,i );
            // n /= 2 ;
            n = n >>1 ;
        }

        i ++;
    }
    cout << decNum << endl ;

    return 0;
}


int reverseNum(int a ){
// int makeAnum(int a , int b , int c ){
    int numNum = 0; 
    while(a =! 0 ){
        int i = 0 ;
        int dig = a%10 ;
        a = a/10;
        numNum += pow(10,i) + dig ;
        

    }
    cout << "the num : " << numNum << endl;    
    
    return 0 ;
}

int covertNegToBinary(){
    int n = -6 ;
    
    for (int  i = 0; i < 33; i++){
        
    }
    
}

int twoScompliment(){

    // dec to binary 
    int n = 6;
    int binNum = 0;

    // last ki digit chahiye 
        // I 
    while (n)
    {
        binNum += n & 1 ;
        n/2;
        // n >> 1 ; 

    }
    cout << binNum << endl;
    return 0 ;
}

int main() {
    
    // decToBinary(-5);

    // covertToDecimal();
    reverseNum(456);
    // twoScompliment();
    return 0;
}


// HW 
// 1. dec to binary , case : -5  