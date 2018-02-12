
#include<stdio.h>
void main() 
{
int x[100],n,i;
float mean(int,int[]);
float median(int,int[]);
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&x[i]);
printf("mean=%f\n",mean(n,x));
printf("median=%f\n",median(n,x));
getch();
}

float mean(int m, int a[]) {
    int sum=0, i;
    for(i=0; i<m; i++)
        sum+=a[i];
    return((float)sum/m);
}
