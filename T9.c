#include<stdio.h>
#include<conio.h>
void main()
{
char b[100];
int i,j,k;
char *a,c;
b[0]=0;
j=1;
puts("enter the string");
gets(a);
for(i=0;*(a+i)!='\0';i++)
{
c=*(a+i);
if((c>=97 && c<=99) || (c>=65 && c<=67))
{
if(b[j-1]=='2')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-97;k++)
{
b[j]='2';
j++;
}
}
else if((c>=100 && c<=102) || (c>=68 && c<=70))
{
if(b[j-1]=='3')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-100;k++)
{
b[j]='3';
j++;
}
}
else if((c>=103 && c<=105) || (c>=71 && c<=73))
{
if(b[j-1]=='4')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-103;k++)
{
b[j]='4';
j++;
}
}
else if((c>=106 && c<=108) || (c>=74 && c<=76))
{
if(b[j-1]=='5')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-106;k++)
{
b[j]='5';
j++;
}
}
else if((c>=109 && c<=111) || (c>=77 && c<=79))
{
if(b[j-1]=='6')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-109;k++)
{
b[j]='6';
j++;
}
}
else if((c>=112 && c<=115) || (c>=80 && c<=83))
{
if(b[j-1]=='7')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-112;k++)
{
b[j]='7';
j++;
}
}
else if((c>=116 && c<=118) || (c>=84 && c<=86))
{
if(b[j-1]=='8')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-116;k++)
{
b[j]='8';
j++;
}
}
else if((c>=119 && c<=122) || (c>=87 && c<=90))
{
if(b[j-1]=='9')
{
b[j]=' ';
j++;
}
for(k=0;k<=c-119;k++)
{
b[j]='9';
j++;
}
}
else if(c==32)
{
b[j]='0';
j++;
}
}
for(i=1;i<=j-1;i++)
{
printf("%c",b[i]);
}
getch();
}
