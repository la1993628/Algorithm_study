//��������������10�����ݣ��ò�������ʵ�ִ�С�������� 
//������
//���룺23 12 4 9 10 1 3 100 25 31
//�����1 3 4 9 10 12 23 25 31 100
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
	{ // �������Ϊh���� 
		for ( int i = h; i < N; i++)
		{	// ��a[i]���뵽a[i-h], a[i-2*h], a[i-3*h]...֮��
			for(int j = i; j >= h && a[j] < a[j-h]; j -= h)
				exch(a[j], a[j-1] )	; 			
		}
		h = h/3;
	}
}

int main()
{
	int a[10];
	for(int i = 0; i < 10; i++) //�������� 
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






