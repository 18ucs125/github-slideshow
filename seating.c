#include<stdio.h>
int main()
{
  int s=0,a,b,c,t,i;//s=seat number
  
   //printf("enter the number of times you want to check the seats:\n");
   //erase the printf for hackerearth
    scanf("%d",&t);
    for(i=1;i<=t;i++) 
    {    
    scanf("%d",&s);
         for(a=0;a<=9;a++)
        {  
          if(s==1+a*12)
           {printf("%d ",s+11);
            printf("WS\n");}
                 
                if(s==12+a*12)
                 { printf("%d ",s-11);
                   printf("WS\n");  }
               if(s==2+a*12)
                 {printf("%d ",s+9);
                  printf("MS\n");} 
               if(s==11+a*12)
                 {printf("%d ",s-9);
                  printf("MS\n");}
                if(s==3+a*12)
                 {printf("%d ",s+7);
                  printf("AS\n");}
                if(s==10+a*12)
                { printf("%d ",s-7);
                  printf("AS\n");}
                if(s==4+a*12)
                 { printf("%d ",s+5);
                   printf("AS\n");}
                if(s==9+a*12)
                 { printf("%d ",s-5);
                   printf("AS\n");}
                if(s==5+a*12)
                  {printf("%d ",s+3);
                   printf("MS\n");}
                if(s==8+a*12)
                   {printf("%d ",s-3);
                       printf("MS\n");}               
                  if(s==6+a*12)
                   {printf("%d ",s+1);
                      printf("WS\n");}
                  if(s==7+a*12)
                    {printf("%d ",s-1);
                     printf("WS\n");}                 
             }
        
        }
return 0;
  }


