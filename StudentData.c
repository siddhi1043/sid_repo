
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct st
        {
		int rno;
		char n[100];
		float marks;
		}s[50];
	
int main()
{
	int i,n,m,k,ch;
	printf("How many records you want ?\n");
	scanf("%d",&n);
	void display(struct st[],int);
	void input(struct st[],int);
    input(s,n); 
	void update(struct st[],int); 
	int search(struct st[],int);
	m=1;
	do
	{

	printf("\n Enter your Choice \n");
    printf("\nMENU\n1.Display\n2.Update \n3.search \n4.Exit\n");
    scanf("%d",&ch);
    
    switch(ch)              
    {
    	case 1:
			display(s,n);
			break;
		case 2:
			update(s,n);
			printf(" Updated records is ");
		    display(s,n);
			break;
		case 3:
			k=search(s,n);
			break;
			
		default:
			printf("\nYou Have entered wrong choice\n");
			break;
	  }
  
	}while(m!=0);
	return 0;
}


void input(struct st s[],int n)         
{
	int i;
	printf("Enter roll no,Name and  Marks\n");
	for (i=0;i<n;i++)
	{
	printf("Enter records %d\n",i+1);
	scanf("%d%s%f",&s[i].rno,&s[i].n,&s[i].marks);	
	}
}

void display(struct st s[],int n)
{
	int i;
	printf("Roll No,Name and Marks \n");
	for(i=0;i<n;i++)
	{
	printf("%d%s%f\n",s[i].rno,s[i].n,s[i].marks);
	}
}

void update(struct st s[],int n)
{
	int newrno,k;
	int search(struct st[],int);      
	k=search(s,n);
	printf("Enter the roll no you want to update \n");
	scanf("%d",&newrno);
	printf("Enter new record Name  and Marks\n");
	printf("Enter roll no ,Name and  Marks\n");
	scanf("%s %f",&s[k].n,&s[k].marks);	
    
}

int search(struct st s[],int n)
{
	int i,key,flag=0,k;
	printf("Enter roll no you want to search");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if (key==s[i].rno)
		{
		flag=1;
		k=i;
		break;
		}	
	}
	if (flag=1)
	{
		printf("Record found ");
		
	}
	else
	{
		
	printf("Record not found");
}
	return k;
}
