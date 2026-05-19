#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int W,X,Y,Z;
        cin>>W>>X>>Y>>Z;
        if(X>(W+Y*Z)){
            cout<<"Unfilled"<<endl;
        }
        else if(X<(W+Y*Z)){
            cout<<"overFlow"<<endl;
        }
        else{
            cout<<"filled"<<endl;
        }
    }
}
