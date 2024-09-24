#include<stdio.h>
int main(void)
{
	float weight;//体重
	float value;//相等重量的白金价值
	
	printf("are u worth ur weight in platinum?\n");
	printf("lets check it out.\n");
	printf("please enter ur weight in pounds:");
	
	//获取用户的输入
	scanf("%f",&weight);
	//假设白金的价格是每盎司$1700
	//14.5833用于把英镑常衡盎司转换为金衡盎司
	value=1700.0*weight*14.5833;
	printf("ur weight in platinum is worth $%.2f.\n",value);
	printf("u are easily worth that!if platinum prices drop,\n");
	printf("eat more to maintain ur value.\n");
	
	return 0;
	 
}
