#include<reg52.h>
int model=0;
int main()
{
	while(model == 0)	  // 
	{
		P0=0xff;	
	}
	while(model == 1)	  //
	{
		P0=0x00;	
	}
	while(model == 2)	   //
	{
		if(P1==0x01)
		{
			P3=0xff;
		}
		else
		{
			P3=0x00;
		}

	}
	while(model == 3)	 //PIR
	{
		if(P1==0x01)
		{
			P3=0xff;
		}
		else
		{
			P3=0xaa;
		}
	}
	return 0;
}
void keypress() interrupt 0
{
	model+=1;
	if(model >= 4)
	{
		model = 0;
	}
}  