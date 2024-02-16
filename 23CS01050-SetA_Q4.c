#include<stdio.h>

int main(){
    int n, count=0, p =0;
    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
          if(i+j == n){    
           for(int k = 1; k<=i; k++){
            if(i%k == 0){
              count++;
            }
           }
            for(int z = 1; z<=j; z++){
            if(j%z == 0){
              p++;
            }
           }
           if(count == 2 && p == 2){
              printf("%d %d \n", i, j);
            }
      }
    }
    }
    return 0;
}