#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int, int> p1;
    p1 = make_pair(1, 2);
    cout<<"First Pair : "<<p1.first<<" "<<p1.second<<endl;

    pair <int , int> p2(p1); ///copy value one pair to another
    cout<<"Second Pair : "<<p2.first<<" "<<p2.second<<endl;

    return 0;
}
