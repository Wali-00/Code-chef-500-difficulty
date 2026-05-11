#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y;
    cin>>T;
    while (T--)
    {
        cin>>X>>Y;
        if(Y*2<=X){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}