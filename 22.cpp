#include <iostream>
using namespace std;

int main (){
    //Eligible to vote or not
    int num;
    cout<<"Enter a No. : ";
    cin>>num;
    if(num>=18){
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;
}