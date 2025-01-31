#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> arr{10,20,30,40,5} ;
int sum =100;


// loop for first nubmer
for(int i=0; i<arr.size(); i++){
  int elements = arr[i];


// loop for second number
for(int j=i+1; j<arr.size(); j++){
    int element2= arr[j];


//loop for third number
for(int k=j+1; k<arr.size(); k++){
    int elements3= arr[k];


//loop for fourth number
for(int l=k+1; l<arr.size(); l++){
    int element4 = arr[l];



// checking thier sum = 100 .........
    if(elements + element2 + elements3 + element4 == sum){
        cout<<elements<<","<<element2<<","<<elements3<<","<<element4<<endl;
       
    }
}
  }
}
}
return 0 ;
}
