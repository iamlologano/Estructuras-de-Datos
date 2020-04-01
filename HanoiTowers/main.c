#include "Hanoi.h"

int main()

    {

        int n;
     

        printf("Enter the number of rings: ");

        scanf("%d", &n);

        printf("Rings movements between towers is the following:\n");

        Movements(n, 'A', 'C', 'B');

        return 0;

    }
