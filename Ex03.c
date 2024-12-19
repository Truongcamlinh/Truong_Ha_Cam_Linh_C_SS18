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
    Student student[5];
    for (int i = 0; i < 5; ++i)
    {
        printf("Nhap ten sinh vien: ");
        getchar();
        fgets(student[i].fullName, sizeof(student[i].fullName), stdin);
        student[i].fullName[strcspn(student[i].fullName, "\n")] = '\0';
        printf("Nhap tuoi: ");
        scanf("%d", &student[i].age);
        printf("So dien thoai: ");
        scanf("%s", student[i].phoneNumber);
    }

    
    printf("-----------------------\n");
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", student[i].fullName);
        printf("Tuoi: %d\n", student[i].age);
        printf("So dien thoai: %s\n", student[i].phoneNumber);
        printf("-----------------------\n");
    }
}