#include <stdio.h>


void main(){
    char names[3][7] = {"Adrian","Bruno","Goran"};
    char adrianStr[4] = "ABC";
    char brunoStr[5] = "BABC";
    char goranStr[7] = "CCAABB";

    int max = 0;

//    printf("%s\n", adrianStr);
//    printf("%s\n", brunoStr);
//    printf("%s\n",goranStr);

    int point[3];
    for(int i = 0;i<3;i++)
        point[i] = 0;
    int k ;
    scanf("%d",&k);
    char answer[k+1];
    scanf("%s",&answer);
    for(int i = 0;i<k;i++){
        if(answer[i] == adrianStr[i%3]){
            point[0]++;
        }
        if(answer[i] == brunoStr[i%4]){
            point[1]++;
        }
        if(answer[i] == goranStr[i%6]){
            point[2]++;
        }
    }
    for(int i = 0;i<3;i++){
        if(point[i] > max){
            max = point[i];
        }
    }
    printf("%d\n",max);
    for(int i = 0;i<3;i++){
        if(point[i] == max){
            printf("%s\n",names[i]);
        }
    }


}
