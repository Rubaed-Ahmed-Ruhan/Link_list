#include<bits/stdc++.h>
using namespace std;

#define endl             '\n'
#define int              long long

void solve(){
        char x;
        cin>>x;
        int av = x;
        if (av >= 48 and av<= 58){
        	cout<<"IS DIGIT"<<endl;
        }
        else if(av >= 65 and av <= 91 ){
        	cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
        }
        else if(av >= 97 and av <= 123){
        	cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
        }
}

int32_t main(){

        // RUHAN 
        ios_base::sync_with_stdio(false); 

#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif 

        int t = 1;
        //cin>>t;
        while(t--){
                solve();
        }
}