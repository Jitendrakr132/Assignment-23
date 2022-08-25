#include<iostream>
using namespace std;
int main()
{
    int l,b,h;
    int sum=0;
    float avrg;
    cout<<"Enter the three numbers:";
    cin>>l>>b>>h;
    sum=l+b+h;
    avrg=sum/3.0;
    cout<<"average = "<<avrg;
    return 0;
}

