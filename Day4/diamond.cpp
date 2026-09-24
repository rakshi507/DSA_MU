#include<iostream>
using namespace std;

void diamond(int row){
    for(int i=1;i<=row;i++){
        for(int j=0;j<i-1;j++){
            cout<<"i";
        }
        cout<<endl;
    }

        
    

int main(){
    int row;
    cout<<"Enter the number of rows:";
    cin>>row;
    diamond(row);
    return0;
}