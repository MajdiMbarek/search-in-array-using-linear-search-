# include <stdio.h>


int main(void)
{
    int numbers[] = {4,5,8,4,2,0};

    int size = sizeof(int);
    int sum = sizeof(numbers);
    int len = sum / size;
    
    for (int i = 0; i < len; i++)
    {
        if (numbers[i] == 7)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}