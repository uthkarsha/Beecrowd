#include<bits/stdc++.h>
using namespace std;
string arr[72];
void init(){
    arr[61]="Brasilia";
    arr[71]="Salvador";
    arr[11]="Sao Paulo";
    arr[21]="Rio de Janeiro";
    arr[32]="Juiz de Fora";
    arr[19]="Campinas";
    arr[27]="Vitoria";
    arr[31]="Belo Horizonte";
}
int main(){
    init();
    int i;
    cin>>i;
    if (i<72 && arr[i]!=""){
        cout<<arr[i];
    }
    else{
        cout<<"DDD nao cadastrado"<<endl;
    }


    return 0;
}
