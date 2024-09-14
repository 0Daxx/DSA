#include <iostream>
#include <iterator>  // for size BUT didnt work ig 
// template<size_t N> 
#include <cmath>  // for abs 
#include <vector>
using namespace std;
// using std::cout;
// using std::endl;
// using std::endl;

int ArrPri(int arr[] , int len){

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " |" ;
    }
    cout << endl;
}

void mergeTwoArray(int arr[] ,int m ,  int arr2[], int n ) {
    
    int len = m + n ;

    int ansArr[len];
    int i = 0 , j = 0 , idx = 0  ;
    while (idx < len )
    {
        if(i == m ){ // arr1 exhausted
            ansArr[idx++] = arr2[j++];
        }
        else if(j == n ){ // arr1 exhausted
            ansArr[idx++] = arr2[i++];
        }
        // if any one of the arr gets exhausted then no need to compare 
        else if(arr[i] == arr2[j]){
            ansArr[idx++] = arr[i++];
            ansArr[idx++] = arr2[j++];
        }
        else if(arr[i] < arr2[j]){
            ansArr[idx++] = arr[i++];
        }
        else { // arr2[j] < arr[i]
            ansArr[idx++] = arr2[j++];
        }
    }
    
    for (int i = 0; i < len; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;
    
}

// better optimised , more readable 
void mergeTwoArrayBY(int arr[] ,int m ,  int arr2[], int n ) {
    
    int len = m + n ;

    int ansArr[len];
    int i = 0 , j = 0 , idx = 0  ;
    while (i < m && j < n  )
    {
        
        // if any one of the arr gets exhausted then no need to compare 
        if(arr[i] == arr2[j]){
            ansArr[idx++] = arr[i++];
            ansArr[idx++] = arr2[j++];
        }
        else if(arr[i] < arr2[j]){
            ansArr[idx++] = arr[i++];
        }
        else { // arr2[j] < arr[i]
            ansArr[idx++] = arr2[j++];
        }
    }

    while(i < m ){
        ansArr[idx++] = arr[i++];
    }
    while(j < n ){
        ansArr[idx++] = arr2[j++];
    }
    
    for (int i = 0; i < len; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;
    
}
/*It is more optimized in terms of performance due to fewer comparisons and better readability. The separation of the merging logic into distinct phases allows for clearer code and potentially better performance in real-world applications.*/

// int targetSum(int arr1[],int key ){
int targetSum(int arr1[],int len,int key){
    
    // int lenArr = std::size(arr1);
    // int lenArr = sizeof(arr1) / sizeof(arr1[0]);
    // int lenArr1 = sizeof(arr2) / sizeof(arr2[0]);

    int count = 0 ;
    
    for (int i = 0; i < len ; i++)
    {
        
        for (int j = i  + 1 ; j < len; j++)
        {
            
            if(arr1[i] + arr1[j] > key ){
                continue;
            }
            else if(arr1[i] + arr1[j] == key ){
                count++; 
                cout << arr1[i] << arr1[j] << " ";
            }
        }
        
    }
    
    
    return 0;
}


int targetSum2Ptr(int arr[],int len,int key){
    if (len < 2) {
        // Not enough elements to form a pair
        return 0;
    }
    int count = 0 ; 
    int leftPtr = 0 , rightPtr = len - 1  ; 
    while (leftPtr < rightPtr)
    {
        int currentSum = arr[leftPtr] + arr[rightPtr]; 
        if(currentSum < key){
            leftPtr++;
        }
        else if(currentSum == key ){
            cout << arr[leftPtr] << arr[rightPtr] << " ";
            count++;
            leftPtr++;
            rightPtr--;
        }
        else {
            rightPtr--;
        }
    }
}


int absDiff2Ptr(int arr[] , int len , int key){
    int count = 0 ;
    // int leftPtr=0, rightPtr = len - 1  ;
    int leftPtr=0, rightPtr = 1  ;

    while(rightPtr < len ){
        int currentDiff = (abs(arr[leftPtr] - arr[rightPtr])) ; 
        if(currentDiff == key ){
            count++;
            cout << arr[leftPtr] << arr[rightPtr] << "  ,";
            leftPtr++;
            rightPtr++;
        }
        // diff is greater 
        else if (currentDiff > key){
            leftPtr++;
        }
        else{
            rightPtr++;
        }
        
    }
    
}

int squareArr(int arr[], int len ){

    // int ansArr[len] ;
    // vector<int> vect(len) ;
    vector<int> ansArr(len);
    int idx = len -1 ;
    int rightPtr = len - 1 , leftPtr = 0 ;

    while( leftPtr <= rightPtr){
        int leftValue = arr[leftPtr] * arr[leftPtr] ;
        int rightValue = arr[rightPtr] * arr[rightPtr] ;

        // case left val > right
        if(leftValue > rightValue){
            ansArr[idx--] = leftValue;
            leftPtr++;
        }
        else if(leftValue == rightValue){
            ansArr[idx--] = leftValue;
            leftPtr++;
            ansArr[idx--] = rightValue;
            rightPtr--;
        }
        
        else{
            // right > left 
            ansArr[idx--] = rightValue;
            rightPtr--;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << ansArr[i] << " ,";
    }
    cout << endl;
}

int absSum(int arr[], int len, int key ){
    // variation 1 : unique elem on the basis of indx  aka pair mustm be unique index s
        // [2 ,2,2,2] pair = 2 
    // variation 2 : [1,1,3,3] , key 4 
        // unique value 
    int count = 0 ;
    int leftPtr = 0 , rightPtr = len -1 ;
    // simple sum waale ka 
    while(leftPtr <= rightPtr){
        int currentAbsSum = abs (arr[leftPtr] + arr[rightPtr]) ; 
        if(currentAbsSum > key){
            rightPtr--;
        }
        else if(currentAbsSum < key){
            leftPtr++;
        }
        else{
            cout << "("<< arr[leftPtr] << "," << arr[rightPtr] << ") ";
            rightPtr--;
            leftPtr++;
        }
    }

}


int main() {

    int arr1[] = {1, 2, 3, 7, 9};
    int arr2 []= {0, 3,10 , 11 , 12 };
    // mergeTwoArray(arr1,5,arr2,5);

    // int arr3[] = {1, 2 , 3 ,3 , 4 , 5 };
    int arr3[] = {-2, -1 , 0 ,1 , 3 ,6 , 8 , 11 };
    // targetSum(arr3,6,6);
    // targetSum2Ptr(arr3,8,9);

    // cout << abs(36.22);
    // cout << abs(-36.22);
    int arr4[] = {5,10,15,20,30};
    // absDiff2Ptr(arr4,5,10);

    // int arr5[ ] = {-4,-3,-1,1,2,3,10};
    int arr5[ ] = {-3,-3,-2,-2,-1,0,2,2,2,3,4,7,7};
    // squareArr(arr5,7);
    absSum(arr5,13,4);
    return 0;
}