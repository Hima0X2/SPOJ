#include<iostream>
#include<map>
using namespace std;
int main()
{
     map<string,int> m;
     map<string,int>::iterator it;
     m["Rana"]=45;
     m["Roni"]=43;
     m["samu"]=15;
     for(it=m.begin();it!=m.end();it++)
     {
          cout<<it->first<<" " <<it->second<<endl;
     }
     return 0;
}
