#include <iostream>
#include <vector>
using namespace std;
#include <stdio.h>
// int priArr( int m , int n ,int arr[][n]){
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " " ;
//         }
//     }

// }


/*
int multiPliOfMat(int m , int n , int arr1[m][n] , int p , int q , int arr2[p][q]) {
    // multi impossible
    if(n != p ) return 0 ;

    // vector<int> resMatrix(len,)
    // How to create 2d vector
    int ansMat[m][q] ;


    int len = m * q ;

    while (len){
        // raghav bhai wala
        // for (int i = 0; i < m; i++){
        //     for (int j = 0; j < q; j++){
        //         // can create a fn to calc each elem at place
        //         // ansMat[i][j] =
        //         int elem ;
        //         // elem = arr1[i] * arr2[i] + arr1[i]
        //     }
        // }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < q; j++){
                int elem ;
                // i = 0, j = 0 ;
        // loop n times chalega
        //say elem[1,2] elem[i,j
                int k = j ;
                while(n){
                    elem += arr1[i][k] * arr2[k++][j];
                    ansMat[i][j] = elem ;
                    elem = 0 ;
                    n--;
                }
            }

        }

        // int elem ;
        // int i = 0, j = 0 ;
        // // loop n times chalega
        // //say elem[1,2] elem[i,j
        // int k = j ;
        // while(n){
        //     elem += arr1[i][k] * arr2[k++][j];
        //     ansMat[i][j] = elem ;
        //     n--;
        // }
        len--;
    }

}
*/

int multiOfMartic(){
    int m = 2, n = 3, p = 3, q = 2;
    int arr1[m][n] = {{1, 0, 2}, {3, 4, 5}};
    int arr2[p][q] = {{1, 0}, {2, 3}, {4, 5}};
    int ansMat[m][q] = {0};

    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < q; j++)
        {
            
            for (int k = 0; k < n; k++)
            {
                ansMat[i][j] += arr1[i][k] * arr2[k][j];
            }
            
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < q; j++)
        {
            cout << ansMat[i][j] << ", " ;
        }
        cout << endl;
    }
    
}

int multi(){
    int m = 2, n = 3, p = 3, q = 2;
    vector<vector<int>> arr1 = {{1, 0, 2}, {3, 4, 5}};
    vector<vector<int>> arr2 = {{1, 0}, {2, 3}, {4, 5}};
    vector<vector<int>> ansMat(m, vector<int>(q, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                ansMat[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << ansMat[i][j] << ", ";
        }
        cout << endl;
    }
}



/* multi-dimentional array
-> representing grids
-> faster access
*/

int transpose(){
    int m = 3 , n = 2 , arr[m][n] = {1,2,3,4,5,6};  // initialisation isnt right 
    // int m = 3 , n = 3 , arr[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int transArr[n][m] = {0};
    for (int i = 0; i < n ; i++) // col 
    {
        
        for (int j = 0; j < m; j++) // row of arr 
        {
            transArr[i][j]= arr[j][i];
        }
        
    }
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transArr[i][j] << ", " ;
        }
        cout << endl;
    }
    

}

int main() {
    int mat1[2][3] = {{1,0,2},{3,4,5}};
    int mat2[3][2] = {{1,0},{2,3},{4,5}};
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    // multiOfMartic();
    // multi();
    transpose();
    return 0;
}