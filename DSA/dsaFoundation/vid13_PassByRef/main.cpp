#include <iostream>

using namespace std ;

void swap(int* x , int* y){

    int temp = *x;
    *x = *y;
    *y = temp;
}



int main(){
    int x = 6 , y = 9 ;
    printf("x : %d \n",x );
    printf("y : %d \n",y );
    swap(&x ,&y);
    cout << "Swapped \n" ;
    printf("x : %d \n",x );
    printf("y : %d \n",y );
    return 0;
}
// inline fn : that expands at each call during execuN