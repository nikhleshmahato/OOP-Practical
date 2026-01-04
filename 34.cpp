#include <iostream>
using namespace std;

int main (){
    //Reverse the array
    int arr[10],max=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"0ld Array : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<10/2;i++){
        int temp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }
    cout<<endl<<"New Array : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}