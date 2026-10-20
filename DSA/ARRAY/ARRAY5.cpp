#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int size){
    int start=0,end= size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={12,34,14,65,78,8,1};
    int size=7;
    reversearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}