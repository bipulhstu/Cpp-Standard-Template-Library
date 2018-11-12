///Pair Declaration and Initialization
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair <int , string> p;      ///Pair Declaration

    p.first = 1502259;         ///Pair Initialization
    p.second = "Bipul Islam";
    cout<<p.first<<" "<<p.second<<endl;

    ///Pair declaration and initialization using constructor
    pair <int, int> p2 (10, 20);
    cout<<p2.first<<" "<<p2.second<<endl;

    return 0;
}
