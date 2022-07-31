#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int m = N/60;
    int s = N%60;
    int h = m/60;
    m=m%60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
