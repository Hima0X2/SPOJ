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
long long int a[mx],b[mx];
void _merge(long long int a[],long long int lo,long long int mid,long long int hi){
     long long int i=lo,j=mid+1,k=0;
     while(i<=mid&&j<=hi){
          if(a[i]<a[j]){
               b[k++]=a[i++];
          }
          else{
               b[k++]=a[j++];
          }
     }
      while(i<=mid){
               b[k++]=a[i++];
     }
     while(j<=hi){
               b[k++]=a[j++];
     }
}
void mergesort(long long int a[],long long int lo,long long int hi){
     if(lo<hi){
          long long int mid=(lo+hi)/2;
          mergesort(a,lo,mid);
          mergesort(a,mid+1,hi);
          _merge(a,lo,mid,hi);
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
    mergesort(a,0,n-1);
    cout<<"After Merge sort: ";
    for(i=0;i<n;i++){
      cout<<b[i]<<" ";
    }
    cout<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




