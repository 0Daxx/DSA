#include <iostream>
using namespace std;

int printArray(int array[] , int size){

    for (int  i = 0; i < size; i++)
    {
        cout << array[i]  << " ";
        
    }
    cout << endl;
    return 0 ;
}
void updateAr(int arr[]){

    arr[1] = 45;
    printArray(arr, 3);
    
}

// hw 

// this is linear search
bool search(int arr[] , int size , int key){

    bool isFlag = false;
    for (int i = 0; i < size; i++){
        
        if (arr[i] == key){
            isFlag = true;
            cout << "noice" << endl;
            // return true; // returns ki wajah se fn hi exit ho gya , break hota to sirf loop se jaate 
            break;
        }
        
        
    }
    // why this line not being read 
    // cout << "the key is present" << endl;
    // cout << isFlag << endl;
    if(isFlag){
        cout << "the key  " << key << " is present" << endl;
    }

}


// failed attempts
    // app 2 here 
    //  access each elem 
    // for (int i = 0; i <= size/2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i]== arr[size - 1] ;
    //     arr[size - 1] = temp;
    // }
        // my try with BKaP 
    // for (int i = 0, j = size ; i < size/2 || true; i++ , j--)
    // {
    //     int temp = arr[i];
    //     arr[i]== arr[j] ;
    //     arr[j] = temp;
    // }

int reverseOfArr(int arr[] , int size){

    // app I 2 pointer approach 

        // BKAP 2nd try 
    for (int  i = 0 , e = (size - 1); i < e ; i++ , e--){
        int temp = arr[i];
        arr[i] = arr[e] ;
        arr[e] = temp;
    }

    
    
    return 0 ;
}


int reverseBy(int arr[] , int size){

    int start = 0 ;
    int end = size - 1;

    while (start <= end)    
    {
        swap(arr[start],arr[end]);
        start ++ ;
        end-- ;
    }
    
}

int sumOfElem(int arr[] , int size){

    int sum = 0;
    for (int  i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return sum;
}
int main() {
    // => updation , pass by reference 
    // int array[3] = {46,66,49};
    // printArray(array , 3);
                // the address of array is passed 
    // updateAr(array);
    // printArray(array , 3);

    // => linear search 
    int a[6] = {46,50,33,22,11,26};
    // search(a,4,46);

    // => reverse Of Array
    printArray(a, 6);
    // reverseOfArr(a, 6);
    reverseBy(a, 6 );
    printArray(a, 6);


    sumOfElem(a , 6);
    return 0;
}


// hw sumOfElem 
// power of 2 wala question ki 2nd approach or us jese 3 or question  