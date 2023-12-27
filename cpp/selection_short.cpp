#include <iostream>

using namespace std;
 
int main(){
    int arr[10] = {10,90,60,20,100,50,40,30,80,70};
    cout << "WE have this array with element"<< endl;
    cout<< "[";
    for (int i = 0;i<10;i++){
        cout<< arr[i]<<",";
    }
    cout<<"]"<<endl;
    for(int i=0;i<10;i++){
        bool found=false;
        int currentSwap=-1; 
        for (int j=i+1;j<10;j++){
            if(arr[j]<= arr[i]){

            }
        }
    }
    return 0;
}