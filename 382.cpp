#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    if(X*3>=Y*2){
	        cout<<Y*2<<endl;
	    }
	    else{
	        cout<<X*3<<endl;
	    }
	}

}
