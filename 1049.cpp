#include<bits/stdc++.h>
using namespace std;
int main(){
    string a1,a2,a3;
    cin>>a1>>a2>>a3;
    if (a1=="vertebrado"){
        if(a2=="ave"){
            if(a3=="carnivoro"){
                cout<<"aguia";
            }
            else if(a3=="onivoro"){
                cout<<"pomba";
            }
        }
        else if(a2 == "mamifero"){
            if(a3=="onivoro"){
                cout<<"homem";
            }
            else if(a3=="herbivoro"){
                cout<<"vaca";
            }
        }
    }
    else if (a1=="invertebrado"){
        if(a2=="inseto"){
            if(a3=="hematofago"){
                cout<<"pulga";
            }
            else if(a3=="herbivoro"){
                cout<<"lagarta";
            }
        }
        else if(a2 == "anelideo"){
            if(a3=="hematofago"){
                cout<<"sanguessuga";
            }
            else if(a3=="onivoro"){
                cout<<"minhoca";
            }
        }
    }
    cout<<endl;

    return 0;
}
