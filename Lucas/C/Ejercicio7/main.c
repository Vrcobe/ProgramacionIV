#include <stdio.h>
#include "point.h"

int main(void)
{
    Point p = {4, 5};

    escalar(&p, 2);
    
    return 0;
}