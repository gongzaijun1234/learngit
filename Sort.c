#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(int *a, int *b);
void swap1(int *a, int *b);
void BubbleSort(int* arr, int length);
void printf_var(int *arr, int length);
void SelectSort(int *arr, int length);
void InsertSort(int *arr, int length);

int val;

int main(void)
{
   int arr[6] = {1,4,2,3,5,0};
   // BubbleSort(arr, 5);
   // SelectSort(arr, 6);
   InsertSort(arr, 6);
   printf_var(arr, 6);  
   printf("%d\n", val);
   return 0;
}

//冒泡排序  复杂度O(n^2)
void BubbleSort(int* arr, int length)
{
   if(NULL == arr){
     printf("传入为空");
     exit(1);
   }

   int i,j;
   for(i=0;i<length-1;i++){
       for(j=0;j<length-1-i;j++){
         if(arr[j] > arr[j+1]){
          //swap(&arr[j],&arr[j+1]);
	   swap1(&arr[j],&arr[j+1]);
	  }
	  val++;
       }
   }
}
//选择排序  复杂度0(n^2)
void SelectSort(int *arr,int length)
{
   if(NULL == arr){
     printf("传入为空");
     exit(1);
    }
   int i,j;
   for(i = 0; i < length;i++){
      for(j = i; j < length - 1; j++){
         if(arr[i] < arr[j+1])
	 {
	    swap(&arr[i],&arr[j+1]);
         }
	 val++;
      }
   }
}
//插入排序  
void InsertSort(int *arr, int length)
{
   int i,j;
   int temp;//存储无序数组的第一个
   if(NULL == arr || length <= 0){
      printf("传入参数不合法");
      exit(1);
   }
   for(i=1;i<length;i++){
      j = i - 1;//有序数组的最后位置
      temp = arr[i];
      while(temp < arr[j] && j >= 0)
      {
        arr[j+1] = arr[j];
	j--;
      }
      arr[j+1] = temp;
   }
}
void swap(int *a, int *b)
{
   *a = *a + *b;
   *b = *a - *b;
   *a = *a - *b;
}
void swap1(int *a, int *b)
{
   *a ^= *b;
   *b ^= *a;
   *a ^= *b;
}

void printf_var(int *arr, int length)
{
   int i = 0;
   for(i = 0; i < length; i++)
   {
     printf("%d ", *(arr+i));
   }
   printf("\n");
}


