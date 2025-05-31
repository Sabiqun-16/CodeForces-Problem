#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n,p,res;
    cin>>n;
    //n=1 (8^1) then lastdigit=8
    //n=2 (8^2)then lastdigit=4
    //n=3 (8^3)then lastdigit=2
    //n=4 (8^4)then lastdigit=6
    //n=5 (8^5)then lastdigit=8 ......

    if(n==0)cout<<"1"<<endl;
    else if(n%4==0) cout<<"6"<<endl;
    else if(n%4==1) cout<<"8"<<endl;
    else if(n%4==2) cout<<"4"<<endl;
    else if(n%4==3) cout<<"2"<<endl;

    return 0;
}
