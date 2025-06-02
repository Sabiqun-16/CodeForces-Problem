#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int y;
    cin>>y;
    int res=y+1;
    while(true){
        int n=res;
        int a=n/1000;
        int b=(n/100)%10;
        int c=(n/10)%10;
        int d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<res<<endl;
            break;
        }
        res++;
    }
    return 0;
}
