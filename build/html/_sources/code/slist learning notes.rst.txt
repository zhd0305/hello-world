单链表学习记录
================

 ::
 
	[dong@localhost code]$ more list1.c

	#define NULL 0
	#define LEN sizeof (struct student)

	/*2017-01-24： centos下vim不方便输入中文，用SecureCRT远程登录后就可以比
	较方便的录入中文了！ */
	/*隐式声明与内建函数‘malloc’不兼容 [默认启用],增加头文件说明 */

	#include <stdio.h>
	#include <stdlib.h>

	struct student
	{
			long num;
			float score;
			struct student * next;
	};

	int n;




	struct student * creat() /*此函数带回一个指向链表头的指针 */
	{
			struct student * head;
			struct student * p1,* p2;
			n = 0;
			p1 = p2 = (struct student *)malloc(LEN); /* malloc 开辟一个结点
	，让p1、p2都指向它 */

	 /*在一般系统中，malloc带回的是指向字符型数据的指针， 这里使用了强制类型
	转换的方法，用（struct student *）来把malloc（）带回的指向字符类型数据的
	指针强制转换为指向struct student类型数据的指针 */

			scanf("%ld,%f",&p1->num,&p1->score);
			head = NULL;

			while (p1->num!=0)
					{
					n=n+1;
					if(n== 1)head = p1;
					else p2->next = p1;
					p2 = p1;
					p1 = (struct student *)malloc(LEN);
					scanf("%ld,%f",&p1->num,&p1->score);
					}

			p2->next = NULL;
			return(head);


	}

	void print(head)
	struct student * head;
	{
			struct student *p;
			printf("\nNow,These %d records are:\n",n);
			p = head;
			if(head!=NULL)
					do
					{
					printf("%ld %5.1f\n",p->num,p->score);
					p = p->next;
					}while(p!=NULL);
	}

	main ()
	{
	  struct student * head;
	  printf("input records:\n");
	  head=creat();
	  print(head);

	}




[dong@localhost code]$ 


[dong@localhost code]$ cc list1.c ::

	[dong@localhost code]$ ./a.out
	input records:
	85698789,88
	0

	Now,These 1 records are:
	85698789  88.0
	
	
	::
	
	[dong@localhost code]$ ./a.out
	input records:
	888888888,85
	203,89
	5230147,90
	8632158,88
	863214587,95
	5632,72
	0

	Now,These 6 records are:
	888888888  85.0
	203  89.0
	5230147  90.0
	8632158  88.0
	863214587  95.0
	5632  72.0
	
	
