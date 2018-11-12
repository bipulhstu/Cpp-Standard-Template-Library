///Priority Queue Declaration and Initialization
#include<iostream>
#include<queue>
using namespace std;
void show(priority_queue<int> qq)
{
    priority_queue <int> q = qq; ///it's for nothing
    while(! q.empty())
    {
        cout<<'\t'<<q.top();   ///printing the top
        q.pop();              ///removing that one
    }
    cout<<endl;
}
int main()
{
    priority_queue <int> q;    ///Declaration
    q.push(12423);            ///Initialization
    q.push(324);
    q.push(2342);
    q.push(645);
    q.push(466);

    ///printing
    cout<<"The Priority Queue q is : ";
    show(q);
}
