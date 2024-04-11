#include<iostream>
using namespace std;

int main(){
    int number, factorial=1;
    cout<<"enter the factorial"<<endl;
    cin>> number;


    if(number<0)
    cout<< "no factorial for negative number";
    else if(number<=1)
    cout<< number << "! = "<< factorial;
    else{
        for(int i=number; i>=2;i--){
            factorial=factorial*i;
        }
        cout<< number << "! = "<< factorial;
    }
    return 0;
}