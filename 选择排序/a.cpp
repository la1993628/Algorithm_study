//问题描述：输入10个数据，用选择排序法实现从小到大排序 
//案例：
//输入：23 12 4 9 10 1 3 100 25 31
//输出：1 3 4 9 10 12 23 25 31 100
#include <iostream>

using namespace std;

void selection_sort(int a[])
{
	int t;
	for(int i = 0; i < 10; i++) // 循环比较大小
	{
		for(int j = i + 1; j < 10 ; j++)
		{
			if(a[j] < a[i])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}		
		}	
	}
}

int main()
{
	int a[10];
	for(int i = 0; i < 10; i++) //输入数据 
	{
		cin >> a[i];
	}
	
	for(int i=0; i < 10 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}






