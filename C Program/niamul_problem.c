#include<stdio.h>
int main(){
int a,b;
char expression;

scanf("%d %c %d",&a,&expression,&b);
switch ( expression )
{
case '<':
if (a<b)
printf("True");
else
printf("False");
break;

//scanf("%d %c %d",&a,&expression,&b);
//switch ( expression )

case '>':
if (a>b)
printf("True");
else
printf("False");
break;

//scanf("%d %c %d",&a,&expression,&b);
//switch ( expression )

case '=':
if (a==b)
printf("True");
else
printf("False");
break;

default:
printf("Invalid Expression");
}
return 0;
}
