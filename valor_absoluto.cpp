#include <cstdio>

int absolute_value(int x)
{
    int balancer = -1;
    if(x < 0)
    {
        return x * balancer;
    }
}

void run_absolute_value_testing(int iterations, int multiplier)
{
    for(int i = 0; i < iterations; i++)
    {
        int signed_multiplier = 1;
        if(i % 2 == 0)
        {
            signed_multiplier = signed_multiplier * -1;
        }   
        int my_num = i * multiplier * signed_multiplier;
        printf("El valor absoluto de %d es %d.\n", my_num, absolute_value(my_num));
    }
    
}

int main()
{
    run_absolute_value_testing(50,1);
}   