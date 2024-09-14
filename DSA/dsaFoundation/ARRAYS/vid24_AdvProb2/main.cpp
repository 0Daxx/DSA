#include <iostream>
#include <vector>
using namespace std;

int VecPri(vector < vector < int >> Vect){

    for (int i = 0; i <=Vect.size()-1; i++)
    {
        for (int j = 0; j <=Vect[i].size()-1; j++)
        {
            cout << Vect[i][j] << " ,  " ;
        }
        cout << endl;

    }

}


void spiralMatrix(vector<vector<int>> &matrix)
{

    int m = (matrix.size()) , n = matrix[0].size();
    int totalElem = m * n ;

    int minRow = 0 , maxRow = matrix.size(), minCol = 0 , maxCol = matrix[0].size();

    int len = 0 ;
    while ( len < totalElem ){
        // min row
        for (int i = minCol; i < maxCol; i++){
            cout << matrix[minRow][i] << " , " ;
            len++;
        }
        minRow++;
        if(len >= totalElem) break;
        // maxcol
        for (int j = minRow; j < maxRow; j++){
            cout << matrix[j][maxCol-1] << " , "   ;
            len++;
        }
        maxCol--;
        if(len >= totalElem) break;
        // max row
        for (int i = maxCol-1; i >= minCol; i--){
            cout << matrix[maxRow-1][i] << " , " ;
            len++;

        }
        maxRow--;
        if(len >= totalElem) break;

        // print min col
        for (int i = maxRow-1; i >= minRow; i--)
        {
            cout << matrix[i][minCol] << " , " ;
            len++;
        }
        minCol++;
        if(len >= totalElem) break;

    }
}

void inputMaze(vector<vector<int>> &matrix){

    int row = matrix.size() -1  ;
    int  col = matrix[0].size() -1 ;
    int minRow = 0 , minCol = 0 , maxRow = row , maxCol = col ;
    int elem = (row+1) * (col+1) ;
    int count = 0 ;
    int value =  0 ;
    while(minCol < maxCol && minRow < maxRow ){

        // minrow
        for (int j = minCol; j < maxCol && minRow < maxRow; j++){
            matrix[minRow][j] = value++ ;
        }
        minRow++;

        // maxcol
        for (int i = minRow; i <= maxRow && maxCol < col  ; i++){
            matrix[i][maxCol] = value++ ;
        }
        maxCol--;

        // maxRow
        for (int j = maxCol; j >= minCol && minRow <= maxRow ; j--){
            matrix[maxRow][j] = value++  ;
        }
        maxRow--;

        // minCol
        for (int i = maxRow; i >= minRow; i--){

            matrix[i][minCol] = value++;
        }
        minCol++;
    }
    VecPri(matrix);
}

void mazeME(vector<vector<int>> &matrix){

    int row = matrix.size() -1  ;
    int  col = matrix[0].size() -1 ;
    int minRow = 0 , minCol = 0 , maxRow = row , maxCol = col ;
    int elem = (row+1) * (col+1) ;
    int count = 0 ;
    while(count < elem ){

        // minrow
        for (int j = minCol; j <= maxCol && elem > count; j++)
        {
            cout << matrix[minRow][j] << ", ";
            count++;
        }
        minRow++;
        // maxcol
        for (int i = minCol; i <= maxCol && elem > count ; i++){
            cout << matrix[i][maxCol] << ", ";
            count++;
        }
        maxCol--;

        // maxRow
        for (int j = maxCol; j >= minCol && elem > count ; j--){
            cout << matrix[maxRow][j] << ", ";
            count++;
        }
        maxRow--;

        // minCol
        for (int i = maxCol; i >= minCol && elem > count ; i--){
            cout << matrix[i][minCol] << ", ";
            count++;
        }
        minCol++;


    }

}


int main()
{
    // int matrix[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // spiralMatrix(matrix);
    // mazeME(matrix);
    inputMaze(matrix);
    return 0;
}

/*

//     while (minRow <= maxRow && minCol <= maxCol) {
//         // Fill the top row
//         for (int j = minCol; j <= maxCol; j++) {
//             matrix[minRow][j] = value++;
//         }
//         minRow++;
//         // Fill the right column
//         for (int i = minRow; i <= maxRow; i++) {
//             matrix[i][maxCol] = value++;
//         }
//         maxCol--;
//         // Fill the bottom row
//         if (minRow <= maxRow) { // Check if there's a bottom row to fill
//             for (int j = maxCol; j >= minCol; j--) {
//                 matrix[maxRow][j] = value++;
//             }
//             maxRow--;
//         }
//         // Fill the left column
//         if (minCol <= maxCol) { // Check if there's a left column to fill
//             for (int i = maxRow; i >= minRow; i--) {
//                 matrix[i][minCol] = value++;
//             }
//             minCol++;
//         }
//     VecPri(matrix);
*/