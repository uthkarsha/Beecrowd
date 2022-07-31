#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,sum=0.0;
    int cnt=0,p;
    bool fg=false;
    while(1){
        if(fg){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> p;
            if(p==1){
                fg=false;
            }
            else if(p==2){
                break;
            }
            else if(p>2){
                continue;
            }
        }
        cin >> x;
        if(x<0.0 || x>10.00){
            cout << "nota invalida\n";
        }
        else{
            cnt++;
            sum+=x;
        }
        if(cnt==2){
            double avg = sum/2.0;
            cout << "media = " << avg << endl;
            fg=true;
            cnt=0;
            sum=0.0;
        }

    }
    return 0;
}
