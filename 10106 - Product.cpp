#include<bits/stdc++.h>
using namespace std;

int arr[100005];
string s1, s2;
int i=0, j=0, mod;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin>>s1>>s2)
    {
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());

        /** if one of the multipliers = 0
         then the result is 0 **/
        if(s1.at(s1.length()-1)-'0' == 0 || s2.at(s2.length()-1)-'0' == 0 )
        {
            cout<<0<<endl;
        }

        else
        {
            memset(arr,0,1e5);
            for(i=0; i<s2.length(); i++)
            {
                for(j=0; j<s1.length(); j++)
                {
                    arr[i+j] += (s1.at(j)-'0')*(s2.at(i)-'0');
                }
            }
            int len = (i+j)-1;

            for(int k=1; k<len; k++)
            {
                mod = arr[k-1]%10;
                arr[k] += arr[k-1]/10;
                arr[k-1] = mod;
            }

            for(int k=len-1; k>=0; k--)
            {
                cout<<arr[k];
            }
            cout<<endl;
        }
    }

    return 0;
}
