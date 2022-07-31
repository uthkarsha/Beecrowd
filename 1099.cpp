#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,x,y;
    cin>>N;
    for (int i=1;i<=N;i++){
        cin>>x>>y;
        if(x>y){
            swap(y,x);
        }
        if (x%2!=0){
            x=x+2;
        }
        else{
            x=x+1;
        }
        int sum=0;
        for(int j=x;j<y;j+=2){
             sum=sum+j;
        }
    cout<<sum<<endl;
    }

    return 0;
}
