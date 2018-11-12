///Some vector functions are capacity(), max_size(), empty()
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;

    ///vector initialization
    for(int i = 0; i <= 10; i++)
    {
        v.push_back(i);
    }

    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Maximum size : "<<v.max_size()<<endl;
    cout<<"Is empty? : "<<v.empty()<<endl;

    return 0;
}
