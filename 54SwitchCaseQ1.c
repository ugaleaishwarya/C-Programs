// WAP to perform the add,sub, multi, div according to  the users choice.
#include<stdio.h>

void main()
{
    int opt;
    float n1,n2,ans;

    printf("\n --------- Menu -----------\n");
    printf("\n 1.Add \n 2.sub \n 3.multi \n 4.div");
    printf("\n enter your option: ");
    scanf("%d",&opt);

    printf("\n Enter an two nos: ");
    scanf("%f %f",&n1,&n2);

    switch(opt)
    {
        case 1:
            ans=n1+n2;
            break;
        case 2:
            ans=n1-n2;
            break;
        case 3:
            ans=n1*n2;
            break;
        case 4:
            ans=n1/n2;
            break;
        default:
            printf("\n Incorrect Option..!!!");
            return;
    }
    printf("\n The Answer Is: %f",ans);

}
