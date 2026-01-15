#include <stdio.h>
int main(){
 int i,n,a[100];

 printf("input the number of elements to store in the array :");
 scanf("%d" ,&n);

 printf("input %d number of elements in the array :\n" ,n);
 for (i =0; i < n; i++){
    printf("element-%d :", i);
    scanf("%d", &a[i]);
 }

 printf("\nThe values store in the array are: ");
 for (i =0; i < n; i++){
    printf("%d", a[i]);
 }

 printf("\nThe values store in the array are: ");
 for (i =n-1; i >= n; i--){
    printf("%d", a[i]);
 }


 printf("\n");
 return 0;
}


