#include<iostream>
#include<set> 
using namespace std;
const int N = 1e6 + 10;
int	a[N],lQuan[N],rQuan[N],maxquan=0;		//��Ȩ������Ȩ�������Ȩ��
int main()
{	
	//�������� 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
	{
    	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i)				//��ʼ�� 
	{
		lQuan[i]=0;
		rQuan[i]=0;
	}
	set<int> lSet,rSet;					//���Ҽ� 
	
 	for(int i=0;i<n-1;++i)
	{
 		lSet.insert(a[i]);				//��������������
		lQuan[i]=lSet.size();			//������Ȩ 
	}
	for(int i=n-1;i>0;--i)
	{
 		rSet.insert(a[i]);				//�������������Ҽ�
		rQuan[i]=rSet.size();			//������Ȩ 
	}
	for(int i=0;i<n-1;++i)
	{
		if(maxquan<lQuan[i]+rQuan[i+1])
		{
			maxquan=lQuan[i]+rQuan[i+1];	//������� 
		}
	}
	printf("%d",maxquan);
    return 0;
}
