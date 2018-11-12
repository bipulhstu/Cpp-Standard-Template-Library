///Map declaration and initialization
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
    for(i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}
