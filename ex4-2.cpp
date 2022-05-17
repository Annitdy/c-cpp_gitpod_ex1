#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    
    printf("please input x\n");
    scanf("%d",&x);
        if(x%400==0)
        cout<<"Yes";
        else
        cout<<"No";
    
    return 0;
}
