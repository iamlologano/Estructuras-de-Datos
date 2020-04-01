#include "Hanoi.h"

void Movements(int n, char origin, char destiny, char aux) {

        if (n == 1)

        {

            printf("\n Move ring 1 from %c to %c", origin, destiny);

            return;

        }

        Movements(n - 1, origin, aux, destiny);

        printf("\n Move ring %d from %c to %c\n", n, origin, destiny);

        Movements(n - 1, aux, destiny, origin);

    }

