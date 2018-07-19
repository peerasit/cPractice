#include<stdio.h>

void main(){

    char p1[6] = "..#..";
    char p2[6] = ".#.#.";
    char p3[6] = "#.X.#";
    char p4[6] = ".#.#.";
    char p5[6] = "..#..";

    char w1[6] = "..*..";
    char w2[6] = ".*.*.";
    char w3[6] = "*.X.*";
    char w4[6] = ".*.*.";
    char w5[6] = "..*..";

    char word[16];
    int length = 0;
    scanf("%s",word);
    for(int i = 0;i<16;i++){
        if(word[i] == '\0');
        {
            length = i;
            break;
        }
    }
    printf("%d",length);




}
