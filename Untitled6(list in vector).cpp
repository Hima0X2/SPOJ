#include<iostream>
#include<vector>
#include<iterator>
#include<list>
using namespace std;
int main()
{
     int i;
    list<float> mylist(4,2);
    list<float>:: iterator it;

      for(it=mylist.begin();it!=mylist.end();it++)
     {
     cout<<*it<<endl;
     }
     return 0;
}



