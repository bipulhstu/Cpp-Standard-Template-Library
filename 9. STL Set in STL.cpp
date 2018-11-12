#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#include<set>
using namespace std;
int main()
{
    set <int> s;       ///set declaration

    s.insert(10);
    s.insert(5);
    s.insert(9);
    s.insert(9);

    set <int> :: iterator i;      ///iterator
    for(i = s.begin(); i !=s.end(); i++)
        cout<<*i<<endl;

    return 0;
}
