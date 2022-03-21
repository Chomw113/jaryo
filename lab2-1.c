#include <stdio.h>
int main()
{
char charType;                             //문자형을 저장하는 변수
int integerType;                           //정수형을 저장하는 변수
float floatType;                           //실수형을 저장하는 변수
double doubleType;                         //실수형을 저장하는 변수
                                                          //9 ~ 12행 -> 선언된 변수들의 크기를 출력한다. 
printf("Size of char: %ld byte\n",sizeof(charType));      //char형은 1바이트의 크기를 지니기 때문에 1byte가 출력 될것
printf("Size of int: %ld bytes\n",sizeof(integerType));   //int형은 4바이트의 크기를 지니기 때문에 4bytes가 출력 될것
printf("Size of float: %ld bytes\n",sizeof(floatType));   //float형은 4바이트의 크기를 지니기 때문에 4bytes가 출력 될것
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형은 8바이트의 크기를 지니기 때문에 8bytes가 출력 될것
printf("-----------------------------------------\n");
                                                          //15 ~ 18행 -> 선언된 변수들의 자료형의 크기를 출력한다. 
printf("Size of char: %ld byte\n",sizeof(char));          //char형은 1바이트의 크기를 지니기 때문에 1byte가 출력 될것
printf("Size of int: %ld bytes\n",sizeof(int));           //int형은 4바이트의 크기를 지니기 때문에 4bytes가 출력 될것
printf("Size of float: %ld bytes\n",sizeof(float));       //float형은 4바이트의 크기를 지니기 때문에 4bytes가 출력 될것
printf("Size of double: %ld bytes\n",sizeof(double));     //double형은 8바이트의 크기를 지니기 때문에 8bytes가 출력 될것
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
printf("-----------------------------------------\n");
printf("[ ----- [CHO MIN WOO]  [2019038019] ----- ]");
return 0;
}