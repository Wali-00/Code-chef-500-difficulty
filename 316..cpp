#include<bits/stdc++.h>

using namespace std;

int main(){
    int A,B,X,Y;
    cin>>A>>B>>X>>Y;
    int messi=(A*2)+(B*1);
    int ron=(X*2)+(Y*1);
    if (messi==ron)
    {
        cout<<"Equal"<<endl;
    }
    else if(messi>ron)
    {
        cout<<"Messi"<<endl;
    }
    else
    {
        cout<<"Ronaldo"<<endl;
    }
    
    
    
}