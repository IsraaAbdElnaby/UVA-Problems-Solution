#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,amp, freq;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++){
       
        cin>>amp>>freq;

        for(int j=0; j<freq; j++){
            int len = 1;
            for(int x=0; x<amp; x++){
               for(int k=0; k<len; k++){
                 cout<<len;
               }
               len++;
               cout<<endl;
            }
            len--;
            for(int x=amp-1; x>0; x--){
                len--;
                for(int k=x; k>0; k--){
                   cout<<len;
                }
                cout<<endl;
            }
            if(j<freq-1)cout<<endl;
        }
        if(i<n-1)cout<<endl;
    }
    return 0;
}