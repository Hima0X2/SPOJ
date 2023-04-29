#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
bool my_func(int a,int b)
{
     return (a>b);
}
int main()
{
     int i;
     vector<int> vec;
     vector<int>:: iterator it;

     for(i=0;i<5;i++)
     {
          vec.push_back(i);
     }
     sort(vec.begin(),vec.begin()+5);
      for(it=vec.begin();it!=vec.end();it++)
     {
     cout<<*it<<endl;
     }
     return 0;
}
