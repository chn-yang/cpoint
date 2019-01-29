#include "../inc/func.h"
#include "../inc/struct.h"

// C语言函数传值引用需要复制参数, 把结构作为函数参数时,
// 使用指针比结构本身的拷贝效率能提高很多
void about_student(Student *student) {
    printf("我叫: %s\n", student->name);
    printf("我读的学校是: %s\n", student->school.school_name);
}

int main(int argc, char const *argv[]) {
    School school = {
        .school_name = "人大附中",
    };
    Student student = {
        .name = "雷婷婷",
        .school = school,
    };
    printf("%s\n", student.name);
    printf("%s\n", student.school.school_name);

    Student *st = &student;
    about_student(&student);
    return 0;
}
