#define MaxSize
//typedef struct SNode *Stack;
struct DStack{
	ElementTyep Data[MaxSize];
	int Top1; /*¶ÑÕ»1µÄÕ»¶¥Ö¸Õë */
	int Top2; /*¶ÑÕ»2µÄÕ»¶¥Ö¸Õë*/
}S;
S.Top1 = -1;
S.Top2 = MaxSize;

void Push (struct DStack *PtrS, ElementType item, int Tag)
{
	if ( PtrS->Top2 - PtrS->Top1 == 1)
	{
		printf("¶ÑÕ»Âú");
		return;
	}
	if ( Tag == 1) /*¶ÔµÚÒ»¸ö¶ÑÕ»²Ù×÷ */
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
			printf("¶ÑÕ»1¿Õ"); return NULL; 
		} 
		else return PtrS->Data[(PtrS->Top1)-- ];
	}	
	else 
	{
		if ( PtrS->Top2 == MaxSize)
		{
			print("¶ÑÕ»2¿Õ"); return NULL;			
		}
		else return PtrS->Data[(Ptrs->Top2)++];
	} 
}









