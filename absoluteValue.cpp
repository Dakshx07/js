#include<iostream>
using namespace std;
int main (){
    // for(int i=0;i<=100;i++){
    //     if(i%2!=0)
    //     cout<<i<<endl;
    // }

    // for(int i=1;i<=99;i=i+2){
    //     cout<<i<<endl;
    // }

    int n;
    cout<<"enter n :";
    cin>>n;

//    for(int i=1;i<=n;i=i+2)
//    cout<<i<<endl;
//    for(int i=1;i<2*n-1;i=i+2){
//     cout<<i<<endl;
//    }

int a=4;
for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a=a+3;
}
    return 0;
    
}
