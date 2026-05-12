#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X1,Y1,X2,Y2;
    cin>>T;
    while(T--){
        cin>>X1>>Y1>>X2>>Y2;
        if(X1+Y1<=X2+Y2){
        cout<<X1+Y1<<endl;
       }
       else{
        cout<<X2+Y2<<endl;
       }
    }
}