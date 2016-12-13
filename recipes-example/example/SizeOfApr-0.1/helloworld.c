#include <stdio.h>
#include <apr.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
    int temp = 0;
    int temp2 = 0;
    int temp3 = 0;
    temp = sizeof(off_t);
    temp2 = sizeof(apr_off_t);
    printf("APR_OFF_T_FMT: %s\n", APR_OFF_T_FMT);
    printf("off_t: %d\n", temp);
    printf("apr_off_t: %d\n", temp2);
    printf("__off_t: %d\n",sizeof(__off_t));
    printf("__off64_t: %d\n", sizeof(__off64_t));

    return 0;
}
