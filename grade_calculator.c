#include<stdio.h>
main()
{
float mark;
printf("Emter the mark : ");
scanf("%f",&mark);
if(mark<40)
{
	printf("Grade F");
}
else if(mark>=40&&mark<=54)
{
	printf("Grade D");
}
else if(mark>=55&&mark<=69)
{
	printf("Grade C");
}
else if(mark>=70&&mark<=84)
{
	printf("Grade B");
}
else if(mark>=85&&mark<=100)
{
	printf("Grade A");
}
return 0;
}
