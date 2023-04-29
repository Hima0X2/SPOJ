#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int i;
     vector<int> vec(5,2);
     for(i=0;i<vec.size();i++)
     {
      cout<<vec[i]<<endl;
     }
     return 0;
}
