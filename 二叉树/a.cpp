void PreOrderPrintLeaves( BinTree BT)
{
	if ( BT )
	{
		if ( !BT->Left && !BT->Right)
			printf("%d", BT->Data);
		PreOrderPrintLeaves ( BT->Left );
		PreOrderPrintLeaves ( BT->Right );
	}
}

int PostOrderGetHeight( BinTree BT)
{
	int HL, HR, MaxH;
	if ( BT ){
		HL = PostOrderGetHeight(BT->Left);
		HR = PostOrderGetHeight(BT->right);
		MaxH = (HL > HR) ? HL : HR;
		return ( MaxH + 1);
	}
	else return 0;
}


