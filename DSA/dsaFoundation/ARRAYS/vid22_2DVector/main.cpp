#include <iostream>
#include <vector>
using namespace std;

void initialise2DVector() {
    // vector<vector <int>> Vect2;

    // vector<vector <int> > Vect2D(m,vector<int>n);   // WRONG , alwaya give ()

    int m = 3 , n = 2 ;
    vector<vector <int> > Vect2(m,vector<int>(n,0));
    // vector<vector <int> > Vect2D(m,vector<int>(n,0));
    vector<vector <int> > Vect2D(m,vector<int>(n));
    Vect2D = {{1,2,3},{4,5},{8,9,10}};

    for (int i = 0; i < Vect2D.size(); i++)
    {
        for (int j = 0; j < Vect2D[i].size(); j++)
        {
            cout << Vect2D[i][j] << ", " ;
        }
        cout << endl;
    }
    
}

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


vector <vector <int >>  pascalTriangle(){

    int n  = 5 ;
    vector < vector <int>> Vect(n) ; 
    // vector < vect or <int>> Vect(n,vector<int> (n, 1)) ; 
    for (int i = 0; i < n; i++)
    {
        // int ithVect = Vect[i];
        // ithVect.resize(i+1) ;
        Vect[i].resize(i+1);
        Vect[i][0] = Vect[i][i] = 1 ;

        for (int j = 0; j < i; j++)
        {
            // Vect[i][j] = Vect[i-1][j-1] + Vect[i-1][j];
            
            if(j ==0 || j == i ){
                // Vect[i][j] = 1;
            }
            else {
                Vect[i][j] = Vect[i-1][j-1] + Vect[i-1][j];
            }
        }
        
    }
    VecPri(Vect);
    return Vect ; 
}


int main() {
    // initialise2DVector();
    pascalTriangle();
    return 0;
}