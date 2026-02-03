#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
    if (arr[j] > arr[j + 1]) {
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}
}
}
}

int mis(int arr[],int s){
    int lb=arr[0];
    int ub=arr[s-1];
    int rsum= ub*(ub+1)/2;
    int asum=0;
    if (s==1){
        return 2;
    }
    for(int i=0;i<s;i++){
        asum=asum+arr[i];
    }
    return rsum-asum;

}
int main(){
    int arr[100];
    int n;
    printf("size of array");
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){
        printf(" element pls");
        scanf("%d",&arr[i]);
    
    }
    bubbleSort(arr,n);
    int res=mis(arr,n);
    printf("%d",res);
}