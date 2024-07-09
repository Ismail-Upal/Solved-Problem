#include<stdio.h>
struct student_info{
    char name[20];
    char id[20];
    float cgpa;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student_info student[n];
    for(int i=1;i<=n;i++){
        //printf("Enter %d no. student's name: ", i);
        scanf("%s", &student[i].name);
        //printf("Enter %d no. student's ID: ", i);
        scanf("%s", &student[i].id);
        //printf("Enter %d no. student's CGPA: ", i);
        scanf("%f", &student[i].cgpa);
    }
    printf("No. Name\tID\tCGPA\n\n");
    for(int i=1;i<=n;i++){
        printf(" %d  %s\t%s\t%.2f\n", i, student[i].name, student[i].id, student[i].cgpa);
    }
    return 0;
}