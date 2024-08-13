#include <stdio.h>
#include <conio.h>

int cost;
void lcd(void)
{
    cost = 12000;
}
void printer(void)
{
    cost = 8000;
}
void main(void)
{
    printer();
    printf("printer cost:%d", cost);

    lcd();
    printf("Lcd cost  :%d", cost);

    return 0;
}
