#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[25],cname[25],temp[25],tryagain[1];
char flames[7],copy[6]={'F','L','A','M','E','S'};
int i,j,a,b,l,c=0,d=0,e,k,t,y=6;
m:
for(i=0;i<6;i++)
{
flames[i]=copy[i];
}
flames[i]='\0';
printf("\n\n\t\t\t\t**********GAME OF FLAMES**********\n\n");
printf("Enter Your Name:\t");
scanf("%[^\n]%*c",name);
printf("\nEnter Your Crush's Name:\t");
scanf("%[^\n]%*c",cname);
a=strlen(name);
b=strlen(cname);
if(b>a)
{
strcpy(temp,name);
strcpy(name,cname);
strcpy(cname,temp);
t=a;
a=b;
b=t;
}
for(i=0;i<a;i++)
{
name[i]=tolower(name[i]);
}
for(i=0;i<a;i++)
{
  if(name[i]==' ')
  {
     for(l=i;name[l]!='\0';l++)
     {
      name[l]=name[l+1];
 
   }
  }
}
a=strlen(name);
for(i=0;i<b;i++)
{
cname[i]=tolower(cname[i]);
}
for(i=0;i<b;i++)
{
  if(cname[i]==' ')
  {
     for(l=i;cname[l]!='\0';l++)
     {
      cname[l]=cname[l+1];
 
   }
  }
}
b=strlen(cname);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(name[i]==cname[j])
{
name[i]=' ';
cname[j]=' ';
}
}
}
for(i=0;i<a;i++)
{
if(name[i]>='a'&&name[i]<='z')
{
c=c+1;
}
}
for(j=0;j<b;j++)
{
if(cname[j]>='a'&&cname[j]<='z')
{
d=d+1;
}
}
e=c+d;
for(i=0,j=-1;i<e;i++)
{
z:
j=j+1;
if(i==(e-1))
{
for(k=j;k<y;k++)
{
flames[k]=flames[k+1];
}
flames[k]='\0';
}
if(j==(y-1))
{
   j=-1;
}
}
if(strlen(flames)!=1)
{
   if(j<0)
   {
   j=-1;
   }
   else
   {
   j=j-1;
   }
   i=0;
   y=y-1;
   goto z;
}
switch(flames[0])
{
case 'F':printf("\nFriend");break;
case 'L':printf("\nLover");break;
case 'A':printf("\nAffection");break;
case 'M':printf("\nMarriage");break;
case 'E':printf("\nEnemy");break;
case 'S':printf("\nSister");break;
}
printf("\n\n\n**********************************\n\n\n");
printf("Try Again? [Y (or) N]:\t");
scanf("%[^\n]%*c",tryagain);
tryagain[0]=tolower(tryagain[0]);
if(strcmp(tryagain,"y")==0)
{
c=0;
d=0;
e=0;
y=6;
system("CLS");
goto m;
}
printf("\n\n\n***************END****************\n\n\n");
}


