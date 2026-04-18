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


#include<stdio.h>
#include<math.h>// 1&2 is direct(print) 3 is from return (concept is making a function that returns x*y as result...then using it in main function)
float pi=3.1416;
void area_c(int r,float pi);
void area_s(int a);
int area_r(int x,int y);
 int main(){
 int r=5;
 int a=6;
 int x=6;
 int y=7;
 area_c(r,pi);
 area_s(a);
 int ar_r=area_r( x, y);
 printf("the area of rectangle=%d",ar_r);

 }
 void area_c(int r,float pi){
  float area$c=pi*r*r;
  printf("area of circle=%.3f\n",area$c);


 }
  void area_s(int a){
  float area$s=a*a;
  printf("area of square=%.3f\n",area$s);


 }
 int area_r(int x,int y){
  return x*y;

 }





  
  
  
  
  
  

