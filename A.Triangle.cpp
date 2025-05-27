#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];

    sort(a,a+4);
    bool segment=false;
    for(int i=0;i<2;i++){
        if(a[i]+a[i+1]>a[i+2]){
            cout<<"TRIANGLE"<<endl;
            return 0;
        }
        else if(a[i]+a[i+1]==a[i+2]){
            segment=true;
        }
    }
    if(segment) cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
