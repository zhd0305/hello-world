数据结构与算法分析学习笔记
##########################################
| Data Structures and Algorithm Analysis in C Second Edition
| （美）Mark Allen Weiss 著 冯舜玺 译
| 原书第2版 机械工业出版2004.1（2016年10月第1版第32次印刷）
 


第1章 引论
************************************

第2章 算法分析
************************************

第3章 表、栈和队列
************************************

抽象数据类型
==============================
| 程序模块化
| 程序---模块（module）
| 抽象数据类型（abstract data type ADT）是一些操作的集合。



表 ADT
==============================
| 空表 empty list
| A\ :sub:`i+1`\ 后续A\ :sub:`i`\ ;
| A\ :sub:`i-1`\ （i<N）前驱A\ :sub:`i`\（i>1）;

表的简单数组实现
---------------------------------------

链表
---------------------------------------
| 链表 linked list 
| 每一个结构（结构体）均含有表元素和指向包含该元素后继元的结构的指针。next指针，最后一个单元的next指针指向null；
| 指针变量就是包含存储另外某个数据的地址的变量。

| 

程序设计细节
---------------------------------------
| 增加标志结点
| 表头 header  或哑结点 dummy node


::

	#ifndef _List_H
	
	struct Node;
	typedef struct Node *PtrToNode;
	typedef PtrToNode List;
	typedef PtrToNode Position;
	
	List MakeEmpty( List L );
	int IsEmpty( List L );
	int IsLast( Position P, List L );
	Position Find( ElemenType X, List L );
	void Delete( ElemenType X,List L );
	Position FindPrevious( ElemenType X,List L );
	void Insert( ElemenType X,List L, Position P );
	void DeleteList( List L );
	Position Header( List L );
	Position First( List L );
	Position Advance( Position P );
	ElemenType Retrieve( Position P );
	
	#endif   /*  _List_H*/
	
	/* Place in the implementation file */
	struct Node
	{
		ElemenType Element;
		Position Next;
	};
	


链表的类型声明
	
	
::

	/*  Return true if L is empty */
	int
	IsEmpty( List L )
	{
		return L->Next == NULL;
	}

测试一个链表是否是空表的函数

::

	/* Return true if P is the last position in list L  */
	/* Parameter L is unused in this implementation */
	
	int
	IsLast( Position P, List L )
	{
		return P->Next == NULL;
	}


测试当前位置是否是链表的末尾的函数

::

		/* Return Position of X in L; NULL if not found */
		
		Position
		Find( ElemenType X, List L )
		{
			Position P;
	/* 1*/	P = L->Next;
	/* 2*/	while( P != NULL && P->Element != X )
	/* 3*/		P = P->Next;

	/*4 */	return P;
		}
	

Find 例程


::

	/* Delete first occurrence of X from a list */
	/* Assume use of a header node */
	void
	Delete( ElemenType X,List L )
	{
		Position P, TmpCell;
		P = FindPrevious( X,L );
		if( !IsLast( P,L )) 	/*Assumption of header use */
		{	                    /*X is found; delete it */
			TmpCell = P->Next;
			P->Next = TmpCell->Next;	/* Bypass delete cell */
			free( TmpCell );
		}
	}
	
链表的删除例程

::

	/* If X is not found,then Next field of return */
	/* Position is NULL */
	/* Assumes a header */
	
		Position
		FindPrevious( ElemenType X, List L )
		{
			Position P;
	/* 1*/	P = L;
	/* 2*/	while( P->Next != NULL && P->Next->Element != X )
	/* 3*/		P = P->Next;
	
	/* 4*/		return P;
	
		}
	

FindPrevious---为与Delete 一起使用的Find例程

::

		/* Insert (after legal position P */
		/* Header implementation assumed */
		/* Parameter L is unused in this implementation*/
		
		void
		Insert(ElemenType X, List L, Position P )
		{
			Position TmpCell;
			
	/* 1*/	TmpCell = malloc( sizeof( struct Node ));
	/* 2*/	if( TmpCell == NULL )
	/* 3*/		FatalError( "Out of space!!!");
	
	/* 4*/	TmpCell->Element = X;
	/* 5*/	TmpCell-Next = P->Next;
	/* 6*/	P->Next = TmpCell;
	/* */	
		}
	
	
链表的插入例程
	
	
	
	
	
第4章 树
************************************

第5章 散列
************************************

第6章 优先队列（堆）
************************************

第7章 排序
************************************

第8章 不相交集 ADT
************************************

第9章 图论算法
************************************



第10章 算法设计技巧
************************************

第11章 摊还分析
************************************

第12章 高级数据结构及其实现
************************************

