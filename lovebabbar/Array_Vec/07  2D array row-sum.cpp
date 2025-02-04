#include<iostream>
using namespace std;


void printRowWiseSum(int arr[][3],int row, int col){

cout<<"print row wise sum"<<endl;

// row wise traversal
for(int i=0 ; i<row ; i++){
    int sum=0;
     for(int j=0; j<col ; j++){
        sum = sum + arr[i][j]; 
     }
     cout<<sum<<endl;
}

//col wise sum :-
cout<<"Col wise sum :-"<<endl;
for(int i=0; i<row; i++){
    int sum=0;
    for(int j=0 ; j<col ; j++){
       sum = sum+ arr[j][i];
    }
    cout<<sum<<" ";
}
}



int main(){
    
    // int arr[2][2]= {{1,2},{4,5}};
int arr[3][3];
int row=3;
int col=3;

//takin input from user with row wise:-

for(int i=0; i<row;i++){
    for(int j=0; j<col ; j++){
        cin >> arr[i][j];
    }
}

    // cout<<arr[0][2];
cout<<"your input 2D array:-"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

printRowWiseSum(arr,row,col) ;

//    return 0;
}
