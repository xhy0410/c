#include<stdio.h>
int main(void)
{
	float weight;//����
	float value;//��������İ׽��ֵ
	
	printf("are u worth ur weight in platinum?\n");
	printf("lets check it out.\n");
	printf("please enter ur weight in pounds:");
	
	//��ȡ�û�������
	scanf("%f",&weight);
	//����׽�ļ۸���ÿ��˾$1700
	//14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
	value=1700.0*weight*14.5833;
	printf("ur weight in platinum is worth $%.2f.\n",value);
	printf("u are easily worth that!if platinum prices drop,\n");
	printf("eat more to maintain ur value.\n");
	
	return 0;
	 
}
