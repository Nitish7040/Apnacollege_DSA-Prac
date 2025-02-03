#include<iostream>
using namespace std;
int main(){
    
    // int arr[2][2]= {{1,2},{4,5}};
int arr[4][3];
int row=4;
int col=3;

//takin input from user with row wise:-

for(int i=0; i<row;i++){
    for(int j=0; j<col ; j++){
        cin >> arr[i][j];
    }
}

    // cout<<arr[0][2];
cout<<"Row wise values print:-"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Column wise values print:-"<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}




    return 0;
}
