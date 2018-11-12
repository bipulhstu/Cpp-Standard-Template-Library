#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector < int > v, t;    ///vector declaration

    v.push_back(1);     ///vector initialization
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    t = v;  ///copying

    for(int i = 0; i<t.size(); i++)
        cout<<t[i]<<endl;

    return 0;
}

