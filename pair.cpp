#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
     vector< pair<string,int> > v;
     vector< pair<string,int> >:: iterator it;
     v.push_back( make_pair("nabil",21) );
      v.push_back( make_pair("nabila",22));
      for(it=v.begin();it!=v.end();it++)
      {
           cout<<it->first<<" "<<it->second<<endl;
      }

}
