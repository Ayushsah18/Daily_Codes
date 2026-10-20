#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={12,34,14,65,78,8,1};
    int size=6;
    int target=8;
    cout<<linearsearch(arr,size,target)<<endl;
    return 0;
}