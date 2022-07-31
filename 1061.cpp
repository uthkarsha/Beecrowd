#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,c;
    int sd,sh,sm,ss,ed,eh,em,es;
    cin>>str>>sd;
    cin>>sh>>c>>sm>>c>>ss;
    cin>>str>>ed;
    cin>>eh>>c>>em>>c>>es;

    /*cin >> sd >> sh >> sm >> ss;
    cin >> ed >> eh >> em >> es;*/
    int carry=0;
    int s,m,h,d;

    //for seconds
    if(es==ss){
        s=0;
    }
    else if(ss>es){
        s = 60-(ss-es);
        carry=1;
    }
    else if(ss<es){
        s = es-ss;
    }

    //for minute
    if(sm==em){
        if(carry>0){
            m=59;
        }
        else m=0;
    }
    else if(sm>em){
        m = 60-(sm-em)-carry;
        carry=1;
    }
    else if (sm<em){
        m = em-sm-carry;
        carry=0;
    }

    //for hour
    if(sh==eh){
        if(carry>0){
            h=23;
        }
        else h=0;
    }
    else if(sh>eh){
        h = 24-(sh-eh)-carry;
        carry=1;
    }
    else if (sh<eh){
        h = eh-sh-carry;
        carry=0;
    }

    //for days
    if(sd==ed){
        d=0;
    }
    else if(sd<ed){
        d = ed-sd-carry;
    }
    cout << d << " dia(s)"<<endl<< h << " hora(s)"<<endl<< m << " minuto(s)"<<endl<< s << " segundo(s)" <<endl;
    return 0;
}
