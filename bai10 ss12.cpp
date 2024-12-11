#include <stdio.h>
void nhap(int index, int arr[100])
{
	for (int i=0; i<index; i++)
	{
		printf ("phan tu thu [%d]:",i);
		scanf ("%d",&arr[i]);
	}
}
void in(int index, int arr[100])
{
	printf ("cac phan tu trong mang:");
	for (int i=0; i<index; i++)
	{
		printf ("%d ",arr[i]);
	}
	printf ("\n");
}
void them(int index, int arr[100],int value2,int addindex)
{
	for (int i=index; i>=addindex; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[addindex]=value2;
	index++;
	for (int i=0; i<index; i++)
	{
		printf ("%d ",arr[i]);
	}
}
void sua(int index, int arr[100],int value2,int addindex)
{
	arr[addindex-1]=value2;
	for (int i=0; i<index; i++)
	{
		printf ("%d ",arr[i]);
	}
}
void xoa(int index, int arr[100],int addindex)
{
	for (int i=addindex-1; i<index; i++)
	{
		arr[i]=arr[i+1];
	}
	index--;
	for (int i=0; i<index; i++)
	{
		printf ("%d ",arr[i]);
	}
}
void tang(int index, int arr[100], int key, int k)
{
	for (int i=0; i<index; i++)
	{
		key=arr[i];
		k=i-1;
		while (k>=0 && arr[k]>key)
		{
			arr[k+1]=arr[k];
			k=k-1; 
		 } 
		arr[k+1]=key;
	}
	for (int i=0; i<index; i++)
	{
	    printf ("%d ",arr[i]);
	}
		printf ("\n"); 	
} 
void giam(int index, int arr[100], int key, int k)
{
	for (int i=0; i<index; i++)
	{
		key=arr[i];
		k=i-1;
		while (k>=0 && arr[k]<key)
		{
			arr[k+1]=arr[k];
			k=k-1; 
		 } 
		arr[k+1]=key;
	}
	for (int i=0; i<index; i++)
	{
	    printf ("%d ",arr[i]);
	}
		printf ("\n"); 	
}
void on(int index, int arr[100],int value2, int temp) 
{
	temp =-1;
	for (int i=0; i<index; i++)
	{
		if (arr[i]==value2)
		{
			temp=i ;
			printf ("phan tu muon tim o vi tri %d\n",i+1); 
		 } 
	 } 
	 if (temp==-1)
	 {
	 	printf ("khong tim thay\n"); 
	  } 
}
void on2(int index, int arr[100],int value2, int start, int end, int mid, int temp)
{
	start=0;
	end=index-1;
	temp=-1;
	while (start<=end)
	{
		mid=start+(end-start)/2;
		if (arr[mid]==value2)
		{
			temp=mid;
			break;
		}
		if (arr[mid]<value2)
		{
			start=mid+1;
		} else
		{
			start=mid-1;
		}
	}
	if (temp!=0)
		{
			printf ("%d duoc tim thay tai vi tri %d",value2,temp+1);
		} else 
		{
			printf ("khong tim thay\n");
		}
			printf ("\n");
 } 
int main()
{
	int value,arr[100];
	do
	{
		printf ("     menu\n");
		printf ("1.nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf ("2.in ra gia tri cac phan tu dang quan ly\n");
		printf ("3.them mot tu chi dinh\n");
		printf ("4.sua mot phan tu chi dinh\n");
		printf ("5.xoa mot phan tu chi dinh\n");
		printf ("6.sap xep cac phan tu\n");
		printf ("    1.giam dan\n");
		printf ("    2.tang dan\n");
		printf ("7.tim kiem phan tu nhap vao\n");
		printf ("    1.tim kiem tuyen tinh\n");
		printf ("    2.tim kiem nhi phan\n");
		printf ("8.thoat\n");
		printf ("moi bsn nhsp lua chon:");
		scanf ("%d",&value);
		switch (value)
		{
			int index, value2, addindex, value3, temp,key,k,start, end, mid;
			case 1:
				printf ("moi ban nhap so luong:");
				scanf ("%d",&index);
				nhap(index,arr);
				printf ("\n");
				break;
			case 2:
				in(index,arr);
				break;
			case 3:
				printf ("moi ban nhap gia tri muon them:");
				scanf ("%d",&value2);
				printf ("moi nhap vi tri muon them:");
				scanf ("%d",&addindex);
				them(index, arr,value2,addindex);
				break;
			case 4:
				printf ("moi ban nhap gia tri muon sua:");
				scanf ("%d",&value2);
				printf ("moi nhap vi tri muon sua:");
				scanf ("%d",&addindex);
				sua(index, arr,value2,addindex);
				break;
			case 5:
				printf ("moi nhap vi tri muon xoa:");
				scanf ("%d",&addindex);
				xoa(index, arr, addindex);
				break; 
			case 6:
				printf ("moi ban nhap 2 luwa chon(1,2):");
				scanf ("%d",&value3);
				switch (value3)
				{
					case 1:
					tang(index, arr, key, k);	
					break; 
					case 2:
					giam(index, arr, key, k);	
					break; 
					default:
					printf ("khong hop le\n");
					break; 
				 } 
				 break; 
			case 7:
				printf ("moi ban nhap 2 luwa chon(1,2):");
				scanf ("%d",&value3);
				switch (value3)
				{
					case 1:
					printf ("moi ban nhap gia tri muon tim:");
			     	scanf ("%d",&value2);
					on( index,arr,value2,temp); 	
					break; 
					case 2:
					printf ("moi ban nhap gia tri muon tim:");
			     	scanf ("%d",&value2);
					on2( index, arr, value2, start, end, mid, temp);	
					break; 
					default:
					printf ("khong hop le\n");
					break; 
				 }
				 break;
			case 8:
				printf ("thoat\n");
				return 1;
			default:
				printf ("khong hop le\n");
				break;   
		}
	} while (value!=0);
	return 0;
}
