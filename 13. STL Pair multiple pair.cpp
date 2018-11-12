///Multiple Pair
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    ///multiple pair declaration
    pair <string, pair<int , string> > student;

    ///multiple pair initalization
    student = make_pair("Bipul Islam", make_pair(1502259, "A+"));

    ///printing multiple pair
    cout<<"Student Name : "<<student.first<<"\nStudent Roll : "<<student.second.first<<"\nStudent GPA : "<<student.second.second<<endl;

    return 0;
}
