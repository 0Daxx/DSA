#include <iostream>
#include <vector>
using namespace std ;

void zeroOneSort(vector <int> &vect){

    int leftPtr = 0 ;
    int rightPtr =  vect.size()- 1  ;
    

    while (leftPtr <= rightPtr)
    {
        if(vect[leftPtr ]== 1 && vect[rightPtr] == 0 ){
            vect[leftPtr++] = 0;
            vect[rightPtr--] = 1 ; 
        }
        if(vect[leftPtr] == 0 ) leftPtr++;
        if(vect[rightPtr] == 1 ) rightPtr--;
    }
    
    // while (leftPtr <= rightPtr) {
    //     if (vect[leftPtr] == 1) {
    //         swap(vect[leftPtr], vect[rightPtr]);
    //         rightPtr--;
    //     } else {
    //         leftPtr++;
    //     }
    // }

    for(int elem:vect){
        std::cout << elem << " ";
    }
    cout << endl;
}





int main(){

    vector <int> vectoo = {0,1,0,1,1,1,0,1};
    // zeroOneSorted(vectoo); // not optimised

    zeroOneSort(vectoo);

    return 0;
}


