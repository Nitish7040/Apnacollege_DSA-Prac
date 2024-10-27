// Reverse an array :--------
\
//  [1,2,3,4,5] => [5,4,3,2,1]
// make changes in original array
// by using 2 pointer approach.....(algorithm)
// swap(arr[st],arr[end])



// swap no using swap func in c++:-
// swap (val1,val2)


#include<iostream>
using namespace std;

void reversearray( int arr[],int size){
int start=0 , end = size-1;

while (start<end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}

}

int main(){
    
int arr[] = {1,2,3,4,5};
int size = 5;

reversearray(arr,size);

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
