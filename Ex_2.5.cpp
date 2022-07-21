#include<bits/stdc++.h>
using namespace std;
int main()
{
    float f,c;
    cout<<"Enter the vaule of temperature in Fahrenheit "<<endl;
    cin>>f;
    c=((f-32)*5)/9;
    cout<<"The vaule of temperature in celsius is "<<fixed<<std::setprecision(2)<<c<<endl;
    return 0;
}