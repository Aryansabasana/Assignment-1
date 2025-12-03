#include <stdio.h>

struct student {
    int id;
    char name[20];   
    int marks;
};

int main() {
    struct student details[3] = {
        {1234, "krishna", 95},
        {2345, "sai", 58},
        {5643, "pal", 45}
    };

    
    printf("id = %d, name = %s, marks = %d\n",
           details[0].id, details[0].name, details[0].marks);

    return 0;
}