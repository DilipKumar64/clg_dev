#include <iostream>
using namespace std;
int main(){
    int n=7;
    bool found = false;
    // int arr[] = {7,3,4,1,8};
    int arr[] = {43,54,45,33,86,43,32};
    cout << "WE have this array with element"<< endl;
    cout<< "[";
    for (int i = 0;i<n;i++){
        cout<< arr[i]<<",";
    }
    cout<<"]"<<endl;

    for (int i=1;i<n;i++){
        int temp=arr[i];
        for (int j =i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
     cout<< "[";
    for (int i = 0;i<n;i++){
        cout<< arr[i]<<",";
    }
    cout<<"]"<<endl;
    return 0;
}