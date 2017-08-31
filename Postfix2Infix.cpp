#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

using namespace std;

const int MAX=50;
class STACK
{
	int TOP;
	char stack[MAX][MAX];
	public:
	STACK()
	{
		TOP=-1;
	}
	void push(char []);
	char* pop();
};
void STACK::push(char opernd[])
{          TOP++;
	   strcpy(stack[TOP],opernd);
}
char* STACK::pop()
{
	if(TOP==-1){
		cout<<"Empty Stack";
		return 0;
	}
	else
		return stack[TOP--];
}

void postfix_infix()
{
	STACK s;
	int c,cop,j;
	char oper[20],op1[20],op2[20];
	char symbol[20],postfix[20];
	cout<<"ENTER THE POSTFIX EXPRESSION:";
	gets(postfix);

	for(int i=0;i<strlen(postfix);i++)
	{
		char temp1[20],temp2[20],temp3[20];
		temp1[0]=postfix[i];
		temp1[1]='\0';
		strcpy(symbol,temp1);

		if(!isalpha(symbol[0]))
		{
			strcpy(op2,s.pop());
			strcpy(op1,s.pop());
			strcpy(temp3,"(");
			strcat(temp3,op1);
			strcat(temp3,symbol);
			strcat(temp3,op2);
			strcat(temp3,")");
			s.push(temp3);
		}
		else s.push(temp1);
	}
	cout<<"the result is = "<<s.pop();
}
int main()
{
	postfix_infix();
}
