#include <iostream>
using namespace std;

int main (){
    int first,second,third;
    cout<<"enter first number. ";
    cin>>first;
    cout<<"enter second number. ";
    cin>>second;
    
    third=first;
    first=second;
    second=third;
    
    cout<<"first : "<<first;
    cout<<"second : "<<second;
    return 0;
}