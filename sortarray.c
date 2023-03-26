#include<stdio.h>
#include<stdint.h>
uint8_t arr[] = {1,7,8,3,7,1,2,6,7,8,2,9,9,3};

int tg;

void sort_arr()
  {
   printf("Sort array from largest to smallest: ");
    for(int i = 0 ; i < sizeof(arr); i++){
        for(int j = i + 1; j < sizeof(arr) ; j++){
            if(arr[i] > arr[j]){
                // permutation of two numbers a and b
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
       printf("%d", arr[i]);
    }
  }

void the_number_of_occurrences(){ 
    int count = 0;
    printf("\nThe number of occurrences: \n");
    for (int i = 0; i < sizeof(arr); i++)
    {
        if(arr[i] == arr[i+1]){         //Check the previous variable = the following variable???
            count++;                    //Increase the count variable
        }
        else{
            printf("Variable %d appears in the array %d times!\n", arr[i], count); 
            count = 1;                  
        } 
    }   
}
int main(int argc, char const *argv[])
{
    sort_arr();
    the_number_of_occurrences();
    return 0;
}