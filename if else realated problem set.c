#include <stdio.h>

int main() {
    int number;
    printf("\t\ta set of conditionary problems is here\n\n");
    printf("\t1.even-odd\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number%2==0){
        printf("Your number is even\n");

    }
    else{
        printf("Your number is odd\n");
    }
 float n;
    printf("\t2.positive,negative or zero\n");
    printf("Enter a number: ");
    scanf("%f", &n);

    if(n>0){
        printf("Your number is positive\n");

    }
    else if(n<0){
        printf("Your number is negative\n");
    }
    else{
        printf("Your number is relatively 0\n");
    }
     float marks;
    printf("\t3.grades according to marks of a student(pass mark:40)\n");
    printf("Enter a number: ");
    scanf("%f", &marks);
     if(marks>=90&&marks<95){
        printf("Your grade is:GOLDEN(but u also rejected by the chacha somaj cz you're over qualified)");
    }
    else if(marks>=80&&marks<90){
        printf("Your grade is:A+\n");
    }
    else if(marks>=75&&marks<80){
        printf("Your grade is:A\n");
    }
     else if(marks>=70&&marks<75){
        printf("Your grade is:A-\n");
    }
     else if(marks>=65&&marks<70){
        printf("Your grade is:B\n");
    }
     else if(marks>=60&&marks<65){
        printf("Your grade is:C\n");
    }
    else if(marks>=50&&marks<60){
        printf("Your grade is:D\n");
    }
    else if(marks<=40){
        printf("Your grade is:F\n");
    }
    else{
        printf("Talentpul Scholarship\n");
    }


printf("\t4.Request for a qualified bridegroom(obviously vergin and<=30yrs)\n");
   float age,salary,freetime,holidays;
    printf("Enter your age( exact in years):");
    scanf("%f", &age);
    printf("Enter your salary( exact in tk):");
    scanf("%f", &salary);
    printf("Enter your freetime( hourly in a day):");
    scanf("%f", &freetime);
    printf("Enter your holidays( exact in a maonth): ");
    scanf("%f", &holidays);



     if(age<=30&&salary>=45000&&freetime>=4&&holidays>=9){
        printf("CONGO!!!You're eligible bridegroom\n");
    }
    else if(age<21){
        printf("Tomar biyar boyosh e to hoy nai mia!\n");
    }
    else{
            printf("CONGO!!!You're eligible bachelor(Not selected as a groom\n)");
    }

   printf("\t5.Leap year or not\n");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("This year is a leap year\n");

    }
    else{
        printf("This is not a leap year\n");
    }
    printf("\t6.BSSE-18th batch team selection for Lab-group(Team A(roll 1-23)&Team B(roll 24-47))\n");
    int roll;
    printf("Enter your roll: ");
    scanf("%d", &roll);

    if(roll>=1801&&roll<=1823){
        printf("You're in team A\n");
        printf("Lab routine :Sunday(10:00-1:00 A.M)\n");

    }
    else if(roll>23&&roll<=47){
       printf("You're in team B\n");
        printf("Lab routine :Wednesday(2:00-4:00 P.M)\n");
    }
    else{
        printf("You're not BSSE-18th student\n");
    }
     int ma,napa,temp;
    printf("\t7.variable swapping and real life example of election engineering\n");
    printf("Mirza Abbas(total vote): ");
    scanf("%d", &ma);
    printf("Nasiruddin Patwari(total vote): ");
    scanf("%d", &napa);
    temp=napa;
    napa=ma;
    ma=temp;
    printf("Mirza abbas is now:%d\n",ma);
    printf("Nasiruddin Patwari is now:%d\n",napa);

    if(ma>napa){
        printf("Mirza Abbas is the MP of Dhaka-8\n");

    }
    else{
        printf("Nasiruddin Patwari is the MP of Dhaka-8 \n");
    }










    return 0;
}
