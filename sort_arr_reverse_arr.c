#include<stdio.h>
#include<stdint.h>
#define LEN_ARRAY(arr) (sizeof(arr)/sizeof(arr[0]))

uint8_t arr[] = {1,7,8,3,7,1,2,6,7,8,2,9,9,3};

int tg;
char charArr[] = {"Make no mistake All your attempts to create a chilling effect a throttling effect a strangulating effect on open fearless speech relating to public influence will not stop either Rahul Gandhi or the Congress Party"};


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

///read each word from right to left of array. if element is a space character, print that word
void reverse_arr(const char arr[], int size){
    char wordArr[20];
    int lenWord = 0;
    for(int i = size - 2; i >= -1; i--){ //i >= -1 for print arr[0]
        if(arr[i] == ' ' || i == -1){
            for(int j = lenWord - 1; j >= 0; j--){
                printf("%c", wordArr[j]);
            }
            printf(" ");
            lenWord = 0;
        }
        else{
            lenWord++;
            wordArr[lenWord - 1] = arr[i];
        }
    }
}
int main(int argc, char const *argv[])
{
    sort_arr();
    the_number_of_occurrences();
    reverse_arr(charArr, LEN_ARRAY(charArr));
    return 0;
}