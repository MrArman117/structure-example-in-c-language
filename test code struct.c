#include<stdio.h>
main()
{
  struct student
     {
        int long long id;
        char Name[50];
        float CGPA;
     };

     struct student s1;
      s1.id = 2161081117;
      strcpy(s1.Name,"AmrAmi");
      s1.CGPA = 3.72;
      printf(" Id: %lld \n Name: %s \n CGPA: %.2f(spring)",s1.id,s1.Name,s1.CGPA);

}

/* struct student s1;
     printf("Enter your Id, Name, & GPA individually :\n");
      scanf("%lld",&s1.id);
      scanf("%s",s1.Name); ///gets(s1.Name);
      scanf("%f",&s1.GPA);
      printf(" Id  : %lld \n Name : %s \n GPA  : %.2f",s1.id,s1.Name,s1.GPA);
 */
