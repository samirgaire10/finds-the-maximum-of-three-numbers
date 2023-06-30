// finds the maximum of three numbers
#include<stdio.h>
int main(void)
  { 
    int num1,num2,num3,max;
      printf("Enter First numbers :");
      scanf("%d",&num1) ;

      printf("Enter Second numbers :");
      scanf("%d",&num2) ;

      printf("Enter three numbers :");
      scanf("%d",&num3) ;

       if(num1 > num2)
             max = num1 ;
       else
            max = num2 ;
       if(num3 > max)
            max = num3 ;

    printf("The max is :%d \n",max );
    return 0;

}
