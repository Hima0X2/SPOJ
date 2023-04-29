/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime;
void Prime(long long int lim){
    lim+=10;
    for(long long int i=3; i<=lim; i+=2) {
          is_prime[i]=1;
    }
     is_prime[1]=1;
    long long int sq=sqrt(lim);
    for(long long int i=3; i<=sq; i+=2){
        if(is_prime[i]){
            for(long long int j=i*i; j<=lim; j+=(i+i)){
          is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
}
bool check_composite(long long int n, long long int a, long long int d, int s) {
    long long int x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(long long int n, int iter=5) { // returns true if n is probably prime, else returns false.
    if (n < 4)
        return n == 2 || n == 3;

    int s = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     Prime(1e6);
     cin>>t;
     while(t--){
cin>>n;
if(is_prime[n]==1){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
     }
}
/// ALHAMDULILLAH
