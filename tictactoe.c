#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int freespace(int  ,int);
char arr[10][10]={'\0'};
int row,col;
char chr;
int x=0;
time_t t1;
void main()
{  
  arr[3][3]='\0';
  while(1)
  { if(x++%2==0)
    { 
      f1: printf("Enter the rows and colum\n");
      scanf("%d %d",&row,&col);
      if(freespace(row,col))
      {
         arr[row][col]='X';
         for(int i=1;i<=3;i++)
          {
           for(int j=1;j<=3;j++)
            {
              
             printf("%c  ",arr[i][j]);
            if(j==3)
            continue;
            printf("|| ");
            }
           printf("\n");
          printf("-------------\n");
          }
          printf("\n");
      }
      else
       {
         printf("location taken...\n");
         goto f1;
       }
     if((arr[1][1]=='X'&&arr[2][2]=='X'&&arr[3][3]=='X') || (arr[1][3]=='X'&&arr[2][2]=='X'&&arr[3][1]=='X') ||
      (arr[1][2]=='X'&&arr[2][2]=='X'&&arr[3][2]=='X') || (arr[2][1]=='X'&&arr[2][2]=='X'&&arr[2][3]=='X')  ||
      (arr[1][1]=='X'&&arr[1][2]=='X'&&arr[1][3]=='X') || (arr[1][3]=='X'&&arr[2][3]=='X'&&arr[3][3]=='X')  ||
      (arr[3][1]=='X'&&arr[3][2]=='X'&&arr[3][3]=='X') ||  (arr[1][1]=='X'&&arr[2][1]=='X'&&arr[3][1]=='X')) 
     {
       printf("you fkn won");
       exit(0);
     }
    }
    else
    { 
      srand(time(NULL));
      f2:row=rand()%3+1;
      col=rand()%3+1;
      if(freespace(row,col))
      {
         arr[row][col]='O';
         for(int i=1;i<=3;i++)
          {
           for(int j=1;j<=3;j++)
            {
              
             printf("%c  ",arr[i][j]);
            if(j==3)
            continue;
            printf("|| ");
            }
           printf("\n");
          printf("-------------\n");
          }
          printf("\n");
      }
      else
       {
         printf("location taken...\n");
         goto f2;
       }
     if((arr[1][1]=='O'&&arr[2][2]=='O'&&arr[3][3]=='O') || (arr[1][3]=='O'&&arr[2][2]=='O'&&arr[3][1]=='O') ||
      (arr[1][2]=='O'&&arr[2][2]=='O'&&arr[3][2]=='O') || (arr[2][1]=='O'&&arr[2][2]=='O'&&arr[2][3]=='O')  ||
      (arr[1][1]=='O'&&arr[1][2]=='O'&&arr[1][3]=='O') || (arr[1][3]=='O'&&arr[2][3]=='O'&&arr[3][3]=='O')  ||
      (arr[3][1]=='O'&&arr[3][2]=='O'&&arr[3][3]=='O') ||  (arr[1][1]=='O'&&arr[2][1]=='O'&&arr[3][1]=='O')) 
     {
       printf("you loose b*tch");
       exit(0);
     }
      
    }
 }
}


int freespace(int row,int col)
{
   if(arr[row][col]=='\0')
   return 1;
   else
   return 0;
}

