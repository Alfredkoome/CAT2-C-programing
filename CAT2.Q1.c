/*
NAME:Alfred Koome
 ADM:CT101/G/26551/25
 DESCRIPTION:CAT2.Q1
 */
#include <stdio.h>
int main () {
    int score[2][2]={
        {65, 92},
        {84, 72}
    };
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("%d", score[i][j]);
        }
        printf("\n");
    }
    return 0;
}