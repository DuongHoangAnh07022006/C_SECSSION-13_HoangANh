#include <stdio.h>
void nhap (int hang, int cot,int arr[100][100])
{
	for (int i=0; i<hang; i++)
	{
		for (int j=0; j<cot; j++)
		{
			printf ("[%d][%d]=",i,j);
			scanf ("%d",&arr[i][j]);
		}
	}
}
void in(int hang, int cot, int arr[100][100])
{
	for (int i=0; i<hang; i++)
	{
		for (int j=0; j<cot; j++)
		{
			printf ("%d ",arr[i][j]);
	    }
	    printf ("\n");
    }
}
void ingoc(int hang, int cot, int arr[100][100])
{
	printf ("%d ",arr[0][0]);
	printf ("%d\n",arr[0][cot-1]);
	printf ("%d ",arr[hang-1][0]);
	printf ("%d\n",arr[hang-1][cot-1]);
}
void inbien(int hang, int cot, int arr[100][100])
{
	for (int i=0; i<cot; i++)
	{
		printf ("%d ",arr[0][i]);
	}
	printf ("\n");
	for (int i=0; i<cot; i++)
	{
		printf ("%d ",arr[hang-1][i]);
	}
	printf ("\n");
	for (int i=1; i<hang-1; i++)
	{
		printf ("%d ",arr[i][0]);
	}
	for (int i=1; i<hang-1; i++)
	{
		printf ("%d ",arr[i][cot-1]);
	}
	printf ("\n");
}
void incheo(int hang, int cot, int arr[100][100])
{
	if (hang==cot)
	{
		for (int i=0; i<hang; i++)
		{
			printf ("%d",arr[i][i]);
			printf ("\n");
		}
	} else
	{
		printf ("khong hop le\n");
	}
}
void insonguyento(int hang, int cot, int arr[100][100])
{
	for (int i=0; i<hang; i++)
	{
		for (int j=0; j<cot; j++)
		{
		    if (arr[i][j]<10)
		    {
		    	switch (arr[i][j])
		    	{
		    		case 2:
		    			printf ("%d \n",arr[i][j]);
		    			break;
		    		case 3:
						printf ("%d \n",arr[i][j]);
		    			break;
		    		case 5:
						printf ("%d \n",arr[i][j]);
		    			break;
		    		case 7:
						printf ("%d \n",arr[i][j]);
		    			break;
				}
			} else if (arr[i][j]%2!=0 && arr[i][j]%3!=0 && arr[i][j]%5!=0 && arr[i][j]%7!=0) 
			{
				printf ("%d \n",arr[i][j]);
			}
		}
	}
	printf ("\n");
}
int main()
{
	int value;
do
{
	printf ("      menu\n");
	printf ("1.nhap cac phan tu cua mang\n");
	printf ("2.in cac phan tu theo ma tran\n");
	printf ("3.in ra cac phan tu ow goc theo ma tran\n");
	printf ("4.in cac pahan tu duong bien theo ma tran\n");
	printf ("5.in ra cac pahn tu nam tren duong cheo chinh theo ma tran\n");
	printf ("6.in ra cac pahn tu la so nguyen to theo ma tran\n");
	printf ("7.thoat\n");
	printf ("moi ban nhap lua chon:");
	scanf ("%d",&value);
	switch (value)
	{
		int hang, cot, arr[100][100];
		case 1:
			printf ("moi ban nhap so hang:");
			scanf ("%d",&hang);
			printf ("moi ban nhap so cot:");
			scanf ("%d",&cot);
			nhap (hang,cot,arr);
			printf ("\n");
			break;
		case 2:
			in(hang,cot,arr);
			printf ("\n");
			break;
		case 3:
			ingoc(hang,cot,arr);
			break;
		case 4:
			inbien(hang,cot,arr);
			break;
		case 5:
			incheo(hang,cot,arr);
			break;
		case 6:
			insonguyento(hang,cot,arr);
			break;
		case 7:
			return 1;
			break;
		default:
			printf ("khong hop le");
			break;
	}
}while (value!=0);
return 0;	
}
