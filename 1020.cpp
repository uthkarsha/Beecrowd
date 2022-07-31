#include<bits/stdc++.h>
using namespace std;
int main(){
    int d;
    cin >> d;
    int y = d/365;
    d=d%365;
    int m = d/30;
    d=d%30;
    cout << y <<" ano(s)" << endl << m << " mes(es)" << endl << d << " dia(s)" <<endl;
    return 0;
}
