#define MaxSize
//typedef struct SNode *Stack;
struct DStack{
	ElementTyep Data[MaxSize];
	int Top1; /*��ջ1��ջ��ָ�� */
	int Top2; /*��ջ2��ջ��ָ��*/
}S;
S.Top1 = -1;
S.Top2 = MaxSize;

void Push (struct DStack *PtrS, ElementType item, int Tag)
{
	if ( PtrS->Top2 - PtrS->Top1 == 1)
	{
		printf("��ջ��");
		return;
	}
	if ( Tag == 1) /*�Ե�һ����ջ���� */
		PtrS->Data[++(PtrS->Top1)] = item;
	else
		PtrS->Data[--(PtrS->Top2)] = item;
}

ElementType Pop( struct DStack *PtrS, int Tag)
{
	if ( Tag == 1)
	{
		if ( PtrS->Top1 == -1)
		{
			printf("��ջ1��"); return NULL; 
		} 
		else return PtrS->Data[(PtrS->Top1)-- ];
	}	
	else 
	{
		if ( PtrS->Top2 == MaxSize)
		{
			print("��ջ2��"); return NULL;			
		}
		else return PtrS->Data[(Ptrs->Top2)++];
	} 
}









