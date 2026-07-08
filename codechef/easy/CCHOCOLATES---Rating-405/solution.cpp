#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        // your code goes here
        if(x*5 + y*10 >=z){
            int ans = (x*5 + y*10)/z;
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	

}
