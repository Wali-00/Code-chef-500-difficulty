#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int X,Y;
        cin>>X>>Y;
        if (X>Y)
        {
            cout<<"LOSS"<<endl;
        }
        else if (X<Y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NEUTRAL"<<endl;
        }
        
    }
    
}