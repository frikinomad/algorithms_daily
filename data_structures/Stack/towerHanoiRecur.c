#include<stdio.h>
#include<conio.h>
void tower(int, char, char, char);
int cnt=0;
int main()
{
	int n;
	printf("Enter how many disks ");
	scanf("%d",&n);
	tower(n,'A','B','C');
	getch();
	return 0;
}
void tower(int n, char beg, char aux, char end)
{
	if(n == 1)
	{
		printf("Step %d -> Disk 1 is transferred from %c to %c\n",++cnt,beg,end);
		return;
	}
	tower(n-1,beg,end,aux);
	printf("Step %d -> Disk %d is transferred from %c to %c\n",++cnt,n,beg,end);
	tower(n-1,aux,beg,end);
}
