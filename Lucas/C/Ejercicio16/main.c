#include <stdlib.h>
#include <stdlib.h>
#include "point.h"

int main(void)
{
    Point** arrayPoints [5];

    for(int i = 0; i<5 ; i++){
        arrayPoints[i] = (Point**) malloc(sizeof(Point*) * 4);
        for(int p = 0; p<4 ; p++){
            arrayPoints[i][p] = (Point*)malloc(sizeof(Point)*3);
        }
    }

    arrayPoints[2][3][1].x = 3;
    arrayPoints[2][3][1].y = 4;

    printPoint(arrayPoints[2][3][1]);

    for(int i = 4; i >= 0 ; i--){
        for(int p = 3; p >= 0; p--){
            free(arrayPoints[i][p]);
        }
    }

    return 0;
}