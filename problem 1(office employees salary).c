#include<stdio.h>
 int main(){
      printf("\t\tThis is Sohag & Apar Co Ltd..Welcome to the community\n\n");
      int h1,h2,h3,h4;
      printf("please enter rakibul's monthly total hour:\t\n");
      scanf("%d",&h1);
      printf("please enter apar's monthly total hour:\t\n");
      scanf("%d",&h2);
      printf("please enter dipro's monthly total hour:\t\n");
      scanf("%d",&h3);
      printf("please enter asir's monthly total hour:\t\n");
      scanf("%d",&h4);
      printf("+------------+---------+--------+-------+\n");
      printf("|  ID        | salary  |Monthly |Monthly|\n");
      printf("|with        |  per    | total  | income|\n");
      printf("| job post   |  hour   | hour   |       |\n");
      printf("+------------+---------+--------+-------+\n");
      int a,b,c,d;
      a=900;
      b=850;
      c=800;
      d=750;
      int s1=a*h1;
      int s2=b*h2;
      int s3=c*h3;
      int s4=d*h4;
      printf("|CEO Rakibul |%dtk     |   %d   |  %d|\n",a,h1,s1);
      printf("|Apar vai    |%dtk     |   %d   |  %d|\n",b,h2,s2);
      printf("|Dipro vai   |%dtk     |   %d   |  %d|\n",c,h3,s3);
      printf("|Asir vai    |%dtk     |   %d   |  %d|\n",d,h4,s4);


       return 0;
 }
