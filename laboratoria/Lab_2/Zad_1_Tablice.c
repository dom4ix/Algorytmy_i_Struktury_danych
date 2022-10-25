    // Dominik Jakubovskis. Student
    // Tablica
    // 2022-10-25
    
    #define n 100
    int find(int *arr)
    {   
        int i,key=6;
        
        //printf("Enter the key : ");
        //scanf("%d", &key);
        
        for(i=0; i<n; i++)
        {
            if(arr[i]==key)
            {
                return 1;	
                
                return find(arr);
            }
        }
        return 0;   
            
    } 
    

    void insert(int item, int pos, int *arr)
    {
    item=112233;
    pos=66;
    arr[pos]=item;
    }
/*
    void remove(int pos, int *arr);
    
    int size(int *arr);

    int findMax(int *arr);

    int findMin(int *arr);

    void printTable(int *arr);*/

    #include <stdio.h>

    void main(void) {
         float arr[100];
        // realizacja
        
        //find(arr);
            if(find(arr))
     printf("element found ");
     else
     printf("element not found ");
        insert(item,pos,arr);
       for(int loop = 0; loop < 110; loop++)
      printf("%.2f \n", arr[loop]);
      
      return;
    }
    //int find(int *arr);

    // Funkcii




#include <stdio.h>
 
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int x = 8;
     
    int arrLen = sizeof arr / sizeof arr[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (arr[i] == x) {
            isElementPresent = 1;
            break;
        }
    }
     
    if (isElementPresent) {
        printf("%d is present in this array.\n", x);
    } else {
        printf("%d is not present in this array.\n", x);
    }
     
    return 0;
}
