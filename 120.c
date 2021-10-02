 #include<stdio.h>
void xstrcpy(char*,char*);

int main()
{
	int i;
	char s[]="kristen",t[20];
	xstrcpy(s,t);
	printf("%s",t);

	getch();
	
}

void xstrcpy(char *s,char *t)
{
	int i;
	for(i=0; s[i]!='\0'; i++)   
	{
		t[i]=s[i];
	}
}


