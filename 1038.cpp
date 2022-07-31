#include<bits/stdc++.h>
using namespace std;
int main(){
    double arr[6]={0,4.00,4.50,5.00,2.00,1.50};
    int x;
    double y;
    cin >> x >> y;
    double ans = arr[x] * y;
    cout << fixed << setprecision(2) << "Total: R$ " << ans << endl;
    return 0;
}
