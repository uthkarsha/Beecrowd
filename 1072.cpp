#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X,cnt=0;
    cin>>N;
    for (int i=0; i<N;i++){
        cin>>X;
        if (X>=10 && X<=20){
            cnt++;
        }
    }
    cout << cnt << " in"<<endl;
    cout << N-cnt << " out"<<endl;
    return 0;
}
