
#include<stdio.h>
#include<string.h>

//
//
//int main()
//{
//	//创建数组
//	//int arr[10]={1,2,3};//不完全初始化 剩下的元素默认初始化为0
//	//char arr2[5]={'a','b'};//a b 0 0 0
//	//char arr3[5]="ab";//a b \0 0 0
//	char arr4[]="abcdef";
//	printf("%d\n",sizeof(arr4));
//	printf("%d\n",strlen(arr4));
//
//	return 0;
//}
//
//
//
//int main()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//
//
//
//int main()
//{
//	//char arr[]="abcdef";//[a][b][c][d][e][f][\0]
//	//int i=0;
//	//for(i=0;i<(int)strlen(arr);i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	//二维数组创建
//	//int arr[3][4]={{1,2,3},{4,5}};
//	//char ch[5][6];
//	//int arr[]={1,2,3,4};
//	////二维数组只能省略行不能省略列
//	//int arr[][4]={1,2,3,4,5,6,7,8};
//	int arr[3][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d[%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	//int arr[10]={1,2,3};//不完全初始化，剩下的元素默认初始化为0
//	//
//	//char arr2[5]={'a','b'};
//	////char arr2[5]={97,98};//等同于上方式子
//
//	//char arr3[5]="ab";
//
//	char arr4[]="abcdef";
//	printf("%d\n",sizeof(arr4));
//	printf("%d\n",strlen(arr4));
//
//	return 0;
//}
//
//
//
void bubble_sort(int arr[],int sz)
{
	//冒泡排序
	//确定冒泡排序的趟数
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int flag=1;//假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j=0;
		for(j=0;j<sz-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=0;//本趟要排序的数据不完全有序
			}
		}
		if(flag==1)
		{
			break;
		}
	}
}
int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//对arr进行排序，升序
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


