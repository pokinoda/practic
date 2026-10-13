#include <stdio.h>

int main(void) {
    long double value;
    scanf("%Lf", &value);

    double double_value = (double)value;
    float float_value = (float)value;

    printf("FLOAT: %.6f\n", float_value);
    printf("DOUBLE: %.6f\n", double_value);
    printf("LDOUBLE: %.6Lf\n", value);
    printf("FLOAT+1: %.6f\n", float_value + 1.0f);
    printf("DOUBLE+1: %.6f\n", double_value + 1.0);
    printf("LDOUBLE+1: %.6Lf\n", value + 1.0L);

    return 0;
}
