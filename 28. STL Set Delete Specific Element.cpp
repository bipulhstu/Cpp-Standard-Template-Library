///Delete specific element
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s;        ///Set Declaration
    set <int> :: iterator i;  ///Iterator Declaration
    s.insert(7);       ///Set Insertion/Initialization
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(6);
    s.insert(8);

    s.erase(s.begin());  ///Delete first element
    s.erase(s.begin(), s.find(4)); ///Delete first to 4th element
    ///priting set
    for(i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<endl;
    }

    return 0;
}

