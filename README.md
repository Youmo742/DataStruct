# 数据结构学习笔记
* 1 顺序存储，读取方便，存取也方便，但删除和插入要移动大量元素
* 2 链式结构，查找难过，必须从头开始，要不然不知道从哪去找  
但是，他删除和插入方便，只需操作指针就好。
* 3 指针千万不可忽略，不可随便想让其自动指向    NULL，它会使电脑奔溃
* 4 
/*要重复循环的话，使条件变量为初始值-+1，这样便可控制，循环次数*/  
* 5 栈的话一般用数组实现，比较方便，但缺点还是如顺序存储那样，需要物理空间连续
    普通函数为传值调用，传入参数，但不会改变参数的值  
/* 要改变值有两种方法  
1  传入指针  
2  引用传递
*/