#include <stdio.h>
#define _USE_MATH_DEFINES 
#include<math.h>
#include<locale.h>

void task1();
void task2();

int main(){
setlocale(LC_ALL, "RUS");
task2();
return 0;
}
void task1(){
char c;
printf("Введите символ\n");
scanf("%c", &c);//считывание с консоли
switch ((c>='0' && c <= '9') ? 1 : 0)
{
case 1:
    printf("Это цифра");
    break;
default:
    printf("Это буква");
    break;
}
}
void task2(){
    float x,y;
    char c;
    puts("Введите выражение");
    scanf("%f%c%f", &x, &c, &y);
    switch(c){
        case '+':
            printf("=%f", x+y);
            break;
        case '-':
            printf("=%f", x-y);
            break;
        case '*':
            printf("=%f", x*y);
            break;
        case '/':
            printf("=%f", x/y);
            break;    
        case '^':
            printf("=%f", pow(x,y));
            break;        
    }
}