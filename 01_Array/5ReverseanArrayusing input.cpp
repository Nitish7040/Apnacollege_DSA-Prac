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
    
 int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
reversearray(arr,size);

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
