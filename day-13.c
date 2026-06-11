#include <stdio.h>
int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include <stdio.h>
int main() {
    int arr[100], n, i;
    int sum=0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum / n;
    
    printf("sum is %d\n", sum);
    printf("average is %.2f", avg);
    
    return 0;
}


#include <stdio.h>
int main(){
    int i,n,arr[100];
    int largest, smallest;
    
    printf("enter the number of elements: ");
    scanf("%d",&n);
    
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    largest=smallest=arr[0];
    
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    
    printf("largest element is %d\n",largest);
    printf("smallest element is %d",smallest);
    return 0;
}


#include <stdio.h>
int main(){
    int i,n,arr[100];
    int even=0, odd=0;
    
    printf("enter the number of elements: ");
    scanf("%d",&n);
    
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("number of even elements: %d\n",even);
    printf("number of odd elements: %d",odd);
    return 0;
}