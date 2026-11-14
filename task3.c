#include <stdio.h>
#define _USE_MATH_DEFINES 
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "RUS");
    int m,y;
    puts("Введите возраст в месяцах");
    scanf("%d",&m);
    y = m / 12;
    m -= y * 12;
    switch((y == 1) ? 1 : (y > 1 && y <= 4) ? 2 : 0){
        case 0:
            switch((m == 1) ? 1 : (m > 1 && m <= 4) ? 2 : 0){
                case 0:
                    printf("%d лет, %d месяцев ",y,m);
                    break;
                case 1:
                    printf("%d лет, %d месяц ",y,m);
                    break;
                case 2:
                    printf("%d лет, %d месяца ",y,m);
                    break;
            }
            break;
        case 1:
            switch((m == 1) ? 1 : (m > 1 && m <= 4) ? 2 : 0){
                case 0:
                    printf("%d год, %d месяцев ",y,m);
                    break;
                case 1:
                    printf("%d год, %d месяц ",y,m);
                    break;
                case 2:
                    printf("%d год, %d месяца ",y,m);
                    break;
            }
            break;
        case 2:
            switch((m == 1) ? 1 : (m > 1 && m <= 4) ? 2 : 0){
                case 0:
                    printf("%d года, %d месяцев ",y,m);
                    break;
                case 1:
                    printf("%d года, %d месяц ",y,m);
                    break;
                case 2:
                    printf("%d года, %d месяца ",y,m);
                    break;
            }
            break;
    }
    return 0;
}