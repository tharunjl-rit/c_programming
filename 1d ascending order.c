#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void bubbleSort(int arr[], int size)
{    
    for (int i = 0; i < size - 1; i++) {    
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {            
                int temp = arr[j];          
                arr[j] = arr[j + 1];          
                arr[j + 1] = temp;          
            }      
        }  
    }
}
int main()
{    
    int size;
 scanf("%d", &size);    
    int arr[size];  
    for (int i = 0; i < size; i++) 
    {    
        scanf("%d", &arr[i]);  
    }  
    bubbleSort(arr, size);  
    printf("The Sorted array is:\n");
    for (int i = 0; i < size; i++) 
    {    
        printf("%d\n", arr[i]);    
    }    
    return 0; 
}
