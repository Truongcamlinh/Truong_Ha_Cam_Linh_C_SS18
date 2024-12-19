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
    printf("Nhap ten: ");
    fgets(student.fullName, sizeof(student.fullName), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &student.age);
    getchar();
    student.fullName[strcspn(student.fullName, "\n")] = '\0';
    printf("Nhap so dien thoai: ");
    scanf("%s", student.phoneNumber);
    printf("\nTen: %s\n", student.fullName);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s", student.phoneNumber);
}