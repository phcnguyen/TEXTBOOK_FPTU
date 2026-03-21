#include <stdio.h>

struct Student
{
    char id[20];
    char fullName[50];
    float score1;
    float score2;
    float score3;
};

int main()
{
    int n;
    int i;
    float gpa;

    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i].id);
        getchar();
        fgets(s[i].fullName, 50, stdin);
        scanf("%f %f %f", &s[i].score1, &s[i].score2, &s[i].score3);
    }

    for (i = 0; i < n; i++)
    {
        gpa = (s[i].score1 + s[i].score2 + s[i].score3) / 3;

        printf("%s; %s; %.2f\n", s[i].id, s[i].fullName, gpa);

        if (gpa >= 5)
        {
            printf("=> Passed\n");
        }
        else
        {
            printf("=> Failed\n");
        }
    }

    return 0;
}

