///Some vector functions are assign(), erase(), insert()
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;
    vector <int > :: iterator i;          ///iterator declaration
    vector <int > :: reverse_iterator ri;///reverse iterator declaration


    ///vector initialization
    for(int i = 0; i <= 10; i++)
    {
        v.push_back(i);
    }

    ///printing vector
    for(i = v.begin(); i != v.end(); i++)
    {
        cout<<"Before Inserting : "<<*i<<endl;
    }
    cout<<endl;

    i = v.begin();
    v.erase(i+4);     ///erase 5th no index
    v.insert(i+4, 20);///insert value at 5th no index
    ///printing vector after inserting
    for(i = v.begin(); i != v.end(); i++)
    {
        cout<<"After Inserting : "<<*i<<endl;
    }
    cout<<endl;
}
