#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d,v;
    cin >> a >> b >> c >> d;
    double avg=(a*2.0 + b*3.0 + c*4.0 + d*1.0)/10.0;
    if (avg >= 5.0 && avg <= 6.9){
        cin >> v;
    }
    cout << "Media: " << fixed << setprecision(1) << avg << endl;
    if (avg>=7.0){
        cout << "Aluno aprovado.\n";
    }
    else if (avg<5.0){
        cout << "Aluno reprovado.\n";
    }
    else {
        cout << "Aluno em exame.\n";
        cout << "Nota do exame: " << v << endl;
        double avg2=(avg+v)/2;
        if (avg2>=5.0){
            cout << "Aluno aprovado.\n";
        }
        else{
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << fixed << setprecision(1) << avg2 << endl;
    }

    return 0;
}
