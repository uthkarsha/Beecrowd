#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for (int i=2;i<=N;i+=2){
        int x=i*i;
        cout<<i<<"^2 = "<<x<<endl;;
    }
    return 0;
}
