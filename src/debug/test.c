//#define _DEBUG
#include <stdio.h>
#include "xdebug.h"




int main()
{
	printf("测试开始：\n");
	xprint("%s%d", "reoklj", 123);
	xprint("我晕");
	printf("测试结束：\n");
	
	return 0;
}
