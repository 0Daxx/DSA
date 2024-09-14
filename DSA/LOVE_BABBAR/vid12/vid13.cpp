#include <iostream>
// using namespace std;
using namespace std;


int pivotElem(int arr[] , int size){

    int start = 0 ;
    // int end = arr.size() ; 
    int end = size - 1 ; 
    int mid = start + ( end - start) / 2 ;
    // case 1 : pivot elem is smallest 
    while (start < end ){
        if (arr[mid] >= arr[0]){
            start = mid + 1 ;
        }
        else {
            // arr[mid] <= arr[end]
            end = mid;
        }
        
        mid = start + ( end - start) / 2 ;
    }
    cout << start << endl;
    return start ; 

}

int binarySearch(int arr[] , int s , int e  , int key ){

    int start = s , end = s - 1 ;
    int mid = start + ( end - start ) / 2 ;

    while (start < end )
    {
        if (arr[mid] == key)
        {
            return mid ; 
        }
        
        if(arr[mid] > key ){
            start = mid + 1 ; 
        }
        else{
            end = mid - 1 ;
        }

    }
    mid = start + ( end - start ) / 2 ;
    return -1;
}

int keyInRotatArr(int arr[] , int size , int key){


    int pivot = pivotElem(arr , size );
    if ( key >= arr[pivot] && key <= arr[size] ){
        //  lies in 2n 

        // return binarySearch(arr,size,key);

        // cout << binarySearch(arr, pivot , (size - 1) ,key) << endl;
        return binarySearch(arr, pivot , (size - 1) ,key);
    }
    else{
        // cout << binarySearch(arr, 0 , (pivot - 1)  , key) << endl;
        return binarySearch(arr, 0 , (pivot - 1)  , key);
    }
    
    // return -1;
}


// vid 14 

int binaryForNum(int n ){

    int start = 0 , end = n ; 
    int mid = start + (end - start )/ 2 ;

    int ans = -1 ;
    while (start <= end )
    {
        int square = mid * mid ;

        if (square < n )
        {
            ans = mid;
            start = mid - 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid = start + (end - start )/ 2 ;
    }   
    return ans ; 


}

int sqrtBinarySearch(int x ){
    
    cout << binaryForNum(x ) << endl;
    return binaryForNum(x );
}


// 
double morePrecision(int n , int precision , int tempSol){

    double factor = 1 ; 
    double ans = tempSol ;

    for (double i = 0; i < precision; i++)
    {
        factor /= 10 ; 
        for (double  j = ans ; j * j < n ; j += factor )
        {
            ans = j ;
        }
        
    }
    cout << ans << endl;
    return ans ; 
}

int main() {
    int pivotArr[6] = {7 , 9 , 11 , 2 , 5 , 6};
    cout << "noce" << endl;
    // pivotElem(pivotArr , 6 );

    int KeyArr[6] = {7 , 9 , 11 , 2 , 5 , 6};
    
    // keyInRotatArr(KeyArr, 6 , 7);

    // binarySearch(KeyArr, 0 , 6 , 5);

    // cout << keyInRotatArr(KeyArr, 6 , 7) << endl;
    // sqrtBinarySearch(64 );
    morePrecision(37,3,6);
    return 0;
}