#include <stdio.h>
int insert(int arr[],int size, int ind, int el){
    for(int i=size-1;i>=ind;i--){
        arr[i+1]=arr[i];
    }
    arr[ind]=el;
    
    return 0;
}
int main(){
    int arr[100]={1,2,3,4};
    int size=4;
    int ind=2;
    int el=99;
    printf("before inserting element");
    for(int i=0;i<=size-1;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    insert(arr,size,ind,el);
    printf("after inserting element");
    for(int i=0;i<=size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}