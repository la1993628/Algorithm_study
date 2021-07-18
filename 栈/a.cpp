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
		print("¶ÑÕ»Âú ");
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
		printf("¶ÑÕ»¿Õ");
		return ERROR;	//±êÖ¾´íÎó 
	}
	else
		return (PtrS->Data[(PtrS->Top)--]);
}









