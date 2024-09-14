#include <iostream>

using namespace std;

int readArrViaRecur(int arr[] , int idx , int len) {
    // if(idx == len ) return 0;

    // cout << (arr[idx]) << ", ";
    // readArrViaRecur(arr, ++idx,len);


    // APP II :  print reverse 

    if(idx  == len ) return 0;
    readArrViaRecur(arr, ++idx,len);
    cout << (arr[idx]) << ", ";

}

int maxElem(int arr[], int idx , int len  ){

    if(idx == len - 1   ) return arr[idx];

    return max(arr[idx], maxElem(arr, idx + 1, len));
}

int sumOfArr(int arr[],int idx , int len){
    if(idx == len - 1 ) return arr[idx];

    return arr[idx] + sumOfArr(arr, idx + 1 , len );
}

string removeChar(string &str,int idx,int len ){
    if(idx == len  ) return "";
    string curr = "";
    curr += str[idx];
    return ((str[idx]=='a')? "": curr ) + removeChar(str , idx + 1 , len);
}


// string remChar

int main() {
    int arr[4] = {1,3,22,55};
    // readArrViaRecur(arr,0,4);
    // cout << maxElem(arr ,0,4) << endl;
    // cout << sumOfArr(arr, 0 , 4 ) << endl;
    string str= "banana"; 
    cout << removeChar(str,0,7);
    return 0;
}