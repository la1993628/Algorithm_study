//��������������10�����ݣ��ò�������ʵ�ִ�С�������� 
//������
//���룺23 12 4 9 10 1 3 100 25 31
//�����1 3 4 9 10 12 23 25 31 100
#include <iostream>

using namespace std;

void insert_sort(int a[])
{
	int t;
	for(int i = 1; i < 10; i++) // ѭ���Ƚϴ�С
	{
		for(int j = i ; j > 0 && a[j] < a[j-1] ; j--)
		{
			t = a[j-1];
			a[j-1] = a[j];
			a[j] = t;		
		}	
	}
}

int main()
{
	int a[10];
	for(int i = 0; i < 10; i++) //�������� 
	{
		cin >> a[i];
	}
	insert_sort(a);
	for(int i=0; i < 10 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}






