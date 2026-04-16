#include <stdio.h>
#include <math.h>
#include <conio.h>



int main() {

    printf("\t\tThis is basically loop (3 types ) and loops related problems(more than 10 types)\n\n");
    printf("1.while loop basic syntex (with basic problem 0-50 print)\n");
    int i=0;

    while(i<=50){
       printf("%d+",i);
       i++;
    }



  printf("\n ok!done\n");//(eita lagse just 2nd problem ke vinno line e nebar jonne)

   printf("2.for loop basic syntex (with basic problem 2-100(except 2&50) print)\n");
    for(int i=2;i<=100;i+=2){
        if ((i==2)||(i==50)){
            continue;
        }
        printf("%d\n",i);
    }


printf("\n ok!! done\n");

printf("\t\t3.for loop basic syntex (with basic problem n^n(user perception input) print)\n");
 int n,a;
 printf("please enter a  number(n) and it will show a series of n^n till your number:");
 scanf("%d",&n);
 printf("The series is given below:\n");

   for(i=1;i<=n;i++){
    a=pow(i,i);
    printf(" %d+",a);
   }
    printf("\n ok!! done with this problem too\n");
    printf("4. do while loop basic syntex (with basic problem 0-50 print)\n");
    i=0;
    do{
        printf("%d+",i);
        i++;
    }while(i<=50);
    printf("\n done\n");

 printf("Thank u very much for enjoying these very basic problems with me.....SEE YOU SOON.Good Bye!");


   return 0;
}
