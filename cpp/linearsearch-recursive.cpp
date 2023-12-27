#include <iostream>

using namespace std;
int linearsearch(int item,int index,int arrayLength,int array[10]){
    if (index<arrayLength-1){
        if (array[index]==item){
             cout << "Element found at index "<<index<<endl;
        } else{
        linearsearch(item,index+1,arrayLength,array);
        }
    }
    
}
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
    linearsearch(n,0,10,arr);
    cout<<"---------------------x--------------------------x-------------------";
    return 0;
}