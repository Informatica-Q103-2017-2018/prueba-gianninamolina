#include <stdio.h>
int main()
{
int miVector[3];
miVector[0] = 10;
miVector[1] = 2 * miVector[0];
miVector[2] = miVector[0] + miVector[1];
printf("Posicion 0 = %d\n", miVector[0]);
printf("Posicion 1 = %d\n", miVector[1]);
printf("Posicion 2 = %d\n", miVector[2]);
}
