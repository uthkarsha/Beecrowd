#include<bits/stdc++.h>
using namespace std;
int main(){
    int ih,fh,im,fm;
    cin>>ih>>im>>fh>>fm;
    int dh=24,dm=0;
    if (fh<ih ){
        dh=(24-ih)+fh;
    }
    else if (fh>ih){
        dh=(fh-ih);
    }
    if(im<fm){
        dm = fm-im;
    }
    else if(im>fm){
        dh--;
        dm = 60 - (im-fm);
    }
    cout<<"O JOGO DUROU "<<dh<<" HORA(S) E "<<dm<<" MINUTO(S)"<<endl;

    return 0;
}
