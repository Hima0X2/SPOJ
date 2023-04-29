#include<iostream>
#include<stack>
using namespace std;
int main()
{
     stack<string> s;
     s.push("Samu");
     s.push("Naru");
     s.push("Monu");
     while(!s.empty())
     {
          string x;
         x= s.top();
          cout<<x<<endl;
          s.pop();
     }
}
