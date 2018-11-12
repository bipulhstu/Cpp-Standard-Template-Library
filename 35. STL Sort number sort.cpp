///number sort
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define MX 100
int num[MX];
vector <int> v;
void randomNumberGenerator(int n)
{
    for(int i = 0; i<n ; i++)
    {
        num[i] = rand()%200;  ///save random number in num
        v.push_back(num[i]); ///save random number in vector
    }
}
void showNumbers(int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<num[i]<<" ";  ///show numbers which saved in num
    }
    cout<<endl;
}
int main()
{
    int n = 10;
    randomNumberGenerator(n); ///generate 10 random number
    showNumbers(n);          ///show random numbers
    sort(num, num+n);       ///sort random numbers
    showNumbers(n);        ///show sort numbers

    return 0;
}
