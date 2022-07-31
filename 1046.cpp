#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,e,c;
    cin>>s>>e;
    if (s>e){
        c=(24-s)+e;
    }
    else if (s<e){
        c=e-s;
    }
    else if (s==e){
        c=24;
    }
    cout << "O JOGO DUROU " << c << " HORA(S)"<<endl;
    return 0;
}
