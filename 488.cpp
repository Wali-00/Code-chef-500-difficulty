#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int Na,Nb,Nc;
        cin>>Na>>Nb>>Nc;
        if(Na>Nc+Nb){
            cout<<"YES"<<endl;
        }
      else  if(Nb>Nc+Na){
            cout<<"YES"<<endl;
        }
    else    if(Nc>Na+Nb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
