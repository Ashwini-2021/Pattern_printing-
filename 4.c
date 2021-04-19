#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if((j==4)&&(i==1))
            {  printf(" * "); }
           else if((j>=3)&&(i==2))
            {  printf(" * "); }
           else if((j>=2)&&(i==3))
            {  printf(" * "); }
           else if((j>=1)&&(i==4))
            {  printf(" * "); }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT
          * 
       *  * 
    *  *  * 
 *  *  *  *               */