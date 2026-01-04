#include <iostream>
using namespace std;

int main (){
    double principle,time,rate;
    cout<<"Enter principle value : ";
    cin>>principle;
    cout<<"Enter rate : ";
    cin>>rate;
    cout<<"Enter time : ";
    cin>>time;
    
    cout<<"Simple interest is : "<<(principle*rate*time)/100;
    return 0;
}