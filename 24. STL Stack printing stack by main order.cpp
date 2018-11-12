///Declaration, Initialization and Printing Stack
#include<iostream>
#include<stack>
using namespace std;
void show(stack<int> st)
{
    ///printing stack  ///it will print reverse order
   ///so we have to reverse it
    stack <int> st2;
    while(! st.empty())
    {
        st2.push(st.top());   ///copy into st2 from top to buttom
        st.pop();          ///removing the top
    }
    while(! st2.empty())
    {
        cout<<st2.top()<<endl; ///printing the top
        st2.pop();            ///removing that one
    }
}
int main()
{
    stack <int> st;        ///Declaration Stack
    ///Initialization Stack
    for(int i = 1; i<= 10; i++)
    {
        st.push(i);
    }

    ///printing stack by calling function
    show(st);
}

