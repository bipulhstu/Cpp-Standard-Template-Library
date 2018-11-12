///Copy values one map to another map
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string, int> mp;            ///map declaration
    mp["xx"] = 100;                ///map initialization
    mp["yy"] = 200;
    mp["zz"] = 300;
    mp["aa"] = 400;
    mp["bb"] = 500;

    map<string, int> :: iterator i; ///iterator declaration
    ///priting values
    cout<<"First map : "<<endl;
    for(i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    ///another map and copy values to the map
    map<string, int> mp2(mp.begin(), mp.end());
    ///priting values
    cout<<endl<<"Second map : "<<endl;
    for(i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}













