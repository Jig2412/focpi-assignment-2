#include <stdio.h>

int main() {
    int n,i,score[100],max,min;

    
    printf("Enter number of score: ");
    scanf("%d", &n);

    
    printf("Enter %d score:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }


    max = min=score[0];

    for(i=1;i<n; i++) {
        if(score[i] > max) {     
            max = score[i];
        }
        if(score[i]<n) {      
            min = score[i];
        }
    }

    
    printf("Maximum score = %d", max);
    printf("\nMinimum score = %d\n", min);

    return 0;
}
