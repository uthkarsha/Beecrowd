#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    cout << N << endl;
    int x=N/100;
    cout << x <<" nota(s) de R$ 100,00" << endl;
    N = N % 100;
    x = N/50;
    cout << x << " nota(s) de R$ 50,00" <<endl;
    N = N%50;
    x = N/20;
    cout << x << " nota(s) de R$ 20,00" << endl;
    N=N%20;
    x=N/10;
    cout << x << " nota(s) de R$ 10,00"<< endl;
    N=N%10;
    x=N/5;
    cout << x << " nota(s) de R$ 5,00" << endl;
    N=N%5;
    x=N/2;
    cout << x << " nota(s) de R$ 2,00"  << endl;
    N=N%2;
    cout << N << " nota(s) de R$ 1,00" << endl;

    return 0;
}
