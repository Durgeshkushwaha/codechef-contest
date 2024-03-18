#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a,b,c;
    for (int i = 0; i<t; i++)
    {
        
        scanf("%d %d %d",&a,&b,&c); 
        int d;
        d=a*c-a*b;
        printf("%d\n",d);
    }
    // for (int i = 0; i < t; i++)
    // {
    //     int d;
    //     d=a*c-a*b;
    //     printf("%d\n",d);
    // }
    return 0;
}