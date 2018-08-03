#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    /**
    * m, f are female and male
    * m1, f1 previous values of m, f
    **/
  
    long long N, m, f, f1, m1;
    while(cin>>N && N != -1){
         f = 1; m = 0;
        for(int i=1; i<=N; i++){
            f1 = f; m1 = m;
            f = m1+1;
            m = f1 + m1;
        }
        long long bees = f+m;
        cout<<m<<" "<<bees<<endl;
    }

    return 0;
}
