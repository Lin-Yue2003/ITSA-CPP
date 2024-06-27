#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    int h,tl,bl;
    float a;
    while (cin>>h>>tl>>bl){
        cout<<"Trapezoid area:"<< fixed <<setprecision(1)<<(tl+bl)/2.0*h<<"\n";
    }
    return 0;
}