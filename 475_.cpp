#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if(10*X>=Y){
            cout<<Z*Y<<endl;
        }
        else{
            cout<<(10*X*Z)<<endl;
        }
    }
}
