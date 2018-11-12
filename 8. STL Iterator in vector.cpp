#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
int main()
{
    vector <int> v;        ///vector declaration
    v.push_back(1);       ///Assigning values
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator i; ///iteratior declaration
    for(i = v.begin(); i<v.end(); i++)
        printf("%d\n", *i);

    return 0;

}
