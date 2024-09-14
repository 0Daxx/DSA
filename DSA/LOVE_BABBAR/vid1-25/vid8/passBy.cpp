#include <iostream>
using namespace std;


void addOne(int n ){

    n++;
    cout << " n : " << n << endl;
}
int main() {

    int num = 5 ;
    addOne(num);
    // 
    cout << " n : " << num << endl;
    
    return 0;
}