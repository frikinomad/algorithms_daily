#include<stdio.h>
#include<conio.h>
#define SIZE 10
int partition(int [], int, int);
void quick_sort(int [], int, int);
int main(){
	int i;
	int n =7;
	int a[7] = {2,4,1,9,0,3,6};
	quick_sort(a,0,n-1);

//	/Output Array/
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	return 0;
}
int partition(int a[], int lb,int ub)
{
	int down,up,t,pivot;
	down = lb;
	up = ub;
	pivot = a[lb];
	while(down < up)
	{
		if(a[down] <= pivot && down < up)
			down++;
		if(a[up] > pivot)
			up--;
		if(down < up)
		{
			t = a[down];
			a[down] = a[up];
			a[up] = t;
		}
	}
	a[lb] = a[up];
	a[up] = pivot;
	return(up);
}
void quick_sort(int a[], int lb, int ub)
{
	int mid;
	if(lb >= ub)
		return;
	mid = partition(a,lb,ub);
	quick_sort(a,lb,mid-1);
	quick_sort(a,mid+1,ub);
}
