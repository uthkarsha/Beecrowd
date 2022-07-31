#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,N,sum=0;

    while(1){
        sum=0;
        cin >> M >> N;
        if(M<=0 || N<=0){
            break;
        }
        if(M>N){
            swap(M,N);
        }
        for(int i=M;i<=N;i++){
            sum=sum+i;
            cout << i << " ";
        }
        cout<<"Sum=" <<sum<<endl;
    }

    return 0;
}
