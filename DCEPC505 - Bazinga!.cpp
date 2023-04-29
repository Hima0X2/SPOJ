/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime,f;
void Prime(long long int lim){
    long long int sq=sqrt(lim);
    for(long long int i=3; i<=sq; i+=2){
        if(!is_prime[i]){
            for(long long int j=i*i; j<=lim; j+=i){
          is_prime[j]=1;
            }
        }
    }
    is_prime[2]=0;
    prime.push_back(2);
    for(long long int i=3; i<=lim; i+=2){
        if(!is_prime[i]) {
               prime.push_back(i);
        }
    }
for(long long int i=0;i<=prime.size();i++){
     for(long long int j=i+1;j<=prime.size();j++){
          long long int v=prime[i]*prime[j];
               if(v >= 11000000) {
                break;
            }
          f.push_back(v);
     }
}
sort(f.begin(),f.end());
}
int main()
{
     optimize();
     Prime(11000000);
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,k;
     cin>>t;
     while(t--){
cin>>k;
cout<<f[k-1]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




