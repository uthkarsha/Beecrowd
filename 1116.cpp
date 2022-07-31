#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    double X,Y;
    double d;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>X>>Y;
        if(Y==0){
            cout<<"divisao impossivel";
        }else{
        d=X/Y;

        cout<<fixed<<setprecision(1)<<d<<endl;
        }
    }
    return 0;
}
