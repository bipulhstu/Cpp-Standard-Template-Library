///Set Declaration, Initialization and Printing
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
    s.insert(7);

    ///priting set
    for(i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<endl;
    }

    ///some set functions
    cout<<"Size of set : "<<s.size()<<endl; ///print size
    cout<<"Maximum size of set : "<<s.max_size()<<endl;
    cout<<"Is empty? : "<<s.empty()<<endl;
    s.clear();       ///clear set/delete all value
    ///priting set
    for(i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<endl;
    }

    return 0;
}

