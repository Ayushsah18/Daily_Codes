#include<bits/stdc++.h>
using namespace std;
long long int Product(int arr[],int size){
    long long int product=1;
    for(int i=0;i<size;i++){
        product=arr[i]*product;
    }
    return product;
}
int Sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={12,34,14,65,78,8,1};
    int size=7;
    cout<<Product(arr,size)<<endl;
    cout<<Sum(arr,size)<<endl;
}