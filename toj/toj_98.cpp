#include<iostream>
using namespace std;


int main() {
    long long a,b,c,d,e,f;
    a=299792458;
    b=a*60;
    c=b*60;
    d=c*24;
    e=d*7;
    f=d*365;
    
    cout <<"1 Light-second(LS) is 299792458 metres.\n";
    cout <<"1 Light-minute(LM) is "<<b<<" metres.\n";
    cout <<"1 Light-hour(LH) is "<<c<<" metres.\n";
    cout <<"1 Light-day(LD) is "<<d<<" metres.\n";
    cout <<"1 Light-week(LW) is "<<e<<" metres.\n";
    cout <<"1 Light-year(LY) is "<<f<<" metres.\n"    ;
    

    return 0;
}
