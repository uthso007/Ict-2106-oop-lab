#include<bits/stdc++.h>
using namespace std;
class temp
{
   float f,c;
   public:
    void convert_to_celsius(void);
};
void temp::convert_to_celsius(void)
{
    cout<<"Enter the vaule of temperature in Fahrenheit "<<endl;
    cin>>f;
    c=((f-32)*5)/9;
    cout<<"The vaule of temperature in celsius is "<<fixed<<std::setprecision(2)<<c<<endl;
}
int main()
{
    temp t;
    t.convert_to_celsius();
    return 0;
}
