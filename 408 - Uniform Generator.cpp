#include<bits/stdc++.h>
using namespace std;

int freq1[100005]= {0};
int STEP, MOD;
long long sum = 0;
string choice;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    while(cin>>STEP>>MOD)
    {
        memset(freq1,0,1e5);
        choice = "Good Choice";
        while(true)
        {
            sum += STEP;
            if(sum>= MOD)
            {
                sum %= MOD;
            }
            freq1[sum]++;
            if(sum == 0) break;
        }

        for(int i=0; i<MOD; i++)
        {
            if(!freq1[i]) choice = "Bad Choice";
        }
        /**
        print the STEP value right-justified in columns 1 through 10
         the MOD value right-justified in columns 11 through 20
          either ‘Good Choice’ or ‘Bad Choice’ left-justified starting in column 25
        **/
        cout<<setw(10)<<STEP<<setw(10)<<MOD<<setfill(' ')
            <<setw(4)<<' '<<choice<<endl;
        cout<<endl;
    }
    return 0;
}
