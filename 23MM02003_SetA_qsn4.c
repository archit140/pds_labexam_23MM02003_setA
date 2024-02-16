#include<stdio.h>
int main()
{
    int number,i,j,k;
    printf("Enter the number");
    scanf("%d",&number);
    
    for(int i=2;i<=(number/2);i++){
        int a=0,b=0;
        int c1=i;
        int c2=number-i;
        
        for(j=2;j<c1;j++){
            if(c1%j==0){
                a=1;
                break;
                
            }
            
        }
        for(k=2;k<c2;k++){
            if(c2%k==0){
                b=1;
                break;
            }}            
            if(a==0 && b==0){
            
            printf("%d \t%d",c1,c2);
            printf("\n");
        
        }  
             


    }
    
    
    return 0;
}
