#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
    struct student harry,ravi,shubham;
    harry.id=34;
    ravi.id=2;
    shubham.id=20;
    harry.marks=100;
    ravi.marks=66;
    shubham.marks=99;
     harry.fav_char="p";
    ravi.fav_char="p";
    shubham.fav_char="p";
    printf("Harry got %d marks\n",harry.marks);

   
    return 0;
}
