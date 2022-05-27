#include "Level.h"
#include <stdbool.h>

int positionx = 0;
int positiony = 0;
int startPos[4][2] = {
};
levelt level1 = {
        {'x','1','1','1'},
        4,
        1,
};

levelt level2 = {
        {{{0,0},{0,0},{1,0}},
         {{1,0},{1,0},{1,0}},
         {{-1,0},{0,0},{0,0}}},
         3,
         3,
};

levelt level10 = {
        {{{2,0},{1,0},{1,0}},
         {{2,0},{-1,0},{1,0}},
         {{1,0},{1,0},{1,0}}},
         3,
         3,
};

char Level3[3][3] = {{'1','1','1'},
                     {'1',' ','1'},
                     {'1',' ','x'}};

char level4[5][5] = {{'1','1','1','1','1'},
                     {'1',' ',' ',' ',' '},
                     {'1',' ','x','1','1'},
                     {'1',' ',' ',' ','1'},
                     {'1','1','1','1','1'}};

char Level5[4][3] = {{'1','1','1'},
                     {'1','x','1'},
                     {'1',' ',' '},
                     {'1','1','1'}};

char level6[5][5] = {{'1','1','1','1',' '},
                     {'1',' ',' ','1','1'},
                     {'1',' ','x','1',' '},
                     {'1',' ',' ','1',' '},
                     {'1','1','1','1',' '}};

char Level7[2][2] = {{'1','1'},
                     {'x','2'}};

char Level8[3][2] = {{'1','1'},
                     {'1','x'},
                     {'1','2'}};

char Level9[4][2] = {{'2',' '},
                     {'1','1'},
                     {'1','1'},
                     {'x',' '}};


char Level11[4][3] = {{'1','1','3'},
                     {'1','x','2'},
                     {'1',' ','1'},
                     {'1','1','1'}};

char Level12[4][3] = {{' ',' ','x'},
                     {'1','1','1'},
                     {'1','1','1'},
                     {'2','2','3'}};

char Level13[4][3] = {{'3',' ','x'},
                     {'3','2','1'},
                     {'3','2','2'},
                     {'3','2','2'}};

char Level14[4][4] = {{' ',' ',' ','5'},
                     {' ','2','2','4'},
                     {' ','2','2','3'},
                     {'x','1','2','2'}};

char level15[5][5] = {{'1','1','1','3','4'},
                     {'1',' ','1','3','5'},
                     {'1','x','1','3','3'},
                     {'1',' ','1','1','3'},
                     {'1','1','1','2','2'}};

char level16[5][6] = {{' ','7','6','3','2',' '},
                      {'9','8','5','4','1','x'},
                      {' ','4','4','4',' ',' '},
                      {' ','4',' ','4',' ',' '},
                      {' ','4','4','4',' ',' '}};

char level17[6][6] = {{' ',' ',' ',' ','x',' '},
                      {'1','1','1','1','1',' '},
                      {'1','1','1','1','8','9'},
                      {'1','1',' ',' ',' ',' '},
                      {'1','1','1','1','1',' '},
                      {'1','1','1','1','1',' '}};

char Level18[4][4] = {{' ','9','8','7'},
                      {'4','4','4','6'},
                      {'4','x','4','5'},
                      {'4','4',' ',' '}};

char level19[5][4] = {{' ','2','2','2'},
                      {' ','2','2','2'},
                      {'x','1','2','9'},
                      {' ','2','2','5'},
                      {' ','2','2','7'}};

char level20[5][5] = {{'4','4','4','4','4'},
                      {'4','2','2','2','4'},
                      {'4','2','x','4','4'},
                      {'4','2','2','4','4'},
                      {'4','4','4','6','8'}};

char Level21[3][3] = {{'1',' ','x'},
                      {'1',' ','1'},
                      {'x',' ','1'}};

char Level22[3][3] = {{'x','1','1'},
                      {' ',' ','1'},
                      {'1','1','x'}};

char Level23[4][3] = {{'1','1','1'},
                      {'1','1',' '},
                      {'x','1',' '},
                      {'x','1','1'}};

char Level24[4][4] = {{'x','1',' ','1'},
                      {'1','1','1','1'},
                      {'1','x','1',' '},
                      {'1','1','1','1'}};

char Level25[3][3] = {{'1','1','x'},
                      {'1',' ','1'},
                      {'x','2','1'}};

char Level26[3][4] = {{' ','1','2','2'},
                      {'1','1','1','x'},
                      {'x',' ','2','2'}};

char level27[5][4] = {{' ','x','1',' '},
                      {'3','2','1','1'},
                      {'3','2','1','1'},
                      {'2','2','1','x'},
                      {'2','3','1','1'}};

char Level28[3][3] = {{'x','6','5'},
                      {'2','2','1'},
                      {'4','3','x'}};

char Level29[4][5] = {{'4','2',' ','1','x'},
                      {'x','2','2','1','1'},
                      {'2','2','2','2','2'},
                      {'4','3',' ','2','2'}};

char Level30[4][4] = {{'2','2','3','3'},
                      {'1','2','2','x'},
                      {'1','x','2','1'},
                      {'1','1','3','3'}};

