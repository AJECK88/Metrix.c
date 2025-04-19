#include<stdio.h>
#include<math.h>

int maxFunction(float arrayMarks[6]){
    float max = arrayMarks[0];
    for (int i = 0; i < 6; i++){
        if (arrayMarks[i] > max){
            max = arrayMarks[i];
        }
    }
    printf("max = %.2f\n", max);
    return 0;
}
int minFunction(float arrayMarks[6]){
    float min = arrayMarks[0];
    for (int i = 0; i < 6; i++){
        if (arrayMarks[i] < min){
            min = arrayMarks[i];
        }
    }
    printf("min = %.2f\n", min);
    return 0 ;
}
int sumFunction(float arrayMarks[6]){
    float sum = 0;
    for (int i = 0; i < 6; i++){
        sum += arrayMarks[i];
    }
    printf("sum = %.2f\n", sum);
    return 0;
}
int meanFunction(float arrayMarks[6]){
    float sum = 0;
    for (int i = 0; i < 6; i++){
        sum += arrayMarks[i];
    }
    sum / 6;
    printf("mean = %.2f\n", sum);
    return 0;
}


int main(int argc, char const *argv[])
{
    float arrayMarks[6];
    printf("enter the averge of each person upto 6:");
    for (int i = 0; i < 6; i++){
        scanf("%f",& arrayMarks[i]);
    }
    maxFunction(arrayMarks);
    minFunction(arrayMarks);
    meanFunction(arrayMarks);

    
}