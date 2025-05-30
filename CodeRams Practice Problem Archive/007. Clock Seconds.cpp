#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int h,m,s,res=0;
    cin>>h>>m>>s;
    string str;
    cin>>str;

    if(str=="AM" || str=="aM" ||str=="Am" || str=="am") res=(s+(m*60)+(h*60*60));
    else res=43200+(s+(m*60)+(h*60*60));

    cout<<res;

    return 0;
}

