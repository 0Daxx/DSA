#include <iostream>
#include <math.h>
using namespace std;


void noice(){

    int n = 1;
    cout << "Noice" << endl;
}
int covertToDecimal(){

    int n = 100101;
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

    // now 1 compliment it 
    int randoBinary = 1011;
    int complimentNum = 0 ;

    while (randoBinary){
        int dig = randoBinary%10;
        complimentNum += 0 ; 
    }
    return 0 ;
}


int main() {
    // noice();
    // covertToDecimal();
    // twoScompliment();

    cout << !0 << endl;
    
    return 0;
}