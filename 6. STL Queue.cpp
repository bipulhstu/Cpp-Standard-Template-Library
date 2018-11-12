#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;            ///Queue declaration

    q.push(100);             ///Assigning values
    q.push(101);
    q.push(102);
    q.push(103);

    while(! q.empty())
    {
        cout<<q.front()<<endl; ///printing the front
        q.pop();               ///removing that one
    }
    return 0;
}
