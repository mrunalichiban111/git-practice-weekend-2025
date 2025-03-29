#include<bits/stdc++.h>
using namespace std;

// This is a calculator program which does all basic arithmatic operations

//so let's start 

// 1st lets make a addition function 

int add(int a,int b){
    return a+b;
}

// subtraction Function 

int sub(int a , int b){
    return a-b;
}

//multiplication function

int mul(int a ,int b){
    return a*b;
}

//Division function 

int divi(int a,int b){
    return a/b;
}

//Modulus Function

int mod(int a, int b){
    return a%b;
}

int main(){
    int a,b;

    cout<<"Enter two space seperated numbers"<<endl;
    cin>>a>>b;

    cout<<"Enter \n1 for Addition \n2 for Subtraction \n3 for Multiplication \n4 for Division \n5 for Modulus"<<endl;

    int ch;
    cin>>ch;
    switch(ch){
        case 1: cout<<add(a,b)<<endl; break;
        case 2: cout<<sub(a,b)<<endl; break;
        case 3: cout<<mul(a,b)<<endl; break;
        case 4: cout<<divi(a,b)<<endl; break;
        case 5: cout<<mod(a,b)<<endl; break;
        default: cout<<"Invalid choice"<<endl;
    }
}