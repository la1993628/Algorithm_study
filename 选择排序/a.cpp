//��������������10�����ݣ���ѡ������ʵ�ִ�С�������� 
//������
//���룺23 12 4 9 10 1 3 100 25 31
//�����1 3 4 9 10 12 23 25 31 100
#include <iostream>

using namespace std;

int main()
{
	int a[10],j,i,t;
	
	for(i = 0; i < 10; i++) //�������� 
	{
		cin >> a[i];
	}
	
	for(i = 0; i < 10; i++) // ѭ���Ƚϴ�С
	{
		for( j = i + 1; j < 10 ; j++)
		{
			if(a[j] < a[i])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}		
		}	
	}
	
	for(i=0; i < 10 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}






