#include <iostream>

using namespace std;

void firstAndLastOcc(string s, char ch , int* first , int* last  ){
    

    // frist 
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ch ) {
            *first = i ;
            break;
        }
    }
    //lasr 
    for (int j = s.size()-1; j > 0; j--)
    {
        if(s[j] == ch ) {
            *last = j ;
            break;
        }
    }
}








void pointerArith() {
    int x = 20 ;
    int* ptr = &x ;

    // string str = "Kenzoism" ;
    // string* ptr = &str;
    // pointer arithmetic is different then int arithmetic
    cout << ptr << " " << "the next Add is " <<  (ptr+ 1) << endl;
    // ptr + 2 is basicallt ptr + 2 * sizeOf(<dataType> of variable) 
    cout <<  "the next to next Add is " <<  (++ptr) << endl;
}
    /*
    + 1 : adding 1 unit equivalent of the size of data type the variable pointer is pointing at
    c = 0 14 + 8
    9e
    */

int ptrArr(){

    int arr[3] = {1 , 10  , 11 }; 
    int* ptr = &arr[0];

    cout << ptr << "  " << *ptr <<  endl;
    cout << *ptr++ << endl;
    cout << ptr << "  " << *ptr <<  endl;
    cout << ++*ptr << endl;
    cout << ptr << "  " << *ptr <<  endl;
}

int ptrArr2(){
    int arr[3] = {1 , 10  , 11 }; 
    int* ptr = &arr[0];

    cout << (*ptr)++ << endl ;
    cout <<   arr[0] << " " << arr[1] << endl ; 
}

// using postfix prefix 
void postFix(){
    int arr[3] = {1,22,20};
    int* ptr = &arr[0];

    cout << ptr << " " << *ptr << endl ;

    *ptr++; // remember assignment is executed right to left os the ptr is updated , and shift 1 unit forward  
    cout << ptr << " " << *ptr << endl ;
    cout << *ptr++ << " " << *ptr << endl ;
    
}

void prefix(){
    int arr[3] = {1,22,20};
    int* ptr = &arr[0];
    cout << *ptr++ << endl ;

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    cout << ptr << "  " << *ptr << endl ; 
}


void ptrInPara(){
    int arr[3] = {1,22,20};
    int* ptr = &arr[0];

    cout << (*ptr)++ << " " << *ptr << endl ;
    // (*ptr)++ means bracket first , dereferencing occurs and then increment the value by 1 
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return ;
}

void pointerArith3(){
    int arr[3] = {1 , 6 ,0} ;
    int* ptr = &arr[0];
    cout << *++ptr << endl ;
         // ptr pointer at elem 0 then incremenet the ptr so it pointed at elem1 and then dereference it 
    cout << ++*ptr << endl ; // 1st dereference then increment the value at that address 
    cout << "The array " << endl ;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

}

// for first and last occ this main
// int main() {
//     string s = "nmaabac";
//     int first = -1 , last = -1;
//     // int* firstPtr = &first , lastPtr = &last ;
//     int* firstPtr = &first ;
//     int* lastPtr = &last ;
//     firstAndLastOcc(s , 'a',firstPtr , lastPtr);
//     cout << "First occ at : " << *firstPtr << endl ;
//     cout << "last occ at : " << *lastPtr << endl ;
//     return 0;
// }



// ARRAY AS POINTERS 

void arrPri(int* arr , int len ){
    cout << "*****The array *****" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << *(arr + i) << ", ";
    }
    cout << endl;
}

void arrPtr(){
    int arr[3] = {15,3,10};
    int* ptr = &arr[0];

    // cout << "add of Arr : " << arr << endl << "add of arr via ptr : " << ptr ;

    cout << "1st elem : " << *(arr + 0)  << endl;
        // cout << arr[i] << ", "; // this is just syntactical sugar of the one above since thats the one thats executed behind the scene

    cout << "2nd elem : " << *(arr + 1)  << endl;
}

void arrPtr1(){
    int arr[3] = {15,3,10};
    int (*ptr)[3] = &arr; 
    // ptr to point add of a len 3 arr
    cout << ptr << " " << arr << " " << *ptr << " " << *arr <<  endl ;

}

void Arr2DPtr(){
    int m = 3 , n = 4 ; 
    int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}};

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << *(*(arr  + i )  + j ) << ", ";
        }
        cout << endl ;
    }
    
}

int main(){
    // pointerArith();
    // ptrArr();
    // ptrArr2();
    // postFix();
    // ptrInPara();
    // prefix();

    // pointerArith3();
    // arrPtr();
    // arrPtr1();
    Arr2DPtr();
    return 0;
}