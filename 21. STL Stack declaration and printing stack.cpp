///Declaration, Initialization and Printing Stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> st;        ///Declaration Stack
    ///Initialization Stack
    for(int i = 1; i<= 10; i++)
    {
        st.push(i);
    }

    ///printing stack  ///it will print reverse order
    while(! st.empty())
    {
        cout<<st.top()<<endl; ///printing the top
        st.pop();            ///removing that one
    }

}
