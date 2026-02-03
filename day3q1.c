#include <stdio.h>
int search(int arr[],int s,int ele){
    for (int i = 0; i < s; i++)
    {
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int arr[100];
    int n;
    printf("size of array");
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){
        printf(" element pls");
        //printf("%d",i);
        scanf("%d",&arr[i]);
        //printf("\n");
    }
    int el;
    printf("element to find");
    scanf("%d",&el);
    int result=search(arr,n,el);
    printf("%d",result);
}