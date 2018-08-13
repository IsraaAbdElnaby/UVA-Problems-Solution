#include<bits/stdc++.h>
using namespace std;

int n, m, c, x;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while(cin>>n>>m>>c && n){
    x = c == 1?1:0;
    cout<<((n-7)*(m-7)+ x)/2<<endl;
    }
    return 0;
}
