///Queue Declaration and Initialization
#include<iostream>
#include<queue>
using namespace std;
void show(queue <string> queueTemp)
{
    while(!queueTemp.empty())
    {
        cout<<queueTemp.front()<<endl;  ///printing the top
        queueTemp.pop();               ///removing that one
    }
}
int main()
{
    queue<string > q;      ///queue declaration
    q.push("Bipul");      ///queue initialization
    q.push("Dino");
    q.push("Sorwar");
    q.push("Mashiur");
    q.push("Rana");

    show(q);

    return 0;
}
