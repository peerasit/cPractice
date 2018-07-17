#include <stdio.h>
#include <math.h>
#include <limits.h>

void main(){

        int n = 0;
        scanf("%d",&n);
        int posX[n+1];
        int posY[n+1];
        double max = -1;

        for(int i = 1;i<=n;i++){
            scanf("%d %d",&posX[i],&posY[i]);
        }

        for (int k = 1; k < n - 3; k++) {
            for (int j = k+1; j <= n - 1; j++) {
                for (int i = j + 1; i <= n; i++) {
                   double sum = (posX[k]*posY[j])+(posX[j]*posY[i])+(posX[i]*posY[k])-(posY[k]*posX[j])
                   -(posY[j]*posX[i])-(posY[i]*posX[k]);
                    if(sum<0)
                        sum*=-1;
                    sum/=2;
                    //printf("%f",sum);
                    if(sum > max)
                        max = sum;
                }
            }
        }
        printf("%.3f",max);

}

        //|x1y2 + x2y3 + x3y1 - y1x2 - y2x3 - y3x1|/2
