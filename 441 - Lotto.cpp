#include<bits/stdc++.h>
using namespace std;
 
int arr[10000005];
int k;
 
int main()
{
 
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    int n = 0;
    while(cin>>k){
    if (k == 0) break;
    if(n) cout<<endl;
    for(int i=0; i<k; i++)
        cin>>arr[i];
    for(int i=0; i<k-5; i++){
        for(int j=i+1; j<k-4; j++){
            for(int a=j+1; a<k-3; a++){
                for(int b = a+1; b<k-2; b++){
                    for(int c = b+1; c<k-1; c++){
                        for(int d = c+1; d<k; d++)
                           cout<<arr[i]<<" "<<arr[j]<<" "<<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<" "<<arr[d]<<endl;
                    }
                }
            }
        }
    }
    n++;
    }
    return 0;
}