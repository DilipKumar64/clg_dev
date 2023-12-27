#include <iostream>

using namespace std;
int main(){
    int n,foundAt;
    bool found = false;
    int arr[10] = {10,30,90,60,20,50,100,40,80,70};
    cout << "WE have this array with element"<< endl;
    cout<< "[";
    for (int i = 0;i<10;i++){
        cout<< arr[i]<<",";
    }
    cout<<"]"<<endl;
    cout << "Enter which elements index you want to find and we will return it's index : ";
    cin>>n;
    for (int i = 0;i<10;i++){
        if (arr[i]==n){
            foundAt = i;
            found = true;
            break;
        }
    }

    if (found == true){
        cout << "Element found at index "<<foundAt<<endl;
    }else {
        cout << "Element not found"<<endl;
    }
    cout<<"---------------------x--------------------------x-------------------";
    return 0;
}