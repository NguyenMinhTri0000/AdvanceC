#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

char arr1[] = "Hello world";
char arr2[] = "Hello word";


int Equa(char mang1[], char mang2[])
{

    for(int i = 0; i<sizeof(arr1); i++)
    {
        // printf("Mang 1: %c\n", mang1[i]);
        // printf("Mang 2: %c\n", mang2[i]);            
        if(mang1[i] != mang2[i])
        {
            return 0;
        }
    }
}

int main(int argc, char const *argv[])
{

    int a = sizeof(arr1);
    int b = sizeof(arr2);   
    if (a!=b)
    {
        printf("Hai chuoi co kich thuoc khac nhau");
    }
    else  
    {
    if(Equa(arr1, arr2) == 0)       //khác nhau thì return về 0
                                    //nhưng giống nhau thì return = sizeof(arr). Tại sao?
    {
        printf("Hai chuoi co noi dung khac nhau");
    
    }
    else 
        printf("Hai chuoi giong nhau");
    // printf("Gia tri tra ve cua ham: %d\n", Equa(arr1, arr2));
    }
}