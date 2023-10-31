#include <stdio.h>
int main()
{
    long long int eyes, mouths, bodies;
    scanf("%lld%lld%lld", &eyes, &mouths, &bodies);
    long long int rajult = 0;

    long long int smallest = eyes;
    if (mouths < smallest)
    {
        smallest = mouths;
    }
    if (bodies < smallest)
    {
        smallest = bodies;
    }

    eyes = eyes - smallest;
    mouths = mouths - smallest;
    bodies = bodies - smallest;
    rajult = smallest;
    if (eyes / 2 <= bodies)
    {
        rajult = eyes / 2 + smallest;
    }else if (bodies < eyes)
    {
        rajult = bodies + smallest;
    }
    

    printf("%lld", rajult);
    return 0;
}