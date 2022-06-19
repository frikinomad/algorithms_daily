#include<stdio.h>
#include<conio.h>
#define SIZE 10
void merging(int [], int ,int ,int , int);
void mergesort(int [],int , int );
void main()
{
	int a[SIZE],i,n;
	printf("Enter how many elements");
	scanf("%d",&n);
	/*Input Array*/
	for(i=0;i<n;i++)
	{
		printf("enter element %d ",i+1);
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	/*Output Array*/
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
}
void merging(int a[], int l1,int u1,int l2, int u2)
{
	int i,j,k,t[SIZE];
	for(i=l1,j=l2,k=l1;i<=u1 && j <= u2;k++)
	{
		if(a[i]<a[j])
			t[k]=a[i++];
		else
			t[k]=a[j++];
	}
		/*Remaining of first file*/
		while(i<=u1)
			t[k++] = a[i++];
		/*Remaining of second file*/
		while(j<=u2)
			t[k++] = a[j++];
		for(i=l1;i<=u2;i++)
			a[i] = t[i];
	}
	void mergesort(int a[],int lb, int ub)
	{
		int mid;
		if(lb<ub)
		{
			mid = (lb+ub)/2;
			mergesort(a,lb,mid);
			mergesort(a,mid+1,ub);
			merging(a,lb,mid,mid+1,ub);
		}
	}
