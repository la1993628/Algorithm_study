//��������������10�����ݣ���ѡ������ʵ�ִ�С�������� 
//������
//���룺23 12 4 9 10 1 3 100 25 31
//�����1 3 4 9 10 12 23 25 31 100
#include <iostream>

using namespace std;

void selection_sort(int a[])
{
	int t;
	for(int i = 0; i < 10; i++) // ѭ���Ƚϴ�С
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
	for(int i = 0; i < 10; i++) //�������� 
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






