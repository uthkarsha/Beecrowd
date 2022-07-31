#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,x,tc=0,tr=0,ts=0;
    double pc,pr,ps;
    char y;
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>x>>y;
        if (y=='C'){
            tc=tc+x;
        }
        else if (y=='R'){
            tr=tr+x;
        }
        else if (y=='S'){
            ts=ts+x;
        }
    }
    double total=0;
    total=tr+tc+ts;
    pc=(tc/total)*100;
    ps=(ts/total)*100;
    pr=(tr/total)*100;

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<tc<<endl;
    cout<<"Total de ratos: "<<tr<<endl;
    cout<<"Total de sapos: "<<ts<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<pc<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<pr<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<ps<<" %"<<endl;
    return 0;
}
