#include <stdio.h>

int main() {
    int arr[100];
    int even[100], odd[100];
    int n, i;
    int even_c = 0, odd_c = 0;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) { 
            even[even_c] = arr[i];
            even_c++;
        } else {
            odd[odd_c] = arr[i];
            odd_c++;
        }
    }

    
    printf("\nEven elements: ");
    for(i=0; i < even_c; i++) {
        printf("%d ", even[i]);
    }

    
    printf("\nOdd elements: ");
    for(i=0; i < odd_c; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
