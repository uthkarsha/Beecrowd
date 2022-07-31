#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    int cnt=0.0;
    for (int i=0;i<5;i++){
        cin >> n;
        if(n%2==0){
            cnt++;
        }
    }
     cout << cnt << " valores pares"<<endl;
    return 0;
}
