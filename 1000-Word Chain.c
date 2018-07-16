#include <stdio.h>

void main()
{
    int l = 0;
    scanf("%d",&l);
    char pre[l+1];
    char now[l+1];
    char result[l+1];

    int n = 0;
    scanf("%d",&n);

    int chain = 1;
    for(int i = 0; i<n; i++)
    {
        scanf("%s",&now);
        int count = 0;
        if(i==0)
        {
            for(int j = 0; j<l; j++)
            {
                pre[j] = now[j];
            }

        }
        else
        {



            for(int j = 0; j<l; j++)
            {
                if(pre[j] != now[j])
                {
                    count++;
                }
            }

            if(count>2 && chain == 1)
            {
                chain = 0;
                for(int j = 0; j<l; j++)
                {
                    result[j] = pre[j];
                }
            }
            else
            {
                for(int j = 0; j<l; j++)
                    pre[j] = now[j];




            }

        }

    }


    if(chain == 0)
    {
        for(int j = 0; j<l; j++)
            printf("%c",result[j]);
    }
    else if(chain == 1)
    {
        for(int j = 0; j<l; j++)
            printf("%c",pre[j]);
    }
}
