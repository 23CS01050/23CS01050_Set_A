#include<stdio.h>

int main(){
    int n, k, f = 1,l,m;
    printf("Enter n : ");
    scanf("%d", &n);
    l = n;
    int sum = 0;
    while(n>0){
        k = n%10;

        while(k>=0){
            if(k>0){
            f = f*k;
            }
            else{
                f = f*1;
            }
            k--;
        }
        sum = sum + f;
        f = 1;
        n = n/10;
    }
    if(sum == l){
        printf("Given number is a strong number \n");
    }
    else{
         printf("Given number is not a strong number \n");
    }
    
    return 0;
}