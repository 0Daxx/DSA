#include <iostream>
using namespace std;

#include <string>
#include <cmath>

int patt1()
{

    int num;
    cout << "Enter num ";
    cin >> num;

    int col = 1, count = 1;
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col < row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

int patt2()
{

    int num;
    cout << "Enter num ";
    cin >> num;

    // int col = 1 , count = 1;
    for (int row = 1; row <= num; row++)
    {

        for (int col = 0; col < row; col++)
        {
            cout << col + row << " ";
        }
        cout << endl;
    }

    return 0;
}
int patt3()
{

    int num;
    cout << "Enter num ";
    cin >> num;

    // int col = 1 , count = 1;
    for (int row = 1; row <= num; row++)
    {

        for (int col = 0; col < row; col++)
        {
            cout << row - col << " ";
        }
        cout << endl;
    }

    return 0;
}

int patt3ByLove()
{

    int n;
    cin >> n;

    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (i - j + 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

int pat4()
{

    // 22:53
    int n = 5;

    cout << "enter num     :   ";
    cin >> n;

    // cout << char(65);

    int row = 1, val = 65;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << char(val) << " ";

            col++;
        }
        cout << endl;
        val++;
        row++;
    }
}

int pat5()
{

    int n = 3;

    int row = 1;
    while (row <= n)
    {

        // int col = 1 ;
        // while (col <= n)
        // {
        int col = 0;
        while (col < n)
        {
            char ch = 'A' + col;
            cout << ch << " ";
            col++;
        }
        cout << endl;

        row++;
    }

    return 0;
}

int pat6()
{
    int val = 0; // if it was at line 149 , the ouput was incorrect
    int n = 3;

    int row = 1;
    while (row <= n)
    {

        // int col = 1 ;
        // while (col <= n)
        // {
        int col = 0;

        while (col < n)
        {
            char ch = 'A' + val;
            cout << ch << " ";
            col++;
            val++;
        }
        cout << endl;

        row++;
    }
    return 0;
}

int pat7()
{

    char ch = 'A';

    int n = 3;
    int val = 0;
    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= n)
        {
            char ch = 64 + row + col - 1;
            // cout << ch + col - 1;
            cout << char(ch) << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}

int pat7By()
{

    int n = 3;

    int row = 1;
    while (row <= n)
    {

        int col = 1;

        while (col <= n)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

int pat8()
{
    int n = 3;
    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

int pat9()
{

    int n = 4;

    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            // char ch = 'A' + row + col - 1 ;
            char ch = 'A' + row + col - 2;
            // char ch = 'A' + row - 1 ;
            cout << ch << ' ';
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}

int pat10()
{

    int n = 4;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'D' - (row - col);
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/*
#include <iostream>
#include <string>

int main() {
    std::cout << std::string(5, '*') << std::endl; // Creates a string with 5 asterisks
    return 0;
}

*/
int pat11()
{

    int n = 5;
    int row = 1;

    while (row <= n)
    {

        int space = n - row;

        cout << string((n - row), ' ');
        // cout << row * '*';
        cout << string(row, '*');
        row++;
        cout << endl;
    }

    return 0;
}

int pat11By()
{

    int n = 4;
    int row = 1;

    while (row <= n)
    {

        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // star print
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

int pat12()
{

    int n = 5;
    int row = 1;

    while (row <= n)
    {

        int col = 1;
        while (col <= (n - row + 1))
        {
            cout << "X ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

int pat13()
{

    int n = 4;
    int row = 1;

    while (row <= n)
    {

        int col = 1;

        // ERROR CUZ " " instead of ''
        cout << string(row - 1, ' ');
        cout << string(n - row + 1, 'X');
        col++;

        // while(col <= n){
        //     // ERROR CUZ " " instead of ''
        //     cout << string(row-1, ' ') ;
        //     cout << string(n-row+1, 'X');
        //     col++;
        // }
        cout << endl;
        row++;
    }
    return 0;
}

// HW IN COPY

/*
#include <iostream>
#include <cmath>

int main() {
    double result = pow(11, 3);
    std::cout << "11 raised to the power of 3 is: " << result << std::endl;
    return 0;
}*/

int hw1()
{

    int n = 5;
    int row = 1;

    int val = 0;
    while (row <= n)
    {
        // int col = 1;
        // cout << string(row, ' ');
        // while (col <= row){
        //     cout <<  row;

        //     col++;
        // }
        char ch = '1' + val;
        // cout << ch ;
        cout << string(row - 1, ' ');
        cout << string(n - row + 1, ch);

        cout << endl;
        row++;
        val++;
    }
    return 0;
}

int hw2()
{
    int n = 5;
    int row = 1;

    int val = 0;
    while (row <= n)
    {
        char ch = '1' + val;
        cout << string(n - row, ' ') << string(row, ch) << endl;
        row++;
        val++;
    }

    return 0;
}

int hw1secWay()
{

    int n = 5;
    int row = 1;

    int val = 0;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            int val = 0;

            if (row > col)
            {
                cout << ' ';
            }
            else
            {
                cout << row + val;
                val++;
            }
            col++;
        }
        cout << endl;
        row++;
        // val++;
    }
    return 0;
}

// int hw3(){
//     int n = 4 ;
//     int row = 1 ;
//     while(row<= n){
//         int val = 1;
//         cout << string( row - 1 , ' ') << string ()
//     }
//     return 0;
// }

int hw3()
{

    int n = 5;
    int row = 1;

    int val = 0;
    while (row <= n)
    {
        int col = 1;
        int val = 0;
        while (col <= n)
        {

            if (row > col)
            {
                cout << ' ';
            }
            else
            {
                cout << row + val;
                val++;
            }
            col++;
        }
        cout << endl;
        row++;
        // val++;
    }
    return 0;
}

int hw4()
{
    int n = 4;
    int row = 1;

    int val = 1;
    while (row <= n)
    {

        int col = 1;
        // while(col <= n ){
        //     if(col == 1 ){
        //     cout << string(n-row, ' ') ;

        //     }
        //     cout << val ;
        //     val++;
        //     col++;
        //     // cout << endl;
        // }
        while (col <= row)
        {
            if (col == 1)
            {
                cout << string(n - row, ' ');
                // cout << val ;
                // val++;
            }

            cout << val++;
            // val++;
            col++;
            // cout << endl;
        }
        row++;
        cout << endl;
    }

    return 0;
}

int pat15()
{

    int n = 5;
    int row = 1;
    while (row <= n)
    {
        // print space
        
        int space = n - row ;
        while(space){
            cout << " ";
            space--;
        }
        // print triangle
        int col = 1 ;
        while(col <= row ){
            cout << col ;
            col++;
        }
        // while (col <= 2 * n - 1)
        // {

        //     col++;
        // }

        // print 3rd triangle

        int start = row - 1 ;
        while(start){
            cout <<  start;
            start--;
        }
        row++;
        cout << endl;
    }
}


int pat16(){
    int n = 5;

    int row = 1;
    while(row <= n ){

        // print num which is n - row 

        // int num = 1 ;
        for (int i = 1; i <= n - row + 1; i++){
            cout << i ;
        }

        // print star 
        for (int j = 1; j <= row; j++)
        {
            if (j ==1){
                continue;
            }else{
                cout << string(j,'*');
            }
            // cout << "*";
        }
        // print number again 

        // for (int k = 5; k >= n - row + 1; k--){
        //     cout << k ;
        // }
        int val = n-row + 1;
        for (int l = 1; l <= n - row + 1; l++){
            cout << val ;
            val--;
        }
        
        

        row++;
        cout << endl;
    }
    return 0;
}
int main()
{
    // hw1();
    // hw2();
    // hw3();
    // hw4();
    // patt1();
    // patt2();
    // patt3();
    // patt3ByLove();
    // pat4();
    // pat5();
    // pat6();
    // pat7();
    // pat7By();
    // pat8();
    // pat9();
    // pat10();
    // pat11();
    // pat12(); // hw
    // pat13();
    // pat14();
    // pat11();

    // pat15();
    pat16();
    return 0;
}