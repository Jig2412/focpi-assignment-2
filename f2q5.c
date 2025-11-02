#include <stdio.h>

int main() {
    int i,n,arr[100];

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i=0; i<n; i++) {
        
        if(i==0 && arr[i] >= arr[i + 1]) {
            printf("Peak element is %d", arr[i]);
            return 0;
        }

        
        else if(i==(n-1) && arr[i]>=arr[i - 1]) {
            printf("Peak element is %d", arr[i]);
            return 0;
        }

        
        else if(arr[i] >= arr[i - 1] && arr[i]>=arr[i + 1]) {
            printf("Peak element is %d ", arr[i]);
            
        }
    }

    

    return 0;
}
