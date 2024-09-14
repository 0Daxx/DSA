#include <iostream>

using namespace std;

void countNumOfDig(int n ){
    int count = 0 , sumOfDig = 0;

    int num  = 0 ;  // for reverse
    while (n)
    {
        int dig = n % 10 ;
        count ++;
        num = num * 10 + dig ;
        // whats wrong in 
        // num *= 10 + dig ;
        sumOfDig += dig;
        n /= 10;
    }
    cout << "Num of dig : " << count << endl;
    cout << "Num of sumOfDig : " << sumOfDig << endl;
    cout << "reverse of num : " << num << endl;
}


void sumOfSeries(int n ){
    int sum = 0 ;
    // easy 
    if(n %2 == 0){
        sum = -1 * (n/2);
    }else{
        sum = -1 * (n/2) + n;

    }

    // app 2 

    cout << "Sum of series : " << sum << endl;
}

double facto(int n ){

    int facto = 1 ;
    for (int i = 1; i <= n; i++)
    {
        facto  *= i ;
        cout << i << "! :" << facto << endl;
    }
    

}

int power(int a , int b){

    if(b == 0 ) return 1 ;
    if(b == 1 ) return a ;
    
    int halfPow = power(a,b/2);

    if(b %2 == 0) {
        return halfPow * halfPow ;
    } else{
        return halfPow * halfPow * a;

    }
}

int main(){

    // countNumOfDig(1354);
    // sumOfSeries(4);
    // sumOfSeries(5);

    // facto(5);
    cout << power(2,6) << endl;
    return 0;
}