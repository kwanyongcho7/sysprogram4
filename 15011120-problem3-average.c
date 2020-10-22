#include <stdio.h>
  
int main(void)
{
        int system, algorithm, network;
        double average;

        printf("Input the system programming, algortihm, and network score:");
        scanf("%d%d%d", &system, &algorithm, &network);

        average = (system + algorithm + network) / 3.0; //sum wrong, data type wrong fix

        printf("The average of the three subjects is %lf.\n", average); //print average double type

        return 0;

}

