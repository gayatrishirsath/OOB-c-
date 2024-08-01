#include<stdio.h>
#include<ctype.h>
int main()
{
  FILE * f1;
 char ch,s[100],ch1,ch2;
 printf("Enter  first file name");
 scanf("%s",s);
 f1=fopen(s,"w");
 if(f1==NULL)
    {
      printf("file not exist");
    }
   while( !feof(f1))
  { 
   ch=fgetc(f1);
  }
    if(isupper(ch))
	 {
	 	ch1=tolower(ch);
     }
    if(islower(ch))
    {ch2=tolower(ch);
	}
	printf("info in lowercase=%s",ch1);
	printf("into in uppwercase=%s",ch2);
}

