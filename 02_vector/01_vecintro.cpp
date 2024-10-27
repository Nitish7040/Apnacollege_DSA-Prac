#include<iostream>
// using vector header file
#include<vector>


using namespace std;
int main(){

//  vector syntax
// vector<datatype> name;
// ex:- vector<int> vec = {1,2,3,4,5};
// vector<int> vec(5, 0); // 5 elements with value 0

// vector<int> vec; // size=0
// cout<<vec[0];

// vector<int> ve = {1,2,3,4,5};
// cout<<ve[0];


// vector<int> vec(5, 0); // 3->size, 0->value

// vector<int> vec(5,0);
// cout<<vec[0]<<endl;
// cout<<vec[1]<<endl;
// cout<<vec[2]<<endl;
// cout<<vec[3]<<endl;
// cout<<vec[4]<<endl;






                                               //////    FOR EACH LOOP  //////

// vector<char> vec ={'a','b','c','d','e'};

// for(char val : vec){
//     cout<<val<<endl;
// }

//  In for each loop the [val or i] can go each index and print the value of that index......



                                        ///// CURD OPERATION IN VECTOR /////
                    // for apply the curd operation in vector we can use some vector function like:-
                       //  size
                       //  push_back
                       //  pop_back
                       // insert
                       // erase
                       // clear
                       // empty
                       // front
                       // back
                       // at

//ex:-
vector<char> vec ={'a','b','c','d','e'};
cout<<"size = "<<vec.size()<<endl; // 5

// using push back function:-
vec.push_back('f');
cout<<"size = "<<vec.size()<<endl; // 6

// using front:-
cout<<"front = "<<vec.front()<<endl; // a

    cout<<"Hello World";
    return 0;
    
}