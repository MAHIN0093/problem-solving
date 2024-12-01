#include <stdio.h>
#include <stdlib.h>

int main() {

    int x; scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        
        int a; scanf("%d", &a);
        int list[a];
        for (int j = 0; j < a; j++)
        {
           int y; scanf("%d", &y);
           list[j] = y;
        }
        int count = a - 1;
        for (int k = 0; k < a-1; k++)
        {
            if (list[k]==list[k+1]) count--;
        }
        printf("%d\n", count);
        
    }
    
    return 0;
}