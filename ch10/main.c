#include "../inc/func.h"
#include "../inc/struct.h"

void about_student(Student const student) {
    printf("我叫: %s\n", student.name);
    printf("我读的学校是: %s\n", student.school.school_name);
}
int main(int argc, char const *argv[]) {
    School school = {
        .school_name = "人大附中",
    };
    Student student = {
        .name = "雷婷婷",
        .school = school,
    };
    Student *st = &student;
    printf("%s\n", st->name);
    printf("%s\n", st->school.school_name);
    about_student(student);
    return 0;
}
