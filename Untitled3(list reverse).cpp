#include<iostream>
#include<vector>
#include<iterator>
#include<list>
using namespace std;
int main()
{
     int i;
    list<float> mylist;
    list<float>:: iterator it;

     for(i=0;i<5;i++)
     {
          mylist.push_back(i);
     }
     for(i=5;i<10;i++)
     {
          mylist.push_front(i);
     }
     mylist.reverse();
      for(it=mylist.begin();it!=mylist.end();it++)
     {
     cout<<*it<<endl;
     }
     return 0;
}

