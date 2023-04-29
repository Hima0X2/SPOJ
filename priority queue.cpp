#include<iostream>
#include<queue>
using namespace std;
int main()
{
     priority_queue<string> q;
     q.push("Samu");
      q.push("Naru");
       q.push("Mouno");
       while(!q.empty())
       {
            string x;
            x= q.top();
            cout<<x<<" ";//decending
            q.pop();
       }
       return 0;
}
