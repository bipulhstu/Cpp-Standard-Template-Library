///Iterator declaration
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;
    vector <int > :: iterator i;          ///iterator declaration
    vector <int > :: reverse_iterator ri;///reverse iterator declaration

    for(int i = 0; i <=10; i++)
    {
        v.push_back(i);
    }
    ///iterator
    for(i = v.begin(); i != v.end(); i++)
    {
        cout<< *i<<" ";
    }
    cout<<endl;

    ///reverse iterator
    for(ri = v.rbegin(); ri != v.rend(); ri++)
    {
        cout<< *ri<<" ";
    }
    cout<<endl;

    return 0;
}
