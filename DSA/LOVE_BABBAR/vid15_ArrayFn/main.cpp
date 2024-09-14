#include <iostream>
using namespace std;

int loop(){

    // for each loop
    // traverse through each elem 
    int array[] = {1,3,5,6};
    for(int ele:array){
        cout << ele ;
    }
    cout << endl;
}

int forEach(){

    char vowels[5];
    for(char &elem:vowels){
    // for(char elem:vowels){  // PASS BY VALUE
        cin >> elem;

    }
    for(int idx= 0 ; idx < 5 ; idx ++){
        cout << vowels[idx] << " ";
    }
    cout << endl;
}

int main(){
    // loop();
    forEach(); 
    return 0;
}