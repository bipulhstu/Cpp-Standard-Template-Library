#include<vector>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
    stack <int> st;           ///Stack declaration
    st.push(100);             ///Assigning value
    st.push(101);
    st.push(102);
    st.push(103);
    st.push(104);

    while(!st.empty())
    {
        cout<<st.top()<<endl;  ///printing the top
        st.pop();             ///removing that one
    }
    return 0;
}
