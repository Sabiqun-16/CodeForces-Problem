#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    unsigned long long int a[t+5],sum=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        sum+=(a[i]*3);
    }
        cout<<sum<<endl;
    return 0;
}


