#include<iostream>
using namespace std;
string linearSearch(int arr[],int size,int key){
    if(size==0)
    return "not found";
    if(arr[0]==key)
    return "found";
    return linearSearch(arr+1,size-1,key);

}
int main(){
    int arr[]={2,4,6,8,9};
    int size=5;
    int key=10;
   string sea=linearSearch(arr,size,key);
   cout<<sea<<endl;
}