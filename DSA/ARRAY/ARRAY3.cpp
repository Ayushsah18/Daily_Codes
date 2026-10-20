#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,23,-11,34,65,43};
    int size=6;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int indexlarge,indexsmall;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            indexsmall=i;
        }
        if(arr[i]>largest){
            largest=arr[i];
            indexlarge=i;
        }
    }
    cout<<"The largest number index is: "<<indexlarge<<endl;
    cout<<"The smallest number index is: "<<indexsmall;
    return 0;
}