#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    double Y;
    cin>>X>>Y;
    if(X+0.50<=Y && X%5==0){
        cout<<fixed<<setprecision(2)<<Y-X-0.50<<endl;
    }
    else{
        cout<<fixed<<setprecision(2)<<Y<<endl;
    }
}