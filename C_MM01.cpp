#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    float h,tl,bl;
    float a;
    while (cin>>tl>>bl>>h){
        cout<<"Trapezoid area:"<< fixed <<setprecision(1)<<((tl+bl)*h/2.0)<<"\n";
    }
    return 0;
}
