#include <stdio.h>

int main()
{
    struct student{
        int student_id;
        int age;
        int class;
        char * name;
    };
    struct student s;
    s.age=20;
    struct student * sp;
    sp=&s;
    printf("%d\n",s.age);
    //sp->class
    printf("%d\n",sp->age+2);
    return 0;
}