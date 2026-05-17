#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string s=to_string(N);
        char first=s[0];
        char last=s[s.size()-1];
        int firstDigit=first-'0';
        int lastDigit=last-'0';
       int sum=firstDigit+lastDigit;
       cout<<sum<<endl;
        
    }
}

/* Another approach

int main() {

    int n;
    cin >> n;

    int last = n % 10; // last digit

    while(n >= 10) {
        n = n / 10;
    }

    int first = n; // first digit

    cout << first + last;

}*/