#include<iostream>
#include<windows.h> //��ʱ������ͷ�ļ� 
using namespace std;
class time
{
	public:
		//Ĭ�Ϲ��캯�� 
		time(){year=0;month=0;day=0;hour=0;minute=0;sec=0;}
		//���캯������ 
		time(int y,int mo,int d,int h ,int m,int s)
			:year(y)
			,month(mo)
			,day(d)
			,hour(h)
			,minute(m)
			,sec(s)
		{}
		time operator++();//������������س�Ա���� 
		void display()
			{
				cout<<"*********"<<year<<"-"<<month<<"-"<<day<<"**********"<<endl;
				cout<<"********"<<hour<<" : "<<minute<<" : "<<sec<<"********"<<endl;
			}//���ʱ���ʽ 
	private:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int sec;	
};
time time::operator++()//������������س�Ա���� 
{
	if(++sec>=60)
	{
		sec-=60;
		++minute;
		if(minute>=60)
		{
			minute-=60;
			++hour;
			if(hour>=24)
        		{
        			hour-=24;
        			++day;
        			if(day>=30)
        			{
        				day-=30;
        				++month;
        				if(month>=12)
        				{
        					month-=12;
        					++year;
						}
					}
				}
		}
	}
	return *this;//���ص�ǰ����ֵ 
}
int main()
{
	int a,b,c,e,f,g,h;
	cout<<"���޸ĵ�ǰʱ�䣺����ʽ���£�\n";
	cout<<"2018 10 3 12 50 45\n";
	{
	cout<<"�����뵱ǰ���(2018):"<<endl;
	cin>>g;
	cout<<"�����뵱ǰ�·�(1~12):"<<endl; 
	cin>>e;
	cout<<"�����뵱ǰ����(1~30):"<<endl;
	cin>>h;
	cout<<"����������ʱ��(12 30 32):"<<endl;
	cin>>a>>b>>c;
	}
	
	{
		time time1(g,e,h,a,b,c);//�����time1���������� 
		for(int i=0;;i++)
		{	cout<<"*****��ӭ�����ͥ��ʱϵͳ*****"<<endl;
			cout<<"*******����ÿ����30��*******"<<endl; 
			++time1;
			time1.display() ;
			cout<<"***********designed by yuumoz.\n";
			Sleep(1000);
	     	system("CLS");
		}
	}
	return 0;
 } 

