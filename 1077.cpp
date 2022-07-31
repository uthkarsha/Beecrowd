#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    double a,b,c,W;
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>a>>b>>c;
        W=(a*2+b*3+c*5)/10;
        cout<<fixed<<setprecision(1)<<W<<endl;
    }
    return 0;
}
