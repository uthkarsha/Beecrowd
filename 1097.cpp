#include<bits/stdc++.h>
using namespace std;
int main(){
    int I,J,x=7;
    for(int i=1;i<=9;i+=2){
        for(int j=x;j>=(x-2);j--){
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
        }
    x+=2;
    }
    return 0;
}

