#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int VecPri(vector < vector < int >> Vect){

    for (int i = 0; i < Vect.size(); i++)
    {
        for (int j = 0; j < Vect[i].size(); j++)
        {
            cout << Vect[i][j] << " ,  " ;
        }
        cout << endl;
    }
    
}





// vector < vector <int> > maxNumOf1(vector < vector <int> > &Vect){
pair <int , int >maxNumOf1(vector < vector <int> > &Vect){

    int row = Vect.size();
    int col = Vect[0].size();  // since 2d array can do this
    int maxCountOfOne = 0 ;
    int maxOneRow = -1 ;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            // sum += Vect[i][j];
            if(Vect[i][j] == 1 ){
                int numOfOne = col - j ;
                if (numOfOne > maxCountOfOne)
                {
                    maxCountOfOne = numOfOne;
                    maxOneRow = i ;
                    break;
                }
            }
        }
    }
    cout << "Max 1 are : " << maxCountOfOne << "" << "In the row  : " << maxOneRow << endl;
    return {maxCountOfOne , maxOneRow};
}

// find leftmost 1 

int leftMostOne(vector < vector <int> > &Vect){

    int row = Vect.size();
    int col = Vect[0].size(); // since its arr 

    int leftMostOneRow = -1 ;
    for (int i = 0; i < col; i++)
    {
        
        for (int j = 0; j < row; j++)
        {
            // if(Vect[i][j] == 1 ){
            //     leftMostOneRow = j ; 
            //     cout << "LeftMostOneRow : " << leftMostOneRow << endl;
            //     return leftMostOneRow;
            // }
            if(Vect[j][i] == 1 ){
                leftMostOneRow = j ; 
                cout << "LeftMostOneRow : " << leftMostOneRow << endl;
                return leftMostOneRow;
            }
        }
        
    }
    cout << "LeftMostOneRow : " << leftMostOneRow << endl;
    // return Vect ; 
}

int leftMostOneByUrvi(vector <vector <int>> &Vect){

    int leftMostOne = - 1 ;
    int maxOneRow = - 1 ;
    int j = Vect[0].size() -1 ;
    while ( j >= 0 && Vect[0][j]==1)
    {
        leftMostOne = j ;
        maxOneRow = 0 ;
        j--;
    }
    for (int i = 1; i < Vect.size() ; i++)
    {
        while(j >=0 && Vect[i][j] == 1 ){
            leftMostOne = j ;
            j--;
            maxOneRow = i ; 
        }
    }
    cout << "MAx num of 1 are in row : " << maxOneRow <<  endl;
    return maxOneRow ; 
    
}

int rotateMatrix(vector<vector<int>> &Vect){

    int row =  3, col = 3 ;
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            int temp = Vect[i][j] ;
            Vect[i][j] = Vect[j][i] ;
            Vect[j][i] = temp;
        }
        
        // reverse
        // reverse(Vect[i].begin(),Vect[i].end());
    }
    
    for (int i = 0; i < 3; i++)
    {
        reverse(Vect[i].begin(),Vect[i].end());
        
    }
    


    VecPri(Vect);
    
    
}



int main() {
    // int arr[][3] = {1,2,3,4,5,6};
    vector<vector<int>> VectorAr(4,vector <int> (3,0));
    VectorAr = {{0,1,1,1},{0,0,0,1},{1,1,1,1},{0,0,1,1}};
    // maxNumOf1(VectorAr);
    // leftMostOne(VectorAr);

    // leftMostOneByUrvi(VectorAr);
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotateMatrix(matrix);
    return 0;
}

// make the reverse of the arr parsed 
// multiplication of matrix 
/*
rotate arr by 90     => try 180 or smth 
*/