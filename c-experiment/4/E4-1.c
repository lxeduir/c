#include <stdio.h>
void main()
{
    float s[10], *p;
    float max, min, average;
    int i;
    p = s;
    for (i = 0; i < 10; i++)
    {
        scanf("%f", p++);
    }
    p = s;
    max = min = average = *p;
    for (i = 1; i < 10; i++)
    {
        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < min)
            min = *(p + i);
        average += *(p + i);
    }
    average /= 10;
    printf("max=%.2f,min=%.2f,average=%.2f\n", max, min, average);
}