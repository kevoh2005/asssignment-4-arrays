#include <stdio.h>
 int main(){
   int a[100], i, n, sum =0;

 printf("input the number of elements to be stored in the array :");
 scanf("%d" , &n);

 printf("input %d elements in the array :\n", n);
 for (i=0; i < n; i++){
    printf("elements-%d : ", i);
    scanf("%d", &a[i]);
    scanf("%d", &a[i]);
 }

   for (i = 0; i < n; i++){
    sum += a[i];
   }


 printf("sum of all elelments stored in the arrayis %d\n", sum);

 return 0;


 }
