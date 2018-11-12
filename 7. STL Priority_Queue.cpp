#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> q;     ///priority_queue declaration

    q.push(10230);
    q.push(1023);
    q.push(102322);

    while(!q.empty())
    {
        cout<<q.top()<<endl;   ///printing the top
        q.pop();              ///removing that one
    }
    return 0;
}
