#include <iostream>
using namespace std;

void sorting(int arr[] , int size ){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}


int firstOccurence(int arr[], int size , int key){

    int start = 0 ; 
    int end = size -1 ;
    int ans = -1 ; 
    int mid = start + ( end - start ) / 2 ; 

    while (start <= end )
    {
        // left most 
        if (arr[mid] == key ){
            ans = mid ;
            end = mid - 1 ; 
            
        }
        else if (key > arr[mid]){
            start = mid + 1 ;
        }
        else if (key < arr[mid]){
            end = mid - 1 ; 
        }
        mid = start + ( end - start ) / 2 ;
    }
    
    return ans ; 
}

int lastOcc(int arr[] , int size , int key ){

    int start = 0 ;
    int end = size - 1 ;
    int ans = -1 ;  // ans here is last occurence
    int mid = start + ( end - start ) / 2 ;

    while (start <= end)    
    {
        if (arr[mid] == key)
        {
            ans = mid ;
            start = mid + 1 ;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1 ;
        }
        else {
            // case :  arr[mid] > key 
            end = mid - 1 ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    
    return ans ; 
}

// Q3 peak element of an mountain arrow 

int peakElem(int arr[] , int size){

    int start = 0 ;
    int end = size - 1 ;
    int mid = size + (end - start ) / 2 ;

    while (start < end)
    {
        if (arr[mid] < arr[mid+1])
        {
            // left side of mountain 
            start = mid + 1 ;
        }
        else
        {
            end = mid ;
        }
        
        mid = size + (end - start ) / 2 ;
    }
    
    return start;
}
int binarSearch(int arr[] , int size , int key){
    int start = 0 ;
    int end = size - 1 ;
    // int mid = (start + end) / 2 ; // minor issue 

    // so use this 
    int mid = start + ( end - start ) / 2 ;
    while (start <= end )
    {
        if (arr[mid] == key)
        {
            return mid; 
        }
        
        // right  mei hoga 
        if (arr[mid] < key)
        {
            // s is the 
            start = mid + 1 ; 
        }
        else{ // key < 
            end = mid - 1 ;
        }
        // mid = (start + end )/ 2 ;
        mid =  start + (end - start) / 2 ;
    }
    return -1 ; 
}




int main() {
    int even[11] = {2 , 4 , 8 , 8 , 10 , 10 , 12 , 20 , 32 , 44 , 46};
    int odd[] = {3 , 6 , 9 , 15 , 21 , 27 , 33 , 36 , 69 };

    // cout << binarSearch(even , 8 , 21 ) << endl;
    // cout << binarSearch(odd , 9 , 15 ) << endl;
    
    // q2 
    cout << firstOccurence(even , 11 , 8) << endl;
    cout << lastOcc(even , 11 , 8) << endl;
    // sort array 
    int arra[9] = { 2 , 34 , 12 , 10 , 5 , 6 , 7 , 8 , 9 ,};

    // q3 peak elem
    int peakArr[8] = {0, 2, 3, 5, 4, 2, 1, 0}; 
    peakElem(peakArr , 8 );
    return 0;
}

// find pivot in array 