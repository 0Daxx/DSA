#include <iostream>

using namespace std;

void pointer() {
    int x = 10 , a = 5 ;
    float y  = 5.6 ;
    float* ptrOfy = &y ;
    int* ptrOfx = &x ;
    cout << "add of x : " << ptrOfx << endl ;

    ptrOfx = &a ; 
    cout << "add of a : " << ptrOfx << endl ;
    cout << "add of y : " << ptrOfy << endl ;



}

void changeValueByRef(){

    float y  = 5.6 ;
    float* ptrOfy = &y ;
    cout << "Value of y : " << *ptrOfy << endl ;

    *ptrOfy = 5.6;

    cout << "Updated Value of y : " << *ptrOfy << endl ;
    cout << "LEts check y : " << y ;
}

void swap ( int x , int y ){
    cout << "*****Swap by Value , by making a soft copy *****" << endl ;

    int temp = x ;
    x = y ;
    y = temp ;
}

void swapPassByRef(int* x , int* y ){
    cout << "*****Swap by REf  *****" << endl ;
    
    // cout << "Value of a : " << x << "Value of b : " << y << endl ;
    int temp = *x ;
    *x = *y ;
    *y = temp ;

    
}


int main() {
    // pointer();
    // changeValueByRef();

    int a = 10 , b = 20 ;
    
    swap(a , b );
    cout << "Updated Value of a : " << a << "Value of b : " << b << endl ;
    swapPassByRef(&a, &b);
    cout << "Updated Value of a : " << a << "Value of b : " << b << endl ;
    return 0;
}

/*
pointer can store address 

int* ptr -> to store add of an integer variable   
similar for other data types 


& address operator aka ampercent 

* dereference operator 
*/