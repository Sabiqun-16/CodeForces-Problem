#include<bits/stdc++.h>

using namespace std;

int main()
{
    long d,p;
    cin>>d>>p;

    long res=1;
    for(int i=0;i<p;i++) res*=d;
    cout<<res<<endl;

    return 0;
}
