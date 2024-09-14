#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>  // for reverse
using namespace std;

void reverseVect(vector <int> &vect){

    int leftPtr = 0 ;
    int rightPtr = vect.size() - 1 ;

    while(leftPtr <= rightPtr){
        int temp = vect[leftPtr];
        vect[leftPtr] = vect[rightPtr] ;
        vect[rightPtr] = temp;
        rightPtr-- ; 
        leftPtr++;
    }
    
}


// using std::cout;
// using std::endl;

/*


void zeroOneSorted(vector<int> &vect) {
    // Count the number of zeros in the vector
    int countZero = 0; 
    for (int i = 0; i < vect.size(); i++) {
        if (vect[i] == 0) {
            countZero++; 
        }
    }
    
    // Fill the vector with zeros and ones based on the count
    for (int i = 0; i < vect.size(); i++) {
        if (i < countZero) {
            vect[i] = 0; 
        } else {
            vect[i] = 1; 
        }
    }
    
    // Output the sorted vector
    for (int elem : vect) {
        cout << elem << " ";
    }
    cout << endl;
}

*/
void zeroOneSort(vector <int> &vect){

    // swap
    // int len = vect.size();
    int leftPtr = 0 ;
    int rightPtr =  vect.size()- 1  ;
    // int rightPtr = len - 1  ;

    while (leftPtr <= rightPtr)
    {
        if(vect[leftPtr ]== 1 && vect[rightPtr] == 0 ){
            vect[leftPtr++] = 0;
            vect[rightPtr--] = 1 ; 
        }
        if(vect[leftPtr] == 0 ) leftPtr++;
        if(vect[rightPtr] == 1 ) rightPtr--;
    }
    
    for(int elem:vect){
        std::cout << elem << " ";
    }
    cout << endl;
}



// relative order didnt matter BUT WHAT IF IT DOES 
void oddAtStartEvenAtEnd(vector <int> &vect){

    int leftPtr = 0 ;
    int rightPtr = vect.size()-1;

    // // Inspired from Urvi
    
    while (leftPtr <= rightPtr)
    {
        if(vect[leftPtr] %2 == 0 && vect[rightPtr] % 2 != 0){
            swap(vect[leftPtr],vect[rightPtr]);
            leftPtr++; 
            rightPtr++;
        }
        if(vect[leftPtr] %2 != 0) leftPtr++;
        if(vect[rightPtr] %2 == 0) rightPtr--;
    }

    // by ai 
    
    
    for(int elem:vect){
        cout << elem << " ";
    }
    cout << endl;
    
}


// EDGE CASE : what if the elems were negative 
void ascSquare(vector <int> &vect){

    // vector <int> vect = {-2,1,  3, 4, 5, 6, 7, 8, 9, 10};
    int len = vect.size();
    vector <int> resultVec(len,0) ; // mine 
    // vector <int> resultVec[len]  ;

    for (int i = 0; i < len; i++)
    {
        resultVec[i] = (vect[i] * vect[i]);
    }
        // resultVec[i].push_back(vect[i] * vect[i]);
    
    for(int elem:resultVec){
        cout << elem  << " ";
    }
    cout << endl;
}

// create an array of mod of each elem 



// 
void ascSquare2Pointer(vector <int> &vect){

    vector <int>  newArr;
    int leftPtr = 0 ;
    int rightPtr = vect.size() - 1 ;

    while(leftPtr <= rightPtr){
        // if the abs are equal
        int leftValue = vect[leftPtr];
        int rightValue = vect[rightPtr];

        if(abs( leftValue ) == rightValue){
            newArr.push_back(vect[leftPtr] * vect[leftPtr]);
            leftPtr++;
            newArr.push_back(vect[rightPtr] * vect[rightPtr]);
            rightPtr--;
        }
        if(abs( leftValue ) > rightValue){
            newArr.push_back(vect[leftPtr] * vect[leftPtr]);
            leftPtr++;
        } else{
            newArr.push_back(vect[rightPtr] * vect[rightPtr]);
            rightPtr--;
        }
    }
    
    reverseVect(newArr);
    // reverse(newArr.begin(),newArr.end());

    // print
    for(int elem: newArr){
        cout << elem << " ";
    }
    cout << endl;
}




int main(){


    vector <int> vectoo = {0,1,0,1,1,1,0,1};

    vector <int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // zeroOneSorted(vectoo); // not optimised

    // zeroOneSort(vectoo);
    
    // oddAtStartEvenAtEnd(vect);
    // ascSquare(vect);

    // cout << abs(65.3) << endl;  // ERROR 
    // cout << static_cast<int>(abs(65.3)) << endl;
    vector <int> vectArr = {-10, -4, 0, 4, 5, 6, 7, 8, 9, 10};
    ascSquare2Pointer(vectArr);
    return 0;
}

/*CONCEPTS 
the parity of an integer refers to whether it is even or odd. An integer is even if it is divisible by 2, and odd if it is not 
parity of num , say 3 is odd . 
*/