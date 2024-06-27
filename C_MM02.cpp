#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int tl,bl;
    float a;
    while (scanf("%d%d",&tl,&bl)!=EOF){
        printf("%.1f\n",(tl*bl)/2.0);
    }
    return 0;
}