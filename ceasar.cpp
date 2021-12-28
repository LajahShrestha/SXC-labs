#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	char PT[10] , CT[10];
	cout<<"enter the message"<<endl;
	gets(PT);
	int key=3;
	
	//c=p+kmod10= Encryption
	for(int i=0;PT[i]!='\0' ;i++)
	{
		char ch=PT[i];
		if(ch>='a' && ch<= 'z')
		{
			ch=ch + key;
			if(ch >'z')
			{
				ch = ch-'z' + 'a' -1;
			}
			
			PT[i]=ch;
		}
	}
	cout<<"the encrypted msg is: ";
	for(int i=0;PT[i]!= '\0' ;i++)
	{
		cout<<PT[i];
	}
	return 0;
}
