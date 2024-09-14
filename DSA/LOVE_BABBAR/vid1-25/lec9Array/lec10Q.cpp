#include <iostream>
using namespace std;

int printArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}


int uniqueElement(int arr[] , int size ){
    int uniqueElem = 0;

    for (int  i = 0; i < size; i++)
    {
        uniqueElem = uniqueElem ^  arr[i] ;
    }
    cout << uniqueElem << endl;
    return uniqueElem ;
    
}

// q2 


// q3 find duplicate element 
int duplicateElem(int arr[] , int size ){

    int dupElem = 0 ;
    // maybe ar.size() only available if its vector 
    // for (int i = 0; i < arr.size(); i++){

    // xor all array elem 
    for (int i = 0; i < size; i++){
        dupElem = dupElem ^ arr[i];
    }
    // xor 
    for (int  i = 0; i < size; i++){
        dupElem = dupElem ^ i ;
    }
    cout << dupElem << endl;
    return dupElem;
}

int duppiELem(int arr [] , int size){

    // xor the whole array with it self
    
    int duplicaOfElem = 0 ;
    for (int i = 0; i < size; i++)
    {
        duplicaOfElem = duplicaOfElem ^ arr[i] ; 
    }
    
    for (int  i = 0; i < size;  i++)
    {
        duplicaOfElem ^= i ; // whast this 
    }
    
}

// 442 in ninjs

int qHw(int arr[] , int size){
    
    int appArr[1] = {0};

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    
    for (int  i = 0; i < size; i++)
    {
        ans = ans ^ i ;
appArr[i] = ans;

    }
    
    return 0 ;
}

int intersection(){



    return 0 ;  
}

int sortOne(int arr[] , int n ){

    int left = 0 , right = n - 1 ;
    
    while(left < right ){
        printArray(arr , n );
        cout << endl ; 
        while (arr[left == 0])
        {
            left++;
        }
        while (arr[right])
        {
            right --;
        }
        swap(arr[left] , arr[right]);

    }
}
int main() {
    int ar[11] = {5, 7, 7, 7, 7, 11, 13, 13, 13, 13, 5};

    int arr1[5] = {4, 2, 4, 3, 1};
    // uniqueElement(ar , 11 );  // HW this 
    // duplicateElem(arr1 , 5 );

    int arrSortOne[8] = { 0, 1, 2, 0, 1, 2, 0, 1};
    
    return 0;
}

// hw leetcode 442 , duplicates in array 
