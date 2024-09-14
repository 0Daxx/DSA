#include <iostream>
#include <string>

using namespace std;

int pat1(){

    int n ;
    cout << "Enter num :";
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        

        for (int j = 1; j <= n; j++)
        {
            cout << i;
            // cout << j;
        }
        cout << "\n";
        
    }
    
    return 0;
}


int pat2(){
    
    int n ;
    cout << "Enter num :";
    cin >> n ;
    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){
            cout << j ;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int pat3(){
    
    int n ;
    cout << "Enter num :";
    cin >> n ;
    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){
            int sym = n - j +1;
            cout << sym ;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int pat4(){

    int n ;
    cout << "Enter num : ";
    cin >> n ;
    int i = 1 , count = 1 ; 

    
    while (i<= n )
    {
        int j = 1;
        while (j <= n ){
            cout << count << " ";
            count++;
            j++;
        }
        cout << "\n";
        i++;
    }
    
    return 0;
}

int pat5(){
    int n ;
    cout << "Enter num :";
    cin >> n ;

    for (int i = 1; i <= n; i++)
    {        
        cout << string(i ,'*') ;
        // for (int j = 1; j <= i; j++){
        //     // cout << j * "*";
        //     // cout << string(j ,'*') ;
        //     cout << string(i ,'*') ;
        // }
        cout << endl;
    }
    
    return 0;
}


int pat5_(){
    int n ;
    cout << "Enter number ";
    cin >> n ;
    int row = 1;

    while (row <= n )
    {
        int col = 1 ;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    
    return 0 ;
}


int pat6(){

    int n ;
    cout << "Enter num :";
    cin >> n ;

    int row = 1 ;

    for ( row = 1; row <= n; row++)
    {
        int col = 1;
        for ( col = 1; col <= row; col++)
        {
            cout << row ;

        }
        cout << endl;
        
    }
    


    return 0;
}

// int pat7(){

    //int n ;
    // cout << "Enter num :";
    // cin >> n ;
//     return 0;
// }


int main(){

    // cout << " noice " << endl;
    // pat2();
    pat6();
    return 0;
}