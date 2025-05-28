#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    double d1=(x2-x1);
    double d2=(y2-y1);
    double s=(d1*d1)+(d2*d2);
    double d=sqrt(s);
    cout<<fixed<<setprecision(16)<<d<<endl;
    return 0;
}

