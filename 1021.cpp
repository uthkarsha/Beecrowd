#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    double p;
    cin >> p;
    int temp = p*100;
    N = temp/100;
    int M = temp%100;
    int x=N/100;
    cout << "NOTAS:" << endl;
    cout << x <<" nota(s) de R$ 100.00" << endl;
    N = N % 100;

    x = N/50;
    cout << x << " nota(s) de R$ 50.00" <<endl;
    N = N%50;

    x = N/20;
    cout << x << " nota(s) de R$ 20.00" << endl;
    N=N%20;
    x=N/10;
    cout << x << " nota(s) de R$ 10.00"<< endl;
    N=N%10;
    x=N/5;
    cout << x << " nota(s) de R$ 5.00" << endl;
    N=N%5;
    x=N/2;
    cout << x << " nota(s) de R$ 2.00"  << endl;
    N=N%2;

    cout << "MOEDAS:" << endl;
    cout << N << " moeda(s) de R$ 1.00" << endl;

    x=M/50;
    cout << x << " moeda(s) de R$ 0.50" << endl;
     M = M%50;
     x=M/25;
     cout << x << " moeda(s) de R$ 0.25" << endl;
     M=M%25;
     x=M/10;
     cout << x << " moeda(s) de R$ 0.10" << endl;
     M=M%10;
     x=M/5;
     cout << x << " moeda(s) de R$ 0.05" << endl;
     M=M%5;
     x=M/1;
     cout << x << " moeda(s) de R$ 0.01" << endl;
     M=M%1;
    return 0;
}
