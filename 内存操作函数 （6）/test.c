#include <stdio.h>


//memcpy���� - �ڴ濽������
// void* memcpy(void* destination,const void* source,size_t num)

//C���Ա�׼��
// memcpy ֻҪ�����ص����ڴ濽���Ϳ��ԣ�����VS������Ҳ���Դ����ص��ģ������Ǳ�׼��
// memmove �����ص��ڴ�Ŀ���
//�ڴ溯�� memmove - �ڴ��ƶ� �����ڴ��ص������
// void* memmove(void*destination,const void*source,size_t num)

//#include <string.h>
//#include <assert.h>
//
//// memcpy����
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//// memmove����
//
//#include <assert.h>
//#include <string.h>
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	//��һ��
//	/*if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}*/
//	//������
//	if (dest<src && dest>(char*)src + count)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	my_memmove(arr + 2, arr, 20);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////memcmp - �Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ� - ���� 1 0 -1
////int memcmp(const void*ptr1,const void*ptr2,size_t num)
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	// 01 00 00 00 02 00 00 00 05 00 00 00 04 00 00 00 03 00 00 00
//	int ret = memcmp(arr1, arr2, 8);
//	// 01��һ���ֽ�
//	printf("%d\n", ret);
//}

//// memset���� - �ڴ�����
//
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 5);   
//	//// ��arr�����е�Ԫ�ص�ǰ������ó�'#'
//	int arr[10] = { 0 };
//	//40���ֽ�
//	// 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ...
//	memset(arr, 1, 10);
//	// 01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 00  ...
//	// 01010101  01010101 01010000
//	// 16843009  16843009 257
//	return 0;
//}