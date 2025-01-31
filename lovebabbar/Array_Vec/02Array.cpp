#include <iostream>
#include <vector>
using namespace std;


int main() {

// Union of the 2 array question :-----

int arr[] ={1,3,5,7,9};
int sizea =5;
int brr[] = {2,4,6,8};
int sizeb = 4;

//intialize a vector
vector<int> ans;

// push the values of arr into  ans arr :--
for(int i=0 ; i<sizea ; i++){
    ans.push_back(arr[i]) ;
}

// push the elements of brr into ans arr :---
for( int i=0 ; i<sizeb ; i++){
    ans.push_back(brr[i]);
}

// print the ans arr :-

cout<<"printing the ans array :-";
for(int i=0; i<ans.size(); i++){
    cout<< ans[i]<<" ";
}






    
    return 0;
}
