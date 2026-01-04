#include <iostream>
using namespace std;

int main (){
    //Printing Table using while loop
    int num,base=1;
    cout<<"Enter a No. : ";
    cin>>num;
    
    while(base<=10){
        cout<<num<<" * "<<base<<" = "<<num*base<<endl;
        base++;
    }
    return 0;
}