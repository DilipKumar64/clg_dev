#include <iostream>
using namespace std;
#include<array> 

int main(){
    int arr[10] = {10,90,60,20,100,50,40,30,80,70};
    cout << "WE have this array with element"<< endl;
    cout<< "[";
    for (int i = 0;i<10;i++){
        cout<< arr[i]<<",";
    }
    cout<<"]"<<endl;

    for (int i=0;i<10;i++){
        if ( arr[i]>arr[i+1]){
            int temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]= temp;
        }
    }
    cout<< "[";
    for (int i = 0;i<10;i++){
        cout<< arr[i]<<",";
    }
    cout<<"]"<<endl;
    return 0;
}