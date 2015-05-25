#include<stdio.h>
#include<stdlib.h>

int typenum,maxtype=100,computer[101];
void buy()
{
        int num,type,option;
        printf("Is this a new type? 0=no 1=yes\n");
        scanf("%d",&option);
        if (option==1)
        {
                printf("enter the num\n");
                typenum++;
                scanf("%d",&num);
                computer[typenum]+=num;
        }
        else
        {
                printf("enter your type and num like 1 10\n");
                scanf("%d %d",&type,&num);
                computer[type]+=num;
        }
}

void sell()
{
        int type,num;

        printf("enter your type and num like 1 10\n");
        scanf("%d %d",&type,&num);
        computer[type]-=num;
}

void show()
{
        int i;
        for (i=1;i<=typenum;i++)
        {
                printf("we have %d %d-type computer\n",computer[i],i);
        }
}
int main()
{
        int i,option;
        printf("0=buy 1=sell 2=show your store 3=exit\n");
        typenum=0;
        for (i=1;i<=maxtype;i++)
        {
                computer[i]=0;
        }
        scanf("%d",&option);
        while (option!=3)
        {
                if (option==0)
                {
                        buy();
                }
                else if (option==1)
                {
                        sell();
                }
                else if (option==2)
                {
                        show();
                }
                scanf("%d",&option);
        }
        return 0;
}

