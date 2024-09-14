 // HW1 switch case in inifinite while loop : use exit()
    // HW 2 calc using switch for telling no of different notes (100 , 50 , 20 , 1 ) needed


#include <iostream>
using namespace std;


void q1(){
    int i = 1;
    while (i)
    {
        
        int n = 1 ;
        switch (n)
        {
        case 1:
            cout << n  << "  noice " << endl;
            i = 0;
            break;
            
        
        default:
            break;
        }
    }
    ;
    
}

// q2
int calcNotesByMe(int n ){

    // num of notes
    int notes100 = 0 , notes50 = 0 , notes20 = 0 , notes1 = 0;

    int num = n ; // copy of n 
    while (true){
        notes100 = num / 100 ;
        num %= 100;
        
        notes50 = num / 50 ;
        num %= 50;

        notes20 = num / 20 ;
        num %= 20;

        notes1 = num / 1 ;
        num %= 1 ;

        break; 


    }

    cout << "no of 100 :"<< notes100 << endl;
    cout << "no of 50 :"<< notes50 << endl;
    cout << "no of 20:"<< notes20 << endl;
    cout << "no of 1 :"<< notes1 << endl;
    return 0;
}

// q3 
int nthTermOfAP(int n ){

    // 3n + 7 ;
    int num = 3 * n + 7 ;
    cout << n <<  "th term  :  " << num << endl;
    return num; 
}


// q2 by bot 
int calcNotes(int n) {
    // num of notes
    int notes1000 = 0, notes100 = 0, notes50 = 0, notes20 = 0, notes1 = 0;

    int num = n; // copy of n

    // Calculate the number of 1000 notes
    notes1000 = num / 1000;
    num %= 1000;

    // Calculate the number of 100 notes
    notes100 = num / 100;
    num %= 100;

    // Calculate the number of 50 notes
    notes50 = num / 50;
    num %= 50;

    // Calculate the number of 20 notes
    notes20 = num / 20;
    num %= 20;

    // Calculate the number of 1 notes
    notes1 = num;

    cout << "no of 1000 : " << notes1000 << endl;
    cout << "no of 100 : " << notes100 << endl;
    cout << "no of 50 : " << notes50 << endl;
    cout << "no of 20 : " << notes20 << endl;
    cout << "no of 1 : " << notes1 << endl;

    return 0;
}

// Q4 number of 1 

int numOf1(int n ){

    int countOf1 = 0;
    while (n){
        if (n & 1 )
        {
            countOf1++;
        }
        
        
        // n >> 1 ;
        n >>= 1 ;
        // n /= 2;

    }
    cout << countOf1 << endl;
    return countOf1;
}

int total1(int a , int b ){

    int count = numOf1(a) + numOf1(b) ; 
    cout << "COUNT of 1 : " << count << endl;
}

//5 
int nthFibonacci(int n  ){


    // if (n ==  0 ){
    // if (n == 1 || n == 0 ){
    //     return 1;
    // }
    // assuming start with 1 
    if (n == 1 || n == 2 ){
        return 1;
    }
    
    // int n = 6 ;
    //  using loop;
    int term = 0;
    for (int  i = 0; i < n; i++){
        term = i-2 + i-1;
    }
    
    // using recursion    
    // return nthFibonacci(n-1 ) + nthFibonacci(n-2 ) ;
    cout << term << endl;
    return term ; 
}



int main() {
    // q1();

    // nthTermOfAP(5);  // q4

    // cout << nthFibonacci(2) << endl; // q5
    // calcNotes(140654); 

    // calcNotesByMe(1669);

    // numOf1(7); 
    // total1(7,7);

    int n = 4556;
    cout << sizeof(n) << endl;

    return 0;
}


// template of hw of videos 
// how to make tests using turbine 