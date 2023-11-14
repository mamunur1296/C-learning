//#include <stdio.h>
//int main()
//{
//	/*for (int i = 0; i <= 10; i++)
//	{
//		printf("Hello this is loop \n ");
//	}*/
//	//for (int i = 1; i <= 5; i++)
//	//{
//	//	if (i % 2 == 0) {
//	//		printf("%d\n", i);
//	//	}
//	//}
//	int sum = 0;
//	for (int i = 1; i <= 1000; i++)
//	{
//		sum += i;
//	}
//	printf("%d ", sum);
//	return 0;
//}
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", a, b);
    if (a >= b) {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}