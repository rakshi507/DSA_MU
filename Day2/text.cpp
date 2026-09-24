//Q 11. write a c/c++ program to print a left aligned inverted  triangle of stars of N rows.//
//include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
            
        }
         cout<<endl;
    }
    return 0;
}
//

//Q12. write a c/c++  program to print this pattern for N=5:
#include <iostream>
using namespace std;

int main(){
    int N;  
    cin >> N;
    for(int i=1; i<=N;i++){
        for (int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}