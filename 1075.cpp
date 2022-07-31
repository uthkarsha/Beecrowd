#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N>2){
        for(int i=0;(i*N+2)<=10000;i++){
            cout << i*N+2 << endl;
        }
    }
    return 0;
}
