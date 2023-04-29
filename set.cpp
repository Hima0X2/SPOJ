#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
     set<int> s;
     set<int> :: iterator it;
     s.insert(13);
     s.insert(11);
      s.insert(12);
     s.insert(10);//ascending e sajano thakbe
     //it=s.find(13);
     s.erase(13);
     for(it=s.begin();it!=s.end();it++)
     {
          cout<<*it<<endl;
     }
     return 0;
}
