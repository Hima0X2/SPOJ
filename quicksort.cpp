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
long long int part(long long int a[],long long int lo,long long int hi){
     long long int pivot=a[lo],i=lo,j=hi;
     while(i<j){
     while(a[i]<pivot){
          i++;
     }
     while(a[j]>pivot){
         j--;
     }
     if(i<j){
          swap(a[lo],a[hi]);
     }
     }
     swap(a[lo],a[j]);
     return j;
}
void quicksort(long long int a[],long long int lo,long long int hi){
     if(lo<hi){
          long long int loc=part(a,lo,hi);
          quicksort(a,lo,loc-1);
          quicksort(a,loc+1,hi);
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
    quicksort(a,0,n-1);
    cout<<"After Quick sort: ";
    for(i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
}
/// ALHAMDULILLAH




