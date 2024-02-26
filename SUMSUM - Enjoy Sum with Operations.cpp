/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m,p,q,r;
    string x;
    cin>>n>>m;
    for(i=0;i<n;i++){
          cin>>a[i];
    }
    while(m--){
        cin>>p;
        if(p==1){
            cin>>q>>r;
            a[r-1]=q;
        }
        else{
            cin>>x>>q>>r;
            long long int sum = 0;
            if(x == "XOR"){
                for(int j = q-1; j < r-1; ++j){
                    for(int k = j+1; k < r; ++k){
                        sum += (a[j] ^ a[k]);
                    }
                }
            }
            else if(x == "OR"){
                for(int j = q-1; j < r-1; ++j){
                    for(int k = j+1; k < r; ++k){
                        sum += (a[j] | a[k]);
                    }
                }
            }
            else if(x == "AND"){
                for(int j = q-1; j < r-1; ++j){
                    for(int k = j+1; k < r; ++k){
                        sum += (a[j] & a[k]);
                    }
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
/// ALHAMDULILLAH
