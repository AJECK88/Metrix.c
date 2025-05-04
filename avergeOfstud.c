#include<stdio.h>
#include<math.h>
int numOfStudents ;
float sum =0;
float studentaverge( float averge){
     printf("student averge = %.2f\n", sum/numOfStudents);
  return 0;
    }
 int main(int argc, char const *argv[])
 
 {
    float averge;
    printf("enter the numbers of student:");
    scanf("%d",&numOfStudents);
    for (int  i = 1; i <= numOfStudents; i++)
    {
       printf("enter the averge of student %d:" , i);
       scanf("%f",&averge);
          sum += averge;
    }  
    
    studentaverge(averge);
     return 0;
 }