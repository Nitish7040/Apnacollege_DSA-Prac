#include<iostream>
using namespace std;

// Founction for find the elements in 2d array .
bool FindKey( int arr[][3], int row, int col, int key){
     for(int i=0; i<row; i++){
    for(int j=0; j<col;j++){
       if(arr[i][j] == key)
       return true;
    }
}
      return false ;
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

int key=18;

// FindKey(arr, 3 , 3, 8);
if(FindKey(arr, 3 , 3, key)){
    cout<<key;
}else{
    cout<<"not found";
}

   return 0;
}
