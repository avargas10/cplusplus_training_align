#include <cstdio>

int absolute_value(int x)
{
    int balancer = -1;
    if(x < 0)
    {
        return x * balancer;
    }
}

int sum(int x, int y)
{
    return x + y;
}

void run_task_1_testing(int iterations, int multiplier)
{
    for(int i = 0; i < iterations; i++)
    {
        int signed_multiplier = 1;
        if(i % 2 == 0)
        {
            signed_multiplier = signed_multiplier * -1;
        }   
        int my_num = i * multiplier * signed_multiplier;
        int num_a = i;
        int num_b = i * multiplier;
        printf("El valor absoluto de %d es %d.\n", my_num, absolute_value(my_num));
        printf("La suma de %d y %d es %d.\n", num_a, num_b,  sum(num_a, num_b));
    }
    
}


int main()
{
    run_task_1_testing(20,2);
}   