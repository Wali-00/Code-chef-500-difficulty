#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        if(X*100< Y*10){
            cout<<"Disposable"<<endl;
        }
        else if(X*100>Y*10){
            cout<<"Cloth"<<endl;
        }
        else{
            cout<<"Cloth"<<endl;
        }
    }
}
