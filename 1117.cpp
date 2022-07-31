#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,sum=0.0,avg;
    int cnt=0;
    while(1){
        cin>>n;
        if(n>=0 && n<=10){
            sum=sum+n;
            cnt++;
        }
        else{
            cout<<"nota invalida"<<endl;
        }
        if(cnt==2){
            break;
        }
    }
    avg=sum/2;
    cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
    return 0;
}
