#include <stdio.h>
int matches(int a, int b);
int main()
{
    int t;
    scanf("%d", &t);
    int a, b;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);
        int sum_match=matches(a, b);
        printf("%d\n", sum_match);
    }
    return 0;
}
int matches(int a, int b)
{
    int sum = a + b;
    int remain = 0, div = sum;
    int c = 0;
    int sum_matches;
label:
    remain = div % 10;
label1:
    div /= 10;
    switch (remain)
    {
    case 1:
        sum_matches = 2;
        break;
    case 2:
        sum_matches = 5;
        break;
    case 3:
        sum_matches = 5;
        break;
    case 4:
        sum_matches = 4;
        break;
    case 5:
        sum_matches = 5;
        break;
    case 6:
        sum_matches = 6;
        break;
    case 7:
        sum_matches = 3;
        break;
    case 8:
        sum_matches = 7;
        break;
    case 9:
        sum_matches = 6;
        break;
    case 0:
        sum_matches = 6;
        break;
    default:
        break;
    }

    if (div == 0)
    {
        c += sum_matches;
    }
    if (div > 10)
    {
        c += sum_matches;
        goto label;
    }
    else if (div < 10 && div>0)
    {
        remain = div;
        c += sum_matches;
        goto label1;
    }
    
    return c;
}
