#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    int cnt=0,cnt2=0,cnt3=0,cnt4=0;
    for (int i=0;i<5;i++){
        cin >> n;
        if(n%2==0){
            cnt++;
        }
        else{
            cnt2++;
        }
         if (n>0){
            cnt3++;
        }
        else if(n<0){
            cnt4++;
        }
    }
     cout << cnt << " valor(es) par(es)"<<endl;
     cout << cnt2 << " valor(es) impar(es"<<endl;
     cout << cnt3 << " valor(es) positivo(s)"<<endl;
     cout << cnt4 << " valor(es) negativo(s)"<<endl;
    return 0;
}

