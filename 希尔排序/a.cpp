//问题描述：输入10个数据，用插入排序法实现从小到大排序 
//案例：
//输入：23 12 4 9 10 1 3 100 25 31
//输出：1 3 4 9 10 12 23 25 31 100
#include <iostream>

using namespace std;
void exch(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void shell_sort(int a[])
{
	int h = 1;
	int N = 10;
	while ( h < N/3 ) h = 3*h + 1; // 1,4,13,40, 121
	while ( h >= 1)
	{ // 将数组变为h有序 
		for ( int i = h; i < N; i++)
		{	// 将a[i]插入到a[i-h], a[i-2*h], a[i-3*h]...之中
			for(int j = i; j >= h && a[j] < a[j-h]; j -= h)
				exch(a[j], a[j-1] )	; 			
		}
		h = h/3;
	}
}

int main()
{
	int a[10];
	for(int i = 0; i < 10; i++) //输入数据 
	{
		cin >> a[i];
	}
	shell_sort(a);
	for(int i=0; i < 10 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}






