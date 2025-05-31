#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x,y;
        cin>>x>>y;
        bool ok=true;
        for(int i=0;i<n;i++){
            char c1=x[i];
            char c2=y[i];
            if(c1!=c2){
                if(c1=='R' || c2=='R'){
                    ok=false;
                    break;
                }
            }
        }
        if(ok)cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}


