#include <iostream>
#include <vector>


using namespace std;


void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}


void vectSizeCap(const vector<int> &vector){

    cout << "Size : " << vector.size() << endl;
    cout << "Capacity : " << vector.capacity() << endl;
}



// vectors are dynamic array , 
    // resize when insert/del elem
    // contigous 

int iniVect(){

    // vector <int > vowels;
    vector <int > vowels(5);
    vector <float> v ;  // size = 0 , capacity = 0 


    // 1.  v.size() // len 
    // 2.  v.resize() 
}   

int vectCap(){

    vector<int> v;

    // Adding elements to the vector
    for (int i = 0; i < 6; i++) {
        
        v.push_back(i);  // append , to add elem at end 
        
        cout << "Size of vector: " << v.size() << endl;
        cout << "Capacity of vector: " << v.capacity() << endl;
        cout << "********************" << endl ;
    }

    // cout << "Size of vector: " << v.size() << std::endl;      // Outputs: 10
    // cout << "Capacity of vector: " << v.capacity() << std::endl; // Outputs: 16 (or higher depending on implementation)

    return 0;

}

int addElem(){
    vector<int> vect{5,10,15};

    vect.push_back(66);

    vect.insert(vect.end()-4,33);
    vect.insert(vect.begin()+1,99);
    for (int x : vect){
        cout << x << " "; // Output: 5 10 15
    }
    
}

int delElem(){
    vector<int> vect{5,10,15,9,6,7};

    cout << "Size of Vector : " << vect.size() << endl;
    vect.pop_back();    
    for(int x : vect){
        cout << x << " ";
    } 
    cout << endl;
    vect.erase(vect.begin()+3);
    for(int x : vect){
        cout << x << " ";
    }
    cout << endl;

    vect.resize(5);
    cout << "Size of vector: " << vect.size() << endl;
    cout << "Capacity of vector: " << vect.capacity() << endl;
    vect.resize(6);
    cout << "Size of vector: " << vect.size() << endl;
    cout << "Capacity of vector: " << vect.capacity() << endl;

    vect.pop_back();
    cout << "Size of vector: " << vect.size() << endl;
    cout << "Capacity of vector: " << vect.capacity() << endl;
}


int userAddElem(){

    vector<int> vect ;
    cout << "Enter Elem : " ;
    for (int i = 0; i < 3; i++)
    {
        int elem ;
        cin >> elem ;
        vect.push_back(elem);
    }
    printVector(vect );
}

int lastOcc(const vector<int> &vect, int key){
    int idx = -1 ;
    // I
    // for (int i = 0; i < vect.size(); i++){
    //     if( vect[i] == key ) idx = i ;
    // }

    // II  my buggy way 
    // for (int i = vect.end() - 1 ; i >= vect.begin(); i--){
    //     if( vect[i] == key ){
    //         idx = i ; 
    //         break;
    //     } 
    // }
    // III mam 
    for (int i = vect.size()-1; i >= 0; i--){
        if(vect[i] == key ) {
            idx = i ;
            break;
        }
    } 
    


    
    // AI 
    // for (auto i = vect.end() - 1; i >= vect.begin(); --i) {
    //     if (*i == key) {
    //         idx = std::distance(vect.begin(), i); // Get the index of the found key
    //         break;
    //     }
    // }
    cout << "Last Occurence : " << idx << endl;

}   


int sumOfIndices(vector <int> &vect){

    int sum = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        if(i % 2 == 0) sum += i ;
        else sum -= i ;
    }
    cout << "Sum of Indices : " << sum << endl;

} 

int sortedOrNot(vector <int> &vec){

    bool flag = true;
    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i] > vec[i+1]) flag = false; 
    }
    if(flag) {
        cout << "Vector is sorted in ascending order" << endl;
    }
}

int main(){

    vector<int> vect{1,2,3,6,9,6,7,6};
    vector<int> vecto{1,2,3,4,5,6,7};
    // vectCap();
    // addElem();
    // delElem();
    // userAddElem();

    // lastOcc(vect, 6);
    // sortedOrNot(vecto);
    sumOfIndices(vecto);
    // vecto.clear()  // to clear vector
    return 0;
}


