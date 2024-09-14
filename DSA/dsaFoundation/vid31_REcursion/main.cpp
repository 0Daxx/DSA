#include <iostream>
#include <vector>

using namespace std;

int fn(int n ) {
    if (n == 1 ) return 1 ;
    return n * fn (n-1);
}

vector<int> memo;
/*a technique called "memoization". This involves storing the results of expensive function calls and reusing them when the same inputs occur again.*/
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    if (memo[n] != 0) return memo[n];

    memo[n] = fibonacci(n - 2) + fibonacci(n - 1);
    return memo[n];
}

int sumOfDig(int n ){
    int sum = 0 ;
    if(n == 0 ) return 0; // base case  
    // work 
    int dig = n %10 ; 
    n /= 10 ;

    sum = dig + sumOfDig(n);
    return sum;
}

int sumOfDigBy(int n ){
    // base
    if(n <= 9 && n >=0) return n;

    return sumOfDigBy(n / 10 ) + (n%10);
}



/*
this power fn is example of how to EFFICIENTLY break the bigger problem cuz its logic that make it more efficient */
int power(int a , int b){
    if(b == 0 ) return 1 ;
    if(b == 1 ) return a ;

    // log approach 
    // even 
    int halfPow = power(a , b / 2 );
    if (b % 2 == 0){
        return halfPow * halfPow ;
    } else return a * halfPow * halfPow ;
    
}


int main() {
    memo.resize(100, 0);  // Resize the memo vector to hold up to 100 elements
    // cout << "Fibo of 5 : " << fibonacci(6) << endl;

    // cout << sumOfDig(1001) << endl;
    // cout << sumOfDigBy(2020) << endl ; 

    cout << power(2,6) << endl;
    return 0;
}


