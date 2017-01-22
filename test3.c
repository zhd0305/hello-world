#include <stdio.h>
/* 2017-01-22 */
/*打印华氏温度-摄氏温度对照表
华氏温度 摄氏温度*/ 
main ()
{
    int fahr;
        printf("华氏温度 摄氏温度\n");
    
    for (fahr = 0; fahr <= 300; fahr = fahr +20)
	printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
	
        printf("华氏温度 摄氏温度\n");

}
