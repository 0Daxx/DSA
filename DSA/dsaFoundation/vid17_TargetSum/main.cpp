#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std ;




void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}


int targetSum(vector <int> &vect, int key){

    // brute force
    int totalPair = 0 ;
    for (int i = 0; i < vect.size(); i++){
        for (int j = i + 1 ; j < vect.size(); j++){
            if(vect[i] + vect[j] == key){
                totalPair++;
                printf("[%d , %d]",vect[i] , vect[j]);
                cout << endl;
            }
        }    
    }
    // lil optimise , assume its sorted using binary search
}
int targetSumThree(vector <int> &vect, int key){

    // brute force
    int len = vect.size() ;
    int totalPair = 0 ;
    for (int i = 0; i < len; i++){
        for (int j = i + 1 ; j < len; j++){
            for (int  k = j + 1 ; k < len; k++)
            {
                if(vect[i] + vect[j] + vect[k] == key){
                totalPair++;
                printf("[%d , %d , %d]",vect[i] , vect[j] , vect[k]);
                cout << endl;
            }
            }
            
            
        }    
    }
    // lil optimise , assume its sorted using binary search
}


// my way 
int unique(int arr[], int len){

    int uniqueElem = 0;
    for (int i = 0; i < len; i++)
    {
        // uniqueElem = uniqueElem ^ arr[i];
        uniqueElem ^=   arr[i];
    }
    
    cout << "Unique Elem : " << uniqueElem << endl;

}

//***********ARRAY MANIPULATION**************

void uniqueElem(int arr[] , int len){

    // updating the dupli elem to -1 
    for (int i = 0; i < len; i++)
    {
        
        for (int j = i +1 ; j < len; j++)
        {
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = -1 ;
            }
        }
        
    }
    int unique ;
    for (int i = 0; i < len; i++)
    {
        if(arr[i] > 0 ){
            unique = arr[i];
        }
    }
    cout << "Unique Elem : "<< unique << endl;
}

// Q Second largest 
void secLargestElem(int arr[], int len){

    // size_t len = sizeof(arr) / sizeof(arr[0]);
    /*the parameter arr is treated as a pointer to the first element of the array, not as an array itself. Therefore, sizeof(arr) will return the size of the pointer, not the size of the entire array. This will lead to incorrect calculations of len.*/

    // int len = sizeof(arr) / sizeof(arr[0]);
    /*warning: 'sizeof' on array function parameter 'arr' will return size of 'int*' [-Wsizeof-array-argument]
    int len = sizeof(arr) / sizeof(arr[0]);*/

    // int larg1 = INT64_MIN ; 
    // int larg2 = INT64_MIN ; 
    int larg1  = INT_MIN , larg2 = INT_MIN;
    for (int i = 0; i < len ; i++)
    {
        if(arr[i] > larg1){
            larg2 = larg1 ;
            larg1 = arr[i] ; 

        }
    }
    cout << "Large 1 " << larg1 << endl;
    cout << "Large 2 " << larg2 << endl;
}

void rotateByK(int arr[] ,int len , int k){
    // works but not for large k number 
    // rotate by 
    k = k % len ;
    int ansArr[len] , j = 0;
    for (int i = len-k; i < len; i++)
    {
        ansArr[j++] = arr[i];
    }
    
    for (int i = 0; i <= k ; i++)
    {
        ansArr[j++] = arr[i];
        
    }
    
    for (int i = 0; i < len; i++)
    {
        cout << ansArr[i] << " " ;
    }
    
    
    

    // rotate 
}



void rotByk(vector <int> &vect, int k){   

    int len = vect.size();
    k = k % len ;
    // reverse fn 
    // include algorigthm lib 
    reverse(vect.begin(),vect.end());
    reverse(vect.begin(),vect.begin()+k);
    reverse(vect.begin()+k,vect.end());
    printVector(vect);
    // printVector()


}


void queryNumIsPresent(int arr[], int len ){

    // int arr[] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};
    int masterArr[len] = {0};

    for (int i = 0; i < len; i++)
    {
        masterArr[arr[i]]= 1 ;
    }
    
    // query 
    int keyArr[] = {3,6,9,5,10} ; 
    size_t lenOfQuery = sizeof(keyArr) / sizeof(keyArr[0]);
    for (int i = 0; i < lenOfQuery ; i++)
    {
        if(masterArr[keyArr[i]] == 1){
            printf("%d is present \n",keyArr[i]);
        } else {
            printf("%d is not present \n",keyArr[i]);
        }

    }
    
}

void queryNumByUrvi(int arr[] , int len ){

    const int N = 1e5 + 10 ;
    vector <int> masterVect(N,0) ;
    
    // traverse 
    for (int i = 0; i < len; i++)
    {
        masterVect[arr[i]]++;

    }

    int keyArr[] = {3,6,9,5,10,3,10} ; 
    size_t lenOfQuery = sizeof(keyArr) / sizeof(keyArr[0]);
    for (int i = 0; i < lenOfQuery ; i++)
    {
        if(masterVect[keyArr[i]]){
        // if(masterVect[keyArr[i]] > 0){
            printf("%d is present %d times \n",keyArr[i] ,masterVect[keyArr[i]] );
        } 
        else printf("%d is not present \n",keyArr[i]);

    }
}



int main(){

    vector <int> vect = {0,1 , 2 , 3 , 4 , 5 , 6 , 7 } ;
    targetSum(vect,8);
    // targetSumThree(vect,5);
    int arr[] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};   // dupli elem 
    int arra[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6 ,6};

    size_t lenOfArr = sizeof(arr) / sizeof(arr[0]) ; 


    // unique(arra, lenOfArr);
    // uniqueElem(arra , lenOfArr);

    // secLargestElem(arra, lenOfArr);

    // rotateByK(arr,10,3);
    // rotByk(vect,5);

    // queryNumIsPresent(arr,10);
    // queryNumByUrvi(arra,lenOfArr);
    return 0 ;  
}

// how to write scientific notation 
const int N = 1e5 + 10 ;