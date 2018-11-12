#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string a, b, c;     ///String declaration
    a = "this is a string "; ///easy assigning
    b = a;              ///copying
    c = a + b;          ///concatenation
    cout<<c<<endl;      ///printing

    printf("%s\n",c.c_str());  ///printing using printf

    ///printing one by one character
    for(int i = 0; i<c.size(); i++)
        cout<<c[i];

    return 0;
}
