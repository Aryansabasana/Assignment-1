#include <stdio.h>

struct student {
    int id[3] : {1234,2345,5643};
    char name[3] : {"krishna", "sai", "pal"};
    int marks[3] : {95, 58, 45};

}

int main() {
       struct student details;
       printf("id = %d, name = %s, marks = %d", details.id[0], details.name[0], details.marks[0]);

       return 0;
}