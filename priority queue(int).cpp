#include<iostream>
#include<queue>
using namespace std;
int main()
{
     priority_queue<int> q;
     q.push(100);
      q.push(90);
       q.push(110);
       while(!q.empty())
       {
            int x;
            x= q.top();
            cout<<x<<" ";//decending
            q.pop();
       }
       return 0;
}

