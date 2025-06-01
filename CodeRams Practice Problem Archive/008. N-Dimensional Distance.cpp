#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d;
    cin>>d;

    vector<int> p(d),q(d);
    for(int i=0;i<d;i++){
        cin>>p[i];
        cin>>q[i];
    }
    double sum=0.0;
    for(int i=0;i<d;i++) sum+=pow((q[i]-p[i]),2);

    cout<<fixed<<setprecision(16)<<sqrt(sum)<<endl;

    return 0;
}

