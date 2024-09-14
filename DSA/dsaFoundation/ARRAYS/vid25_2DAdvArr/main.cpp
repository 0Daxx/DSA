#include <iostream>

using namespace std;

void sumOfTriangle(int x1 , int y1 , int x2 , int y2 ) {
    int arr[4][4] = { 
        {1 , 2 , 3 , 4} ,
        {5 , 6 , 7, 8} ,
        {9, 10 , 11,12},
        {13 , 14 , 15 , 16}
        }; 
        
    int sum = 0 ;
    for (int i = x1; i <= x2; i++){ // row 
        
        for (int j = y1; j <= y2; j++)
        {
            sum += arr[i][j]; 
        }
    }
    cout << "Sum of Arr : " << sum << endl;
}



void sumOfTriangleUsingPrefixSum(int x1 , int y1 , int x2 , int y2 ) {
    int arr[3][4] = { 
        {1 , 2 , 3 , 4} ,
        {5 , 6 , 7, 8} ,
        {9, 10 , 11,12}}; 
        // {6 , 7 , 5 , 6} };
    int sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if(j -1 >= 0 ) { 
                arr[i][j] += arr[i][j-1];
                // cout << arr[i][j] << " ,";
            }
        }
        // cout << endl;
        
        // cout << " sum of row : " << sum << endl;
    } 
    
    for (int i = x1; i <= x2; i++)
    {
        if(y1!= 0){
            sum += arr[i][y2] - arr[i][y1] ;  
        }
        else {
            sum += arr[i][y2];
        }
    }
    
    
    
    cout << " sum of rectangle : " << sum << endl;
}






int main() {
    sumOfTriangle(0,0,4,4);
    // sumOfTriangleUsingPrefixSum(1,1,2,2);
    return 0;
}