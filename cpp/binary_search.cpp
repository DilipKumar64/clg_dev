#include <iostream>
using namespace std;
int recursiveSearch(int arr[],int l, int r,int key){
    if (l<=r){
        int mid =l+(r-l)/2;
        if (arr[mid]==key){
            return mid;
        }
        if (arr[mid]>key){
            return recursiveSearch(arr, l, mid+1,key);
        }
            return recursiveSearch(arr,  mid+1,r,key);
    }
    return -1;

}
int main(){
    int arr[]={10,20,30,40,50};
    int key = 30,n=5;
    int r1=recursiveSearch(arr,0,n-1,key);
    if (r1!=-1){
        cout<< "element found at "<<r1;
    }else{
        cout<<"element not found";
    }
}