#include <stdio.h>
#include <string.h>
struct SV
{
    char fullName[100];
    int age;
    char phoneNumber[20];
};
typedef struct SV Student;
int main()
{
    Student student;
    strcpy(student.fullName, "Truong Ha Cam LinhLinh");
    student.age = 18;
    strcpy(student.phoneNumber, "03471583324");
    printf("Ten: %s\n", student.fullName);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s", student.phoneNumber);
}