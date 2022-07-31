#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,sum=0;
    cin>>x>>y;
    if(x>y){
        swap(x,y);
    }
    if (x%2==0){
        x++;
    }
    else{
        x+=2;
    }
    for (int i=x;i<y;i+=2){
       sum = sum + i;
    }
    cout<<sum<<endl;
    return 0;
}
