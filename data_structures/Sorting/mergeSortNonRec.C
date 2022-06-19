#include<stdio.h>
#include<conio.h>
#define SIZE 10
void merge_sort(int [], int );
void main()
{
	int a[SIZE],n,i;
	clrscr();
	printf("Enter how many elements");
	scanf("%d",&n);
	/* Input Array */
	for(i=0;i<n;i++)
	{
		printf("enter element %d ",i+1);
		scanf("%d",&a[i]);
	}
	merge_sort(a,n);
	/*Output Array*/
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	getch();
}
void merge_sort(int a[],int n)
{
	int i,j,k,lb1,lb2,ub1,ub2,t[SIZE],sz;
	sz = 1;
	while(sz<n)
	{
		lb1 = 0;
		k = 0;
		while((lb1+sz)<n)
		{
			lb2 = lb1+sz;
			ub1 = lb2-1;
			ub2 = (ub1+sz)<n ? (ub1+sz) : n-1;
			/*merging*/
			for(i=lb1,j=lb2; i<=ub1 && j <= ub2; k++)
			{
				if(a[i] < a[j])
					t[k] = a[i++];
				else
					t[k] = a[j++];
			}
			/*remaining of 1st file*/
			while(i<=ub1)
				t[k++] = a[i++];
			/*remaining of 2nd file*/
			while(j<=ub2)
				t[k++] = a[j++];
			lb1 = ub2 + 1;
		}
		/*copy any rem. file not in pair*/
		while(k<n)
		{
			t[k] = a[k];
			k++;
		}
		/* copy t array into a*/
		for(i=0;i<n;i++)
			a[i] = t[i];
		sz = 2*sz;
	}
}
