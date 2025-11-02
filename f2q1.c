#include<stdio.h>

int main(){
    int n,i,marks[100];
    printf("Enter the number of scores : ");
    scanf("%d",&n);

    printf("Enter the marks : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("First occurrence of score 99 is at position %d (index %d)\n", i + 1, i);
        
            break;
    }
}

        printf("Score 99 not found in the array.\n");
    

    

    return 0;
}