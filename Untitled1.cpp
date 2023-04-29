#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int i;
     vector<int> vec;
     vec.push_back(34);
     vec.push_back(30);
     for(i=0;i<vec.size();i++)
     {
      cout<<vec[i]<<endl;
     }
     return 0;
}
