#include<stdio.h>

void main()
{
    char word[16];
    scanf("%s",&word);
    int wordLength = 0;
    //find length

    for(int c = 0;; c++)
    {
        if(word[c] == '\0')
        {
            //printf("%c\n",word[c]);
            break;
        }

        //printf("%c\n",word[c]);
        wordLength++;

    }
    //printf("%d\n",wordLength);
    //printf("%d\n",(5*wordLength)-(wordLength-1));

    int count = 0;
    char result[5][(5*wordLength)-(wordLength-1)];

    int start = 0;

    for(int p = 0; p<wordLength; p++)
    {
        int left = start+2,right = left;
        for(int j = 0; j<3; j++)
        {
            for(int i = start; i<start+5; i++)
            {
                if(j == 2 && i == start+2)
                {
                    result[j][i] = word[p];

                }
                else if(i == left && left == right)
                {
                    if((p+1)%3==0)
                            result[j][i] = '*';
                            else if(i != start)
                                result[j][i] = '#';
                                else if(i==0){
                                    result[j][i] = '#';
                                }
                    }
            else if(i == left || i == right)
                {
                    if((p+1)%3==0)
                            result[j][i] = '*';
                            else if(i != start)
                                result[j][i] = '#';
                                else if(i==0){
                                    result[j][i] = '#';
                                }
                    }
            else
            {
                result[j][i] = '.';
                }

            }
            //printf("\n");

            --left;
            ++right;
        }

        left+=2;
        right-=2;
        for(int j = 3; j<5; j++)
        {
            for(int  i = start; i<start+5; i++)
            {
                if(i == left && left == right )
                {
                    if((p+1)%3==0)
                            result[j][i] = '*';
                            else if(i != start)
                                result[j][i] = '#';
                                else if(i==0){
                                    result[j][i] = '#';
                                }
                    }
            else if(i == left || i == right)
                {
                    if((p+1)%3==0)
                            result[j][i] = '*';
                            else if(i != start)
                                result[j][i] = '#';
                                else if(i==0){
                                    result[j][i] = '#';
                                }
                    }
            else
            {
                result[j][i] = '.';
                }

            }
            //printf("\n");
            ++left;
            --right;
        }
        //printf("%d\n",p+1);
        start = ((p+1)*5)-(p+1);
        //printf("%d \n",start);
    }

    for(int row = 0; row<5; row++)
    {
        for(int col = 0; col<(5*wordLength)-(wordLength-1); col++)
        {
            printf("%c",result[row][col]);
        }
        printf("\n");
    }

}
