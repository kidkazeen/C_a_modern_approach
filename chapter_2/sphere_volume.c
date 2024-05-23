#include <stdio.h>
#define PI 3.14159f

int main(void)
{
    float radius = 0;

    
    printf("Radius: ");
    scanf("%f", &radius);
    printf("Volume of Sphere: %f\n", (4.0f/3.0f) * PI * (radius * radius * radius));
    
    
    return 0;
}