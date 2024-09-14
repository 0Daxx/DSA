#include <iostream>

using namespace std;

void typeOfPtr() {
    int a = 10 ;
    int* ptr ; //Wild ptr : decalred but not initialised hence points at random memory location  LEADS TO undefined behaviour , might leads to segmentation fault . 
    // segmentation fault is trying to access an inacceceable memory 

// nullPtr : points to null , good practice 
    int* nulllPtr = NULL  ;  // problem in decalring 2 ptr together
// causes segmentation fault  RUN TIME ERROR
    // cout << "Dereference of null ptr : " << *nulllPtr << endl ;  

    int* ptr2  = 0 ; 
    int* ptr3  = '\0' ;  // null chararcter 
    cout << nulllPtr << "  " << ptr2 <<endl  ;
    cout << "ptr2 = " << ptr2 <<endl ;
    cout << "ptr3 = " << ptr3 << endl ;
}


void danglingPtr(){
    int* ptr = new int; // Dynamically allocated memory
    *ptr = 10;
/*
points at a memory location which is not valid.
*/
}


// void danglingEx(){
//     int* ptr = new int;
//     *ptr = 10;
//     delete ptr; // deletes the dynamically allocated memory
//     ptr = nullptr; // Assigning nullptr to ptr to prevent dangling pointer
//     cout << *ptr << endl; // Causes segmentation fault as ptr is pointing to a memory location that has been deleted
// }

void dangExam(){
    int* ptr = NULL;
    {
        int x = 10 ;
        ptr = &x; // ptr now points to the same memory location as x
        
    }
    cout << *ptr << endl; // prints 10 as ptr still points to the same memory location as x
}

void genericPtr(){
// the problem 
    float f = 10.2;
// WONT WORK 
    // int* ptrInt = &f; // ptrInt is a pointer to float   // so here comes generic ptr 

/* special ptr that can point to any datatype 
2. cant be dereferenced 
*/
    char ch = 'l';
    void* chPtr = &ch ;
    cout << chPtr << endl;
    cout << ch << endl;
    // cout << *chPtr << endl; //2. cant be deref

    
    
}

void type(){
    int a = 10;
    void* ptr = &a ;

    // int* intPtr = ptr ;
    int* intPtr = (int*)ptr;  // using type casting

    /*a value of type "void *" cannot be used to initialize an entity of type "int *"*/

    cout << "void* ptr : " << ptr << endl;
    cout << "Dereferencing void* ptr : " << *static_cast<int*>(ptr) << endl; // static_cast is used to convert void* to int*
    // or 
    cout << "int ptr : " << intPtr << endl;
    cout << "deref int ptr : " << *intPtr << endl;
}


int main() {
    // typeOfPtr();
    // dangExam();

    // genericPtr();
    type();
    return 0;
}