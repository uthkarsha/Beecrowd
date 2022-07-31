#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3],a[3];
    for(int i=0;i<3;i++){
        cin >> arr[i];
        a[i] = arr[i];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++){
        cout << a[i] << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++){
        cout << arr[i] << endl;
    }

    return 0;
}
