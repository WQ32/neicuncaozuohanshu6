#include <stdio.h>


//memcpy函数 - 内存拷贝函数
// void* memcpy(void* destination,const void* source,size_t num)

//C语言标准：
// memcpy 只要处理不重叠的内存拷贝就可以（他在VS编译下也可以处理重叠的，但不是标准）
// memmove 处理重叠内存的拷贝
//内存函数 memmove - 内存移动 处理内存重叠的情况
// void* memmove(void*destination,const void*source,size_t num)

//#include <string.h>
//#include <assert.h>
//
//// memcpy函数
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

//// memmove函数
//
//#include <assert.h>
//#include <string.h>
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	//法一：
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
//	//法二：
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


////memcmp - 比较从ptr1和ptr2指针开始的num个字节 - 返回 1 0 -1
////int memcmp(const void*ptr1,const void*ptr2,size_t num)
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	// 01 00 00 00 02 00 00 00 05 00 00 00 04 00 00 00 03 00 00 00
//	int ret = memcmp(arr1, arr2, 8);
//	// 01是一个字节
//	printf("%d\n", ret);
//}

//// memset函数 - 内存设置
//
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 5);   
//	//// 把arr数组中的元素的前五个设置成'#'
//	int arr[10] = { 0 };
//	//40个字节
//	// 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ...
//	memset(arr, 1, 10);
//	// 01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 00  ...
//	// 01010101  01010101 01010000
//	// 16843009  16843009 257
//	return 0;
//}