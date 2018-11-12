///assign() function
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;
    vector <int > :: iterator i;          ///iterator declaration
    vector <int > :: reverse_iterator ri;///reverse iterator declaration


    ///vector initialization
    for(int i = 0; i <= 10; i++)
    {
        v.push_back(i);
    }

    ///printing vector
    for(i = v.begin(); i != v.end(); i++)
    {
        cout<<*i<<endl;
    }
    cout<<endl;
    v.assign(5, 100);   ///5 times 100
    ///printing vector
    for(i = v.begin(); i != v.end(); i++)
    {
        cout<<*i<<endl;
    }
}
