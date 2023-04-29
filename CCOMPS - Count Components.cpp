/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 200000+123;
vector<long long int> adj[mx];
int vis[mx];
void dfs(long long int n){
     vis[n]=1;
     for(int i=0;i<adj[n].size();i++){
          long long int x=adj[n][i];
          if(vis[x]==0){
               dfs(x);
          }
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,m,u,v,c=0;
     cin>>n>>m;
    for(i=1;i<=m;i++){
     cin>>u>>v;
     adj[u].push_back(v);
      adj[v].push_back(u);
    }
    for(i=1;i<=n;i++){
     if(vis[i]==0){
               c++;
          dfs(i);
     }
    }
    cout<<c<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




