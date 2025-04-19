#include<stdio.h>
#include<math.h>
int main(){
   float arrayMarks[6];
   printf("enter the index values of the array:");
   for(int j = 0 ;j<=5;j++ ){
     scanf("%f",& arrayMarks[j]);
   }
   for (int  j = 0; j < 6; j++){
 
     for(int i = 0 ; i< (6-1) ; i++ ){
        if(arrayMarks[i] > arrayMarks[i+1])
        { 
   int possition  = arrayMarks[i];
    arrayMarks[i]=arrayMarks[i+1];
    arrayMarks[i+1]= possition;
    printf(" %f",  arrayMarks[i]);
    printf("\n");
}
   }
}
    return 0;
}