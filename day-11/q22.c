#include <stdio.h>

int main()
{
    float cp, sp, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %g%%\n", percentage);
    }
    else if (cp > sp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %g%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}
