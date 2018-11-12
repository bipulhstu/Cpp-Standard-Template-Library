#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector <string> a, b, c;


    a.push_back("B");
    a.push_back("i");
    a.push_back("p");
    a.push_back("u");
    a.push_back("l");

    for(int i = 0; i<a.size(); i++)
        cout<<a[i];


    return 0;
}
