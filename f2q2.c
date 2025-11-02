#include <stdio.h>

int main() {
    int m[12] = {99,12,12,34,56,99,100,25,38,99,100,77};
    int count = 0;
    for (int i = 0; i < 12; i++)
    {
        if(m[i] ==99){
            count++;
        }

    }
printf("Number of students got 99 : %d\n",count);

    return 0;
}