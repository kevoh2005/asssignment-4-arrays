#include <stdio.h>

int main(){
   int arr[100];
    int n, i, j;
    int count;

   printf("input the number of elements to be stored in the array: ");
   scanf("%d" ,&n);

   printf("input %d elements in the array:\n" ,n);
   for (i = 0; i < n; i++){
    printf("element-%d: ", i);
    scanf("%d" ,&arr[i]);
   }


   printf("the unique elements found in the array are: ");
   for (i = 0; i < n; i++);{
    count = 0;

    for(j = 0; j < i; j++){
        if (arr[i] == arr[j]){
            count++;
            break;
        }
    }

     if (count == 0){
        printf("%d", arr[i]);
     }

   }

  printf("\n");


return 0;


}
