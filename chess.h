#include <stdbool.h>
#include <ctype.h>

#define CLS printf("\e[1;1H\e[2J");
#define BLEN 8
#define MAXMOVES 512

struct Move {
    int yo;
    int xo;
    int yf;
    int xf;
    char piece;
};

struct Move* genallmoves(struct Move *moves, int (*board)[BLEN], bool white, bool checkcheck);
void makemove(struct Move *move, int (*board)[BLEN]);

