#include<stdio.h>

int main() { 
    int p,r,t;
    float SI;
    printf("enter p  :",p);
    scanf("%d",&p);
    printf("enter r :", r);
    scanf("%d",&r);
    printf("enter t:",t);
    scanf("%d",&t);
    SI= (p*r*t)/100;
    printf(" SI is : %.2f",SI);
    scanf(" %d %d %d",p,r,t);
	
    

    return 0;
}

