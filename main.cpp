#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;


void output_array (char a[4][5])
{
	cout<<""<<endl;
	for (int i=0; i<4; i++){
		switch(i)
		{
			case 0: cout<<"11-12";break;
			case 1: cout<<"12-13";break;
			case 2: cout<<"13-14";break;
			case 3: cout<<"14-15";break;
		}
	    for (int j=0; j<5; j++)	
			cout<<setw(3)<<a[i][j];
		cout<<endl;
    }
}
void free_both_teachers(char george[4][5], char maria[4][5],int x) 
{
    string hours[]={"11-12","12-13","13-14","14-15"};
    for(int i=0;i<4;i++)
    {
    	if(george[i][x]=='0' && maria[i][x]=='0')
    	{
    		cout<<hours[i]<<",";
    		george[i][x]=='*';
    		maria[i][x]=='*';
		}
	}

}
void array_out(char george [4][5],char maria[4][5])
{
	cout<<"Graphic George:"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"{";
		for(int j=0;j<5;j++)
		{
			cout<<george[i][j];
		}
		cout<<"}";
		cout<<endl;
	}
	cout<<"Graphic Maria:"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"{";
		for(int j=0;j<5;j++)
		{
			cout<<maria[i][j];
		}
		cout<<"}";
		cout<<endl;
	}
}
int main()
{
char george[4][5]= {{'X','X','0','0','X',},
	                {'0','X','X','X','0',},
	                {'0','X','X','0','0',},
	                {'X','X','X','0','X',}};
 
char maria[4][5] = {{'X','X','0','0','X'}, 
	                {'0','X','0','X','X'}, 
	                {'X','X','0','0','0'}, 
	                {'X','0','X','0','X'}}; 
cout<<"Graphic Maria:"<<endl;
output_array(maria);
cout<<endl;
cout<<"Graphic Georgi:"<<endl;
output_array(george);  	        
int x;
cout<<"Enter number between 0-4:";
cin>>x;
free_both_teachers(george,maria,x);
cout<<"Graphic of the teachers:"<<endl;
array_out(george,maria);
return 0;
}


