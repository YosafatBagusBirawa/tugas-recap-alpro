#include <stdio.h>

int s1, t1;
int v1, t2;
int s2, v2;

int main() {
    
    scanf("%d", &s1);
    scanf("%d", &t1);
    scanf("%d", &v1);
    scanf("%d", &t2);
    scanf("%d", &s2);
    scanf("%d", &v2);

    float V = (float) s1/t1;
    float S = (float) v1*t2;
    float T = (float) s2/v2;

    printf("%.2f\n", V);
    printf("%.2f\n", S);
    printf("%.2f\n", T);

return 0;
}