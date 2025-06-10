#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      int g=min(a,c);
      int f=min(b,d);
      if(g<f) cout<<"Flower"<<endl;
      else cout<<"Gellyfish"<<endl;
    }
}
