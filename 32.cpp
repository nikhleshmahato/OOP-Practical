#include <iostream>
using namespace std;

int main (){
    //Largest element in array
    int arr[10],max=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}