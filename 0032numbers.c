#include <stdio.h>

void main(){
    int length;
    scanf("%d",&length);
    int arr[length];
    for(int i = 0 ;i<length;i++){
        scanf("%d",&arr[i]);
    }
    for(int start = 0;start<length;start++){
            int sum = 0;
            int multi = 1;
            int stop = 0;
            if(start != 0){
                stop = start;
            }
        for(int p = start;p<length;p++){
                printf("%d",arr[p]);
            //printf("%d",arr[p]*multi);
            sum =+ arr[p]*multi;
            multi*=10;
        }
        multi/=10;
        for(int p = 0;p<stop;p++){
            printf("%d",arr[p]);
            //printf("%d",arr[p]*multi);
            sum =+ arr[p]*multi;
        }
        printf("%d");


    }




}
