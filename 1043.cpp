#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double p=a+b+c;
    double area=0.5*(a+b)*c;
    if (a+b>c && a+c>b && b+c>a){
        cout << fixed << setprecision(1) << "Perimetro = " << p << endl;
    }
    else{
        cout << fixed <<setprecision(1) << "Area = " << area <<endl;
    }
    return 0;
}
