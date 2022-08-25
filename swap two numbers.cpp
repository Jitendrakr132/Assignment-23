#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    cout<<"before numbers a="<<a<<"  "<<"b="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n\n"<<"swap numbers a="<<a<<" "<<"b="<<b;
    return 0;
}
