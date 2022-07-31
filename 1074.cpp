#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X;
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>X;
        if (X==0){
            cout<<"NULL";
        }
        else if(X%2==0 && X>0){
            cout<<"EVEN POSITIVE";

        }
        else if(X%2!=0 && X>0){
            cout<<"ODD POSITIVE";
        }
        else if(X%2==0 && X<0){
            cout<<"EVEN NEGATIVE";

        }
        else if(X%2!=0 && X<0){
            cout<<"ODD NEGATIVE";
        }
        cout<<endl;
    }
    return 0;
}
