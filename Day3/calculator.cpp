#include  <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;

    cout<<"1. Add " <<endl;
    cout<<"2. subtract " <<endl;
    cout<<"3. product" <<endl;
    cout<<"4. divide"<<endl;
    cout<<"5. reaminder"<<endl;

    int ch;
    cout<<"Enter your choice "<<endl;
    cin>>ch;
    switch(ch){
        case 1:
           cout<<"a+b"<<endl;
           break;
           case 2:
           cout<<"a-b"<<endl;
           break;
           case 3:
           cout<<"a*b"<<endl;
           break;
           case 4:
           cout<<"a/b"<<endl;
           break;
           case5:
           cout<<"a%b"<<endl;
           break;
           default:
            cout<<"you have entered a  string choice "<<endl;
            break;
    }

    return 0;


       
       
       
       
       
       
       
       
       
       
       
       
       
       
    

}

