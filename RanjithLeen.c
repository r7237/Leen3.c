#include<stdio.h>
#include<conio.h>
void main()
{
int mins,hrs,rmin;
printf("Enter the minutes:");
scanf("%d",&mins);
hrs=mins/60;
rmin=mins%60;
printf("%d %d",hrs,rmin);
getch ();
}

