#include<stdio.h>
#include<math.h>
  void namaste();
  void bonjour();
  int main(){
      printf("Enter 'i' if indian and 'f' if french : ");
       char g;
       scanf("%c",&g);
      if(g=='i'){
        namste();
      }
      else{
        bonjour();
      }



  return 0;
  }
  void namste(){//main function er baire ei function gulo define korte hoy (basically aro interseting problem paile beparta bhalo kore bujhbe)
      printf("namste!\n");
  }
   void bonjour(){
      printf("bonjour\n");
  }



#include<stdio.h>
#include<math.h>
float multi(int a,int b,int c);
int main(){
    float a,b,c,result;
  printf("please enter 3 numbers to multiple :\n");
  scanf("%f%f%f",&a,&b,&c);
  result=multi(a,b,c);
  printf(" The multiplication of these 3 number is:%f",result);
  return 0;

}
float multi(int x,int y,int z){

 return x*y*z;
}



#include<stdio.h>
#include<math.h>
void printTable(int n);
 int main(){
     int n;
  printf("enter n (an integer) and enjoy a series or table:\t");
  scanf("%d",&n);

  printTable(n);//arguement/actual parameter


 }
 void printTable( int n){//parameter/formal parameter
   for(int i=1;i<=n;i++){
    printf("%d\n",i*n);//gunitok(n er gunitok hishebe ashbe)
   }


 }



#include<stdio.h>
#include<math.h>
 void  square(float n);
 int main(){
  printf("enter a number:");
  float n;
  scanf("%f",&n);

 square(n);


 }
 void square(float n){
   float ans= n*n;
  printf("The answer is=%.3f(square of your number)",ans);

 }



#include<stdio.h>
#include<math.h>
 void area_c(float pi,float r);
 void area_s(float l);
 float pi=3.141598;
 int main(){
     float r,l;
  printf("enter the radius of a circle:");
  scanf("%f",&r);
  area_c(pi,r);//arguement/actual parameter
  printf("enter the length of a square:");
  scanf("%f",&l);
  area_s(l);


 }
 void area_c(float pi,float r){//formal parameter
     float a=pi*r*r;
  printf("The area of circle is=%.3f\n\n",a);

 }
 void area_s(float l){
   float area=pow(l,2);
   printf("The area of square is=%.3f\n\n",area);

 }







  
  
  
  
  
  

