#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,sum=0.0;
    double cnt=0.0;
    for (int i=0;i<6;i++){
        cin >> n;
        if(n>0){
            sum=sum+n;
            cnt++;
        }
    }
    double avge=sum/cnt;
    cout << cnt << " valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avge<<endl;
    return 0;
}
