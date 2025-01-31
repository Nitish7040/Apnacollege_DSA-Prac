#include <iostream>
#include <vector>
using namespace std;


int main() {

vector<int> arr{10, 20,30,40,50,60};

int sum = 50;

//for outer loop for traverse each element
for(int i=0; i<arr.size(); i++){
    int elements = arr[i];


// loop for every elements will traverse on next element...
for(int j=i+1; j<arr.size();j++){
    if(elements + arr[j] == sum){
        cout<<"pair is"<<elements<<","<<arr[j]<<endl;
    }
}
}

return 0;
}           