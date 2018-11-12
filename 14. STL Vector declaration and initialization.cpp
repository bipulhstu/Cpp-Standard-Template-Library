///Vector Declaration and Initialization
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;            ///vector declaration
    ///vector initialization
    for(int i = 0; i <= 10; i++)
    {
        v.push_back(i);
    }

    ///printing vector
    for(int i = 0; i <= 10; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
