#define MaxSize
typedef struct SNode *Stack;
struct SNode{
	ElementTyep Data[MaxSize];
	int Top;
};

void Push (Stack PtrS, ElementType item)
{
	if ( PtrS->Tpop == MaxSize - 1)
	{
		print("��ջ�� ");
		return;
	}
	else
	{
		PtrS->Data[++(PtrS->Top)] = item;
		return;
	}
}

ElementType Pop( Stack PtrS)
{
	if ( PtrS->Top == -1){
		printf("��ջ��");
		return ERROR;	//��־���� 
	}
	else
		return (PtrS->Data[(PtrS->Top)--]);
}









