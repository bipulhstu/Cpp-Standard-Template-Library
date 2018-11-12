///Set Declaration, Initialization and Printing
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int , greater<int> > s; ///Set Declaration
    ///Iterator Declaration & greater for Descending order
    set <int , greater<int> > :: iterator i;
    s.insert(7);       ///Set Insertion/Initialization
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(7);

    ///priting set
    for(i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<endl;
    }

    return 0;
}

