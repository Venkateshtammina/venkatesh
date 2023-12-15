#include <stdio.h>
void main(){
    int l1,r1,l2,r2,i=0;
   printf("enter the value of l1");
   scanf("%d",&l1);
   printf("enter the value of r1");
   scanf("%d",&r1);
   printf("enter the value of l2");
   scanf("%d",&l2);
   printf("enter the value of r2");
   scanf("%d",&r2);
   
   
    if(l2>=r1){
        i=l2-r1;
        printf("the intersection is : %d",i);
        
    }
    else{
        printf("the intersection is 0");
        
    }
}
