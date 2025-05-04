#include<stdio.h>
#include<math.h>
/* || the deterninant function */
int dt;
int  diterminantFunction(int metrix[3][3]){
    printf("Deterninant:  ");
    // when j moving form  0 to NofN
     int j0 =(metrix[0][0]*((metrix[1][1]*metrix[2][2])-( metrix[1][2]*metrix[2][1])));
     int j1 =(metrix[0][1]*((metrix[1][0]*metrix[2][2])-( metrix[1][2]*metrix[2][0])));
     int j2 =(metrix[0][2]*((metrix[1][0]*metrix[2][1])-( metrix[1][1]*metrix[2][0])));
    // output of determinant
    printf("  %d  \n\n", dt = ((j0)+ (-j1)+(j2)));
  return dt;
}
/* || invers of a metrix function */
int invers_metrixFunction(int metrix[3][3]) {
 
  // || the determinant of a metrix
  if( dt== 0){
    printf("\n................................\n");
      printf("invers:\n Does not exist becouse dt = 0"  );
  }
  else
  {
    printf("\n................................\n");
    printf("invers:  \n");
    for(  int i  = 0; i< 3; i++){
   for  (int j = 0; j < 3; j++){  
     
    int count =metrix[i][j];
    for (int h =2; h <= count; h++){
      if(dt%h == 0){
          if(metrix[i][j]% h ==0){
          int dtx = dt/h;
          dt = dtx;
          int metricex =metrix[j][i]/h;
           metrix[j][i]= metricex;
          
        }
       
       
        
      }
     
    }
   

printf(" %4d/%4d", metrix[j][i],dt); 
  
 
  }  
  printf("\n");
  printf(" "); 
}  
  
}

}
/* || the Co_factor function */
int Co_factorFunction(int metrix[3][3]){
    printf("Co_factor:  ");
    // || when i is 0
    int i0_j0 =(((metrix[1][1]*metrix[2][2])-( metrix[1][2]*metrix[2][1])));
    int  i0_j1 =(((metrix[1][0]*metrix[2][2])-( metrix[1][2]*metrix[2][0])));
    int   i0_j2 =(((metrix[1][0]*metrix[2][1])-( metrix[1][1]*metrix[2][0])));
  
    // || when i is 1
    int i1_j0 =(((metrix[0][1]*metrix[2][2])-( metrix[0][2]*metrix[2][1])));
    int  i1_j1 =(((metrix[0][0]*metrix[2][2])-( metrix[0][2]*metrix[2][0])));
    int   i1_j2 =(((metrix[0][0]*metrix[2][1])-( metrix[0][1]*metrix[2][0])));
    // || when i is 2
    int i2_j0 =(((metrix[0][1]*metrix[1][2])-( metrix[0][2]*metrix[1][1])));
    int  i2_j1 =(((metrix[0][0]*metrix[1][2])-( metrix[0][2]*metrix[1][0])));
    int   i2_j2 =(((metrix[0][0]*metrix[1][1])-( metrix[0][1]*metrix[1][0])));
    
    // innitialiding the index of i
    int i0[]= {+i0_j0, -i0_j1, i0_j2};
    int i1[]= {-i1_j0, i1_j1, -i1_j2};
    int i2[]= {i2_j0, -i2_j1, i2_j2};
    // innitialising in a metrix index form  using the formular of a metrix  +-+ ,-+-,+-+;
     int metrixs[3][3]= {
       {i0[0], i0[1], i0[2]},
       {i1[0], i1[1], i1[2]},
       {i2[0], i2[1], i2[2]}
    };
   
    for(  int i  = 0; i< 3; i++)
    {
     for  (int j = 0; j < 3; j++)
     {  
     
      printf("  %4d  ", metrixs[j][i]);
     }
     printf("\n");
     printf("            ");
   
    }
       invers_metrixFunction(metrixs);
   
}

/* || the transpose of a metix function */
void TransposeFunction(int metrix[3][3]){
    printf("Transpose:  ");
   for(  int j  = 0; j< 3; j++)
   {
    for  (int i = 0; i < 3; i++)
    {  
       
      printf("  %4d  ", metrix[i][j]);
    }
    printf("\n");
    printf("            ");
   }
 }
 void main(){
    int metrix[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
  diterminantFunction(metrix);
  printf(".................................\n");
  TransposeFunction(metrix);
  printf("\n................................\n");
  Co_factorFunction(metrix);


 }