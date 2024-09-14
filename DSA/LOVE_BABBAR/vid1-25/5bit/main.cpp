#include <iostream>
using namespace std;

int hammingWeight(int n) {
        int c = 0;
        while(n){   
            if(n%2 == 1)c++;
            n /= 2;
        }
        cout << c << endl;
        return c;
    }

int main(){
    hammingWeight(6);

    return 0 ;
}
