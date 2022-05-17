#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int r;
    int bool_value;
    
    printf("please input r\n");
    scanf("%d",&r);
    
    if(r>=0){
         cout<<r*r*3.14<<endl<<r*2*3.14;
    }
    else{ 
         cout<<"r<0";}
         
    
    return 0;
}
