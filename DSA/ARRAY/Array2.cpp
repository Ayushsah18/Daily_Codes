#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int smallest=INT_MAX ;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        largest=max(arr[i],largest);
    }
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest:  "<<largest;
    return 0;
}