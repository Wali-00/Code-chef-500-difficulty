#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        if(X>Y){
            cout<<"NEW PHONE"<<endl;
        }
        else if(X<Y){
            cout<<"REPAIR"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
    }
}
