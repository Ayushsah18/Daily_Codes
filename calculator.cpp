#include<iostream>
using namespace std;
int main(){
    int a,b,result,choice;
    cout<<"Enter the value of first number: ";
    cin>>a;
    cout<<"ENter the value of second number: ";
    cin>>b;
    cout<<"Enter choice in number:\n";
    cout<<"1 addition 2 subtraction 3 multiplication 4 division \n";
    cin>>choice;
    if(choice==1){
        result=a+b;
        cout<<result;
    }
    else if(choice==2){
        result=a-b;
        cout<<result;
    }
    else if(choice==3){
        result=a*b;
        cout<<result;
    }
    else if(choice==4){
        result=a/b;
        cout<<result;
    }
    else{
        cout<<"Error";
    }
}