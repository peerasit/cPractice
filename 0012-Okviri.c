#include<stdio.h>

void main()
{
    char pl1[6] = "..#..";
    char pl2[6] = ".#.#.";
    char pl3[6] = "#.X.#";
    char pl4[6] = ".#.#.";
    char pl5[6] = "..#..";

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

    char wl1[6] = "..*..";
    char wl2[6] = ".*.*.";
    char wl3[6] = "*.X.*";
    char wl4[6] = ".*.*.";
    char wl5[6] = "..*..";

    char word[16];
    int length ;
    scanf("%s",&word);

    for(int i = 0; i<16; i++)
    {
        if(word[i] == '\0')
        {
            length = i;
            break;
        }


    }

    for(int i = 0;i<length;i++){

        if((i+1)%3 == 0){
            printf("%s",wl1);
        }
        else{
            printf("%s",pl1);

        }
    }
    printf("\n");
    for(int i = 0;i<length;i++){
        if((i+1)%3 == 0){
            printf("%s",wl2);
        }
        else{
            printf("%s",pl2);

        }
    }
    printf("\n");
    for(int i = 0;i<length;i++){
        p3[2] = word[i];
        if((i+1)%3 == 0){
            printf("%s",wl3);
        }
        else{
            printf("%s",pl3);

        }
    }
    printf("\n");
    for(int i = 0;i<length;i++){
        if((i+1)%3 == 0){
            printf("%s",wl4);
        }
        else{
            printf("%s",pl4);

        }
    }
    printf("\n");
    for(int i = 0;i<length;i++){
        if((i+1)%3 == 0){
            printf("%s",wl5);
        }
        else{
            printf("%s",pl5);

        }
    }
    printf("\n");



}
