///some queue function
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;        ///queue declaration
    q.push("Bipul");      ///queue initialization
    q.push("Dino");
    q.push("Sorwar");
    q.push("Mashiur");
    q.push("Rana");

    cout<<"Size of queue : "<<q.size()<<endl;
    cout<<"Printing the front : "<<q.front()<<endl;  ///printing the front
    cout<<"Printing the back : "<<q.back()<<endl;   ///printing the back
    cout<<"Is queue empty? : "<<q.empty()<<endl;   ///is queue empty?
    q.pop();                               ///removing the top/front
    cout<<"Printing the front : "<<q.front()<<endl; ///printing front after removing front

    return 0;
}
