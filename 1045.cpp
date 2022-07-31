#include<bits/stdc++.h>
using namespace std;
int main(){
    double arr[3];
    for (int i=0;i<3;i++){
        cin >> arr[i];
    }
    sort(arr,arr+3,greater<double>());
    //cout << arr[0] <<" "<<arr[1]<<" "<<arr[2]<<endl;
    double A=arr[0],B=arr[1],C=arr[2];
    if (A>=B+C){
        cout << "NAO FORMA TRIANGULO"<<endl;
    }
    else if ((A*A)==(B*B)+(C*C)){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if ((A*A)>(B*B)+(C*C)){
         cout << "TRIANGULO OBTUSANGULO"<<endl;
    }
    else if ((A*A)<(B*B)+(C*C)){
         cout << "TRIANGULO ACUTANGULO"<<endl;
    }
    if (A==B && B==C){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if (A==B || B==C || C==A ){
        cout << "TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
