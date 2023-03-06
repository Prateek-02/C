#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct Student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 766;
    ravi.marks = 466;
    shubham.marks = 866;
    harry.fav_char = 'p';
    ravi.fav_char = 'q';
    shubham.fav_char = 'r';
    strcpy(harry.name, "Harry Potter student of the year");
    printf("Harry's name is: %s\n", harry.name);
    printf("ID of Harry is %d\n", harry.id);
    printf("ID of Ravi is %d\n", ravi.id);
    printf("ID of Shubbham is %d\n", shubham.id);
    printf("Harry got %d marks\n", harry.marks);
    printf("Ravi got %d marks\n", ravi.marks);
    printf("Shubham got %d marks\n", shubham.marks);
    printf("Harry's fav_char is %c\n", harry.fav_char);
    printf("Ravi's fav_char is  %c\n", ravi.fav_char);
    printf("Shubham's fav_char is %c\n", shubham.fav_char);

    return 0;
}