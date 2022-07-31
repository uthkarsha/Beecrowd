#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if (x%2==0){
        x++;
    }
    int n=6;
    while (n--){
        cout<<x<<endl;
        x+=2;
    }
    return 0;
}
