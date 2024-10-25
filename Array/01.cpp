//creation of simple array

 #include<iostream>
    using namespace std;

    int main(){
        // int size=5 ;
        // int marks[size];

// takinn input

        // for(int i=0;i<size; i++){
        //     cin>>marks[i];
        // }

        // cout<<sizeof(marks) / sizeof(int);

        // loops
         // for(int i=0; i<size; i++){
          //     cout<<marks[i]<<endl;
         // }

//[5,15,22,1,-15,24] find smallest:-

// smallest = +infinitive = INT_MAX


int arr[] = {10,5,2,1,0};
int size = 5;
int smallest= INT8_MAX ;

for (int i = 0; i <size ; i++)
{
        if (arr[i]<smallest) {
                smallest = arr[1];
        }
        
}
cout<<"smallest = "<<smallest<<endl;






        return 0;
    }

