//program to find duplicates in a given array

#include <stdio.h>

int main() {
    // Write C code here
int arr[11] = {2,3,3,5,3,1,1,8,9,2,9};
int n= 10;
   int arr1[10]= {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]== arr[j] && i!=j){
                arr1[arr[i]]+=1;
            }
        }
    }
        
    for(int i=0;i<n;i++){
        if(arr1[i]>1){
            printf("%d\t",i);
        }
    }
    
    return 0;
}
