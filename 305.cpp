#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(Y>X){
	        std::cout << 0 << std::endl;
	    }
	    else{
	        cout<<X-Y<<endl;
	    }
	}

}
