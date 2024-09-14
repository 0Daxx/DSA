#include <iostream>
#include <vector>

using namespace std;

void preSum(vector <int> &vect){

    for (int i = 1; i < vect.size(); i++)
    {
        // vect[i] = vect[i] + vect[i-1];
        vect[i] +=  vect[i-1];
    }
    
    for(int elem: vect){
        cout << elem << " ";
    }
    cout << endl;
}

void prefixSumSuffixSum(vector <int> &vect){
    int len  = vect.size();
    
    int leftPtr = 0 , rightPtr = vect.size();

    // int preSum = 0 , SufSum = 0 ;

    vector <int> preVect(len ) ;
    preVect[0] = vect[0];
    for (int i = 1; i < vect.size(); i++)
    {
        preVect[i] = preVect[i-1] + vect [i] ;
    }
    
    // now check 
    for (int i = 0; i < len; i++)
    {
        int suffixSum =  preVect[len-1] - preVect[i];
        if(suffixSum == preVect[i]) {
            cout << "Can be Cut from index : " << i << endl;
        }
    }
    
    
    
}


void checkPrefixSuffixSum(vector <int> &vect){

    int len = vect.size();
    int totalSum = 0 ;
    for (int i = 0; i < len ; i++)
    {
        totalSum += vect[i];
    }
    int prefixSum = 0;
    for (int i = 0; i < len; i++)
    {
        prefixSum += vect[i] ;
        int suffixSum = totalSum - prefixSum ;

        if(suffixSum == prefixSum){
            cout << "Can be Cut from index : " << i << endl;

        }
    }
    
}


void sumOfRange(vector <int> &vect , int start , int end){
    int len = vect.size();
    // for (int i = 1; i < len ; i++){
    for (int i = 2; i < len  ; i++){
        vect[i] += vect[i-1];
    }

    for(int elem: vect){
        cout << elem << " ";
    }
    cout << endl;
    
    int rangeSum = vect[end] - vect[start-1] ;
    // int rangeSum = (start == 0) ? vect[end] : vect[end] - vect[start];
    cout << "Range Sum : " << rangeSum << endl;
}

/*
// vect.insert(0,0);  // see perplx
// vect.insert(vect.begin(),0);
    
    
*/

void sumRangeBy(){
    int n = 6 ;
    vector <int> vecto(n+1,0);
    for (int i = 1; i <= n ; i++)
    {
        cin >> vecto[i];
    }
    // prefix sum array
    for (int i = 1; i <= n ; i++)
    {
        vecto[i] += vecto[i-1];
    }
    int q ;
    cout << "number of queries : " ;
    cin >> q ;

    while (q--)
    {
        int l , r;
        cin >> l >> r ;
        int ans = 0 ;
        ans = vecto[r] - vecto[l-1];
        cout << "ans : " << ans << endl ;
    }
    
    
}


main(){
    vector <int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector <int> vecto = {2 , 1 , 3, 2,4};
    // preSum(vect);

    // prefixSumSuffixSum(vecto);
    vector <int> vectSumRa = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // sumOfRange(vectSumRa , 2 , 6 );
    sumRangeBy();
}