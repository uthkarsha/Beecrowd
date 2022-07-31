#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,mx=0,idx=1;
    for (int i=1;i<=100;i++){
        cin>>N;
        if (N>mx){
            mx=N;
            idx=i;
        }
    }
    cout<<mx<<endl<<idx<<endl;
    return 0;
}
