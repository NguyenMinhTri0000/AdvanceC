// sửa bên ct test, không hiểu sao sai. không có thời gian xem
#include <stdio.h>

#define MAX_SIZE 100 //sức chứ tối đa
void InputArray(int n, int arr[])
{
    //Nhập mảng
    for(int i = 0; i<n; i++)
    {
        printf("nhap vao arr[%d]\n",i);
        scanf("%d", &arr[i]);
    } 
}


void OutputArray(int n, int arr[])
{
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
    printf("%5d", arr[i]);
    }
}

int TangDan(int arr[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    int arr[100];
    //kiểm tra số lượng phần tử dùng: n là số lượng dùng, MAXSIZE là tối đa, có thể dùng khong hết
    do
    {
        printf("\nNhap n = ");
        scanf("%d",&n);
    }
    while (n <=0||n>MAX_SIZE);

    InputArray( n,  arr);

    TangDan( n,  arr);
    OutputArray( n,  arr);

    return 0;
}
