#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[6][6];
    int i,j;
    
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int min= -100 , sum=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum=0;
            // sum of first row ie three elements
            sum+= a[i][j];
            sum+= a[i][j+1];
            sum+= a[i][j+2];
            
            // sum of second row ie single element placed in middle
            
            sum+= a[i+1][j+1];
            
            // sum of third row i.e three elements
            
            sum+= a[i+2][j];
            sum+= a[i+2][j+1];
            sum+= a[i+2][j+2];
            
            // checking the greatest sum
            
            if(min<sum){
                min=sum;
            }

        }
    }
    printf("%d",min);
}
