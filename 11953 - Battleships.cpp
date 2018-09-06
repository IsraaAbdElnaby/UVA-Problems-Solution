#include<bits/stdc++.h>
using namespace std;

int n, t, cnt = 0;
char a[105][105]; //grid
bool visited[105][105];

/** to go through the surrounding cells in the four directions (up, down, right, left) **/
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

/** a function to insure that the indexes don't exceed the borders **/
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<n;
}

void dfs(int x, int y, int c)
{
    if(visited[x][y]) return;
    visited[x][y] = 1;
    for(int k = 0; k<4; k++)
    {
        int toX = x + dx[k];
        int toY = y + dy[k];

        if(valid(toX, toY) && !visited[toX][toY] && (a[toX][toY] == 'x' || a[toX][toY] == '@'))
        {
            dfs(toX, toY, c);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    int z = 1;
    while (t--)
    {
        cin>>n;
        memset(visited, 0, sizeof(visited));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!visited[i][j] && a[i][j] == 'x')
                {
                    dfs(i, j, cnt);
                    cnt++;
                }
            }
        }
        cout<<"Case "<<z<<": "<<cnt<<endl;
        cnt = 0;
        z++;
    }

    return 0;
}
