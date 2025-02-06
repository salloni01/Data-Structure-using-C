#include<stdio.h>
#include<stdlib.h>
void printarray(int *arr, int n){
     printf("\nThe elements of the array are :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
}
int main()
{
    system("cls");
    int n;
    printf("Enter n");
   scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);  
   }
    printarray(arr,n);
      return 0;
    
} 