#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  char ch, file_name[25],iden[20],integer[20][20],ch1,ch2;
int a[20],array[20][20],i=0,j=0,count=0,n=0,b[20],k=0,flag=0,m=0;
   FILE *fp;
 fp = fopen("input1","r"); // read mode
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   printf("The contents of file are :\n");
 
   while( ( ch = fgetc(fp) ) != EOF )
     {

	if(ch=='+'||ch=='/'||ch=='*'||ch=='-'||ch=='('||ch==')'||ch=='='||ch=='.'||ch==';')
	{
		iden[n]=ch;
		n++;
		if(ch1=='0'||ch1=='1'||ch1=='2'||ch1=='3'||ch1=='4'||ch1=='5'||ch1=='6'||ch1=='7'||ch1=='8'||ch1=='9')
		{
			b[k]=m;
			k++;
			m=0;
			flag++;
		}
		else
		{
			a[i]=j;
			i++;
			count++;
			j=0;
		}
}
	else
	  {
		if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
		{
			integer[k][m]=ch;
			m++;
		}

		else
		{

			array[i][j]=ch;
			j++;
		}
	
	
	
    } ch2=ch1;
	ch1=ch;
}
	if(ch2=='0'||ch2=='1'||ch2=='2'||ch2=='3'||ch2=='4'||ch2=='5'||ch2=='6'||ch2=='7'||ch2=='8'||ch2=='9')
		{
			b[k]=m;
			k++;
			m=0;
			flag++;
		}
		else
		{
			a[i]=j;
			i++;
			count++;
			j=0;
		}
   fclose(fp);
	for(i=0;i<n;i++)
	{
		printf("<OPERATOR,%c",iden[i]);
		printf(">\n");
	}
	
	for(i=0;i<count;i++)
	{
		printf("\n<Identifier,");
		for(j=0;j<a[i];j++)
		{
			printf("%c",array[i][j]);
		}
		printf(">\n");
	}
	for(k=0;k<flag;k++)
	{
		printf("\n<Integer,");
		for(m=0;m<b[k];m++)
		{
			printf("%c",integer[k][m]);
		}
		printf(">\n");
	}
			
   return 0;
}
