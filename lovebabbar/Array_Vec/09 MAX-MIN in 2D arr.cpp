#include<iostream>
#include<limits.h>  // ===>> This header file is used for used the INT_MAX and INT_MIN values:---
using namespace std;

//Function for find the Maximum no in the array:---

int GetMAx(int arr[][3], int row,int col){
    int maxi=INT16_MIN;

for(int i=0; i<row; i++){
 for(int j=0; j<col;j++){
    if(arr[i][j]>maxi){
           maxi= arr[i][j];
        }
    }
}
return maxi;
}

//Function for find the Minimum no in the array:---

int GetMini(int arr[][3], int row,int col){

     int mini=INT16_MAX;

for(int i=0; i<row; i++){
 for(int j=0; j<col;j++){
    if(arr[i][j]<mini){
           mini= arr[i][j];
        }
    }
}
return mini;
}



int main(){
int row =3;
int col=3;

int arr[3][3];

//for loop for taking the input :-

for(int i=0 ; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}


//for print the input array :-

for(int i=0; i<row; i++){
    for(int j=0; j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
// For printing the Maximum no:-

cout<<"Maximum num. in 2D array is :- "<<GetMAx(arr,row,col)<<endl;

//For printing the minimum no.:---

cout<<"Minimum num. in 2D array is :- "<<GetMini(arr,row,col);

    return 0;
  
};