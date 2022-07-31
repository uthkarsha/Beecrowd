#include<bits/stdc++.h>
using namespace std;
int main(){
    double s,e,n,p;
    cin>>s;


    if (s>=0.0 && s<=400.0){
        e=s*0.15;
        p=15;
    }
    else if(s>=400.01 && s<=800.0){
        e=s*0.12;
        p=12;
    }
    else if(s>=800.01 && s<=1200.0){
        e=s*0.10;
        p=10;
    }
    else if(s>=1200.01 && s<=2000.0){
        e=s*0.07;
        p=7;
    }
    else if(s>=2000.0 ){
        e=s*0.04;
        p=4;
    }
    n=s+e;
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<n<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<e<<endl;
    cout<<"Em percentual: "<<fixed<<setprecision(0)<<p<<" %"<<endl;
    return 0;
}
