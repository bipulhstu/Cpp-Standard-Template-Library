///some map functions are erase(), clear()
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

    mp.erase("xx");  ///erase the value which index is xx
    mp.erase(mp.begin(), mp.find("xx")); ///erase value until xx
    mp.erase(mp.find("bb"), mp.end());  ///erase value bb to end
    mp.clear();                        ///delete all value

    ///priting values after clear
    cout<<endl<<"First map after clear : "<<endl;
    for(i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    return 0;
}














