#include <iostream>
using namespace std;

void readArr(int arr[], int size)
{

    cout << endl;
    cout << "***********" << endl;
    cout << arr << endl;
    // for (int i = 0; i < sizeof(arr)/sizeof(int) ; i++)  // issue with sizeof cuz arr is a pointer
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "***********" << endl;
}

int printArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

void initi()
{

    int a[10] = {1}; // rest of them become zero

    // cout << a[0] << " " << a[1] << endl;
    readArr(a, 10);

    // 2nd array
    int b[4];
    // cout << "value at index 15  " << b[15]<< endl; // random value
    readArr(b, 4);

    // case 3
    int c[5] = {1, 2}; // rest of them will be 0

    readArr(c, 5);

    // interesting case

    int d[6] = {2, 7};
    // now i only want to print these two , create a fn to print only these
    printArray(d, 2);

    // cout << "size of d : " << sizeof(d)/sizeof(int) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(int) << endl;
}

void maxElem(int arr[], int size)
{

    // int max = 0 ; // what if there are negative numbers  so WRONG

    int max = INT32_MIN; // BUG was the size
    // int max = arr[0];
    int min = arr[0];
    // int size = sizeof(arr) / sizeof(int);
    // when you pass an array to a function, it decays into a pointer, and sizeof(arr) will return the size of the pointer rather than the size of the entire array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
}

void intia()
{

    /*by using an octal number (049) in the array initialization. In C++, octal numbers start with a zero (0). */
    char ch[5] = {'a', 'b', 'c'};

    // readArr(ch) ; // causes error cuz the argument of readArr in def is int

    double arrDouble[5];
    float arrFloat[5];
    bool arrBool[6];
}

// int inverter(int a ){

//     return ~a ;
// }

int swapAlternate(int arr[], int size)
{

    for (int i = 0; i <= size / 2; i += 2 )
    // for(int i = 0; i< size; i+= 2){ //   BKAP 
    // for (int i = 0; i <= size / 2; i += 2 )
    {
        // if (i + 1 > size ) continue;

        swap(arr[i], arr[i + 1]);
        // find(1);

        
    }

    return 0;
}


int main()
{
    // initi();
    // maxElem();

    // int a[4] = {-233, 0, 45, 49};
    // maxElem(a, (sizeof(a)/ sizeof(int)));

    // int anArr[6] ;
    // fill(begin(anArr), end(anArr), 1);
    // printArray(anArr,6);

    int pc = 6;
    int invertedPc;
    // pc <<=  1;
    // invertedPc = pc >> 1 ;
    // pc = pc >> 1 ;
    // I left shift
    // cout << ~invertedPc << endl;
    // cout << pc << endl;

    // cout << ~(pc || 0) << endl;
    // cout << pc.flip(0) << endl;

    //  => swap
    int apArray[5] = {1, 3, 5, 66, 99};
    // swapAlternate(apArray, 5);
    printArray(apArray, 5);
    return 0;
}

// hw
// intialise an array with same value other than 1
