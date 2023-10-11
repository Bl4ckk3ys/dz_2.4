#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int l1, l2, l3, max, min, a, null;
    scanf("%d %d %d", &l1, &l2, &l3);

    max = l1;
    if (l2 > max) max = l2;
    if (l3 > max) max = l3;

    min = l1;
    if (l2 < min) min = l2;
    if (l3 < min) min = l3;

    a = l1+l2+l3-max-min;
    
    if (max > min + a) printf("Impossible");
    else if (l1 == l2 && l2 == l3) printf("Equilateral");
    else if (pow(max,2) == pow(min,2)+pow(a,2)) printf("Rectangular");
    else if (pow(max,2) > pow(min,2)+pow(a,2)) printf("Obtuse");
    else if (pow(max,2) < pow(min,2)+pow(a,2)) printf("Acute");

    scanf("\n%d",&null);
    return 0;
}