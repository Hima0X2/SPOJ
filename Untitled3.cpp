#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
     int i;
     vector<int> vec;
     vector<int>:: iterator it;

     for(i=0;i<5;i++)
     {
          vec.push_back(i);
     }
      for(i=0;i<vec.size();i++)
     {
      //cout<<vec[i]<<endl;
     }
     it =vec.begin();
     it++;
      cout<<*it<<endl;

     return 0;
}
