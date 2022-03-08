#include <stdio.h>  
   
int main()  
{  
    int rows, cols;  
          
 
    int a[][2] = {  
                    {1,1},  
                    {2,2}  
                      
                };  
      
     
    int b[][2] = {  
                      {3,3},  
                      {4,4} 
                 };  
      
     
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    
    int sum[rows][cols];  
    int product[rows][cols];
      
     
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
            sum[i][j] = a[i][j] + b[i][j];
            product[i][j]=a[i][j]*b[i][j];

        }  
    }  
      
    printf("Addition of two matrices: \n");  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
           printf("%d ", sum[i][j]);  
        }  
        printf("\n");  
    }  
    printf("Product of two matrices: \n");  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
           printf("%d ", product[i][j]);  
        }  
        printf("\n");  
    }  
   
    return 0;  
}