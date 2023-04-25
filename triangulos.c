/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float a, b, c;
   printf("Lado 1: ");
   scanf("%f", &a);
   printf("Lado 2: ");
   scanf("%f", &b);
   printf("Lado 3: ");
   scanf("%f", &c);
   
   if(a<0||b<0||c<0){
       printf("ERRO");
   }else{
       if(a==b && a==c && c==b){
           printf("Triagulo equilatero");
       }else if(a==b || a==c || c==b){
           printf("Triangulo isosceles");
           if(a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(b*b)+(a*a)){
               printf("Triangulo rectangulo");
           }
       }else if(a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(b*b)+(a*a)){
               printf("Triangulo rectangulo");
       }
       
   }
}
