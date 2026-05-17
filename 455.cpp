#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int sum=0;
        while(N){
            int x=N%10;
            sum+=x;
            N/=10;
        }
        cout<<sum<<endl;
    }
}