#include <iostream>
using namespace std;
int main() {


//Design a C++ program to create a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, division, and modulus. The program should take two numbers and an operator as input from the user and display the result based on the selected operation.
int a,b,ch;
cout<<"enter 1st number"<<endl;
cin>>a;
cout<<"enter 2st number"<<endl;
cin>>b;
cout<<"operations to perform 1.add, 2.subtract,3.multiply"<<endl;
cin>>ch;
switch(ch){
case 1: cout<<a+b<<endl;
break;
case 2: cout<<a-b<<endl;
break;
case 3: cout<<a*b<<endl;
break;
default:cout<<"entered invalid operation";
break;
}

return 0;
}


////Write a cpp program to find largest number among three numbers
// Online C++ compiler to run C++ program online
//#include <iostream>
using namespace std;
int main() {
    int a=1,b=8,c=1;
    if(a>b){
        cout<<"greater is a: "<<a<<endl;
    }
    else if(b>c){
        cout<<"greater is b: "<<b<<endl;
    }
    else{
        cout<<"greater is c: "<<c<<endl;
    }

    return 0;
}
