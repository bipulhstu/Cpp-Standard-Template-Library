///Initialization pair by make_pair() function
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair< int , int> p;
    p = make_pair(1502250 ,1502259);
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
