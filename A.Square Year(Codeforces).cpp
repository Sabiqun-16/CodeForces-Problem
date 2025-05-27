#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int res=stoi(s);

        int x=sqrt(res);
        if(x*x!=res) cout<<"-1"<<endl;

        cout<<0<<" "<<x<<endl;

    }
    return 0;
}

