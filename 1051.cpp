#include<bits/stdc++.h>
using namespace std;
int main(){

    double s;
    iosbase
    cin>>s;
    if(s<=2000.00){
        cout<<"Isento";
    }
    else {
        double tax=0.0;
        s=s-2000.00;
        if(s>1000.0){
            tax+= (1000.0*.08);
            s=s-1000;
        }
        else{
            tax += (s*0.08);
            s=0;
        }
        if(s>1500.0){
            tax+= (1500.0*0.18);
            s=s-1500;
        }
        else{
            tax += (s*0.18);
            s=0;
        }
        if(s>0){
            tax += (s*.28);
        }
        cout << "R$ " << fixed << setprecision(2) << tax;
    }
    cout << endl;
    return 0;
}
