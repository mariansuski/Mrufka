#ifndef _ANTT_H
#define _ANTT_H

#define ACTIVEA 1
#define NONACTIVEA 0
#define righth 2 //prawy kierunek
#define lefth 3 //lewy kierunek
#define N 4
#define E 5
#define S 6
#define W 7

typedef struct ant{
    int x, y, antActivity, handling, direction;
}*ants_t;

ants_t makeAnts( int );

int checkActivity( ants_t, int, int );

void changePosition( ants_t, int );

void antsAlgorithm( int**, int, ants_t, int, int );

#endif //ANTT_H_
