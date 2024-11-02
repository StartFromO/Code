// Suanfa.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stdlib.h>
using namespace std;
//a b 交换 注意：a b 不能指向同一区间 数组中慎用
//int main()
//{
//    int a = 10;
//    int b = 20;
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    std::cout <<b;
//}

//用异或计算数组中出现奇数次的数
//int main()
//{
//	int eor = 0;
//	int arr[] = { 1,2,3,1,2,3,1,2,3,1,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		eor = eor ^ arr[i];
//	}
//	std::cout << eor ;
//	return 0;
//}

//数组排序
//int main()
//{
//	int arr[] = { 4,6,3,7,5,3,6,3,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for(int i = 1 ; i < len ; i++)
//		for (int j = i - 1; j >= 0 && arr[j + 1] < arr[j]; j--)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	for(int i = 0 ; i < len ; i++)
//	std::cout << arr[i];
//	return 0;
//}


//二分法查找
//int BinarySort(int arr[] , int lenth,int target)
//{
//	if (lenth == 0)return -1;
//	int left = 0;
//	int right = lenth - 1;
//	while (left <= right)
//	{
//		int mid = left + (right + left) / 2;
//		if (arr[mid] == target)
//		{
//			return mid;
//		}
//		else if (arr[mid] < target) left = mid + 1;
//		else if (arr[mid] > target)right = mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,5 };
//	int lenth = sizeof(arr) / sizeof(arr[0]);
//	int target;
//	cout << "请输入:";
//	cin >> target;
//	cout << BinarySort(arr, lenth, target);
//	return 0;
//}


//未解决
//求数组小和:比一个数小的所有数之和
//int SmallSum(int arr[],int lenth);
//int SmallSum(int arr[], int left, int right);
//int merge(int arr[], int left, int mid, int right);
//
//int main()
//{
//	int arr[] = { 1,2,3,4,2,7,2,5,3,8 };
//	int lenth = sizeof(arr) / sizeof(arr[0]);
//	int sum = SmallSum(arr, lenth);
//	std::cout << sum << endl;
//	system("pause");
//	return 0;
//}
//
////判断数组是否为空数组或者单位长度不足
//int SmallSum(int arr[],int lenth)
//{
//	if (arr == NULL || lenth < 2)
//	{
//		return 0;
//	}
//	return SmallSum(arr, 0, lenth - 1);
//}
//
////二分法求中间值
//int SmallSum(int arr[],int left,int right)
//{
//	if (left == right) {
//		return 0;
//	}
//	int mid = left + ((right - left) >> 1);
//	return SmallSum(arr, left, mid)
//		+ SmallSum(arr, mid + 1, right)
//		+ merge(arr, left, mid, right);
//}
//
////比较函数
//int merge(int arr[], int left, int mid, int right)
//{
//	int p1 = left;
//	int p2 = mid;
//	int i = 0;
//	int tmparr[10] = { 0 };
//	int sum = 0;
//	while (p1 <= mid && p2 <= right)
//	{
//		sum += arr[p1] < arr[p2] ? (right - p2 + 1) * arr[p1] : 0;
//		tmparr[i++] = arr[p1] < arr[p2] ? arr[p1] : arr[p2];
//	}
//	while (p1 <= mid)
//	{
//		tmparr[i++] = arr[p1++];
//	}
//	while (p2 <= right)
//	{
//		tmparr[i++] = arr[p2++];
//	}
//	for (int i = 0; i < right; i++)
//	{
//		arr[left + i] = tmparr[i];
//	}
//	return sum;
//}

//未完成
//void swap(int arr[], int first, int second);
//void heapInsert(int arr[], int index);
//void heapSort(int arr[], int lenth);
//void heapify(int arr[], int index, int heapSize);
////交换数组元素
//void swap(int arr[],int first,int second)
//{
//	int tmp = arr[first];
//	arr[first] = arr[second];
//	arr[second] = tmp;
//}
//
////判断数组是否需要排序并对有需要的数组进行排序
//void heapSort(int arr[],int lenth)
//{
//	if (arr == NULL || lenth < 2)
//	{
//		return;
//	}
//	for (int i = 0; i < lenth; i++)
//	{
//		heapInsert(arr, i);
//	}
//	int heapSize = lenth;
//	//将其中一个数字去除后再将数组最后元素提取到第一位并重新进行排序
//	swap(arr, 0, --heapSize);
//	while (heapSize > 0)
//	{
//		heapify(arr, 0,heapSize);
//	}
//
//}
//
// 
////按大根堆方法进行排序
//void heapInsert(int arr[],int index)
//{
//	while (arr[index] > arr[(index - 1) / 2])
//	{
//		swap(arr, index, (index - 1) / 2);
//		index = (index - 1) / 2;
//	}
//}
//
////利用大根堆方式进行排序
//void heapify(int arr[], int index, int heapSize)
//{
//	int left = index * 2 + 1;
//	while (left < heapSize)
//	{ 
//		int lagest = arr[left] > arr[left + 1] && left + 1 < heapSize ? left : left + 1;
//		lagest = arr[lagest] > arr[index] ? lagest : index;
//		if (lagest == index)
//		{
//			break;
//		}
//		swap(arr, lagest, index);
//		index = lagest;
//		left = index * 2 + 1;
//	}
//}
//
////生成数组并打印数组
//int main()
//{
//	int arr[] = { 1,4,2,2,7,5,9 };
//	int lenth = sizeof(arr) / sizeof(arr[0]);
//	heapSort(arr, lenth);
//	for (int i = 0; i < lenth; i++)
//	{ 
//		cout << arr[i] << endl;
//	}
//	return 0;
//}


// 堆排序(C++)
//void max_heapify(int a[], int length, int i);
//void build_max_heap(int a[], int length);
//
//void heap_sort(int a[], int length) {
//    build_max_heap(a, length);// 建大根堆
//
//    // 每次将最大元素放在正确位置
//    for (int i = length - 1; i > 0; --i) {
//        int tmp = a[i];// 交换堆根与堆最后一个元素
//        a[i] = a[0];
//        a[0] = tmp;
//        max_heapify(a, i, 0);// 维护大根堆性质
//    }
//}
//// 维护大根堆性质
//void max_heapify(int a[], int length, int i) {
//    int left = 2 * i;// 左孩子位置
//    int right = left + 1;// 右孩子位置
//    int largeindex = i;// 记录当前结点与左孩子右孩子中最大
//
//    // 判断左孩子是否大于当前结点
//    if (left < length && a[left] > a[largeindex]) {
//        largeindex = left;
//    }
//    // 判断右孩子是否大于当前最大结点
//    if (right < length && a[right] > a[largeindex]) {
//        largeindex = right;
//    }
//    // 判断是否已经不需维护
//    if (largeindex != i) {
//        int tmp = a[i];// 交换
//        a[i] = a[largeindex];
//        a[largeindex] = tmp;
//        // 由于以该结点为根的子树有可能违反大根堆性质
//        // 因此递归调用max_heapify
//        max_heapify(a, length, largeindex);
//    }
//}
//// 建堆
//void build_max_heap(int a[], int length) {
//    // 对length / 2到0维护大根堆性质
//    for (int i = length / 2; i >= 0; --i) {
//        max_heapify(a, length, i);
//    }
//}
//
//int main()
//{
//    int a[] = { 1,8,3,8,4,9,3,6,8,46,7 };
//    int lenth = sizeof(a) / sizeof(a[0]);
//    heap_sort(a, lenth);
//    for (int i = 0; i < lenth; i++)
//    {
//        cout << a[i] << endl;
//    }
//    return 0;
//}



/*
 * 快速排序
 *
 * 参数说明：
 *     a -- 待排序的数组
 *     l -- 数组的左边界(例如，从起始位置开始排序，则l=0)
 *     r -- 数组的右边界(例如，排序截至到数组末尾，则r=a.length-1)
 */
//void quicksort(int* a, int l, int r)
//{
//    if (l < r)
//    {
//        int i, j, x;
//
//        i = l;
//        j = r;
//        x = a[i];
//        while (i < j)
//        {
//            while (i < j && a[j] > x)
//                j--; // 从右向左找第一个小于x的数
//            if (i < j)
//                a[i] = a[j];
//            while (i < j && a[i] < x)
//                i++; // 从左向右找第一个大于x的数
//            if (i < j)
//                a[j] = a[i];
//        }
//        a[i] = x;
//        quicksort(a, l, i - 1); /* 递归调用 */
//        quicksort(a, i + 1, r); /* 递归调用 */
//    }
//}
//
//int main()
//{
//    int i;
//    int a[] = { 30,40,70,90,20,10};
//    int ilen = (sizeof(a)) / (sizeof(a[0]));
//
//    cout << "before sort:";
//    for (i = 0; i < ilen; i++)
//        cout << a[i] << " ";
//    cout << endl;
//
//    quicksort(a, 0, ilen - 1);
//
//    cout << "after  sort:";
//    for (i = 0; i < ilen; i++)
//        cout << a[i] << " ";
//    cout << endl;
//
//    return 0;
//}


/*
 * 桶排序
 *
 * 参数说明：
 *     a -- 待排序数组
 *     n -- 数组a的长度
 *     max -- 数组a中最大值的范围
 */
//void bucketSort(int* a, int n, int max)
//{
//    int i, j;
//    int* buckets;
//
//    if (a == NULL || n < 1 || max < 1)
//        return;
//
//    // 创建一个容量为max的数组buckets，并且将buckets中的所有数据都初始化为0。
//    if ((buckets = new int[max]) == NULL)
//        return;
//    memset(buckets, 0, max * sizeof(int));
//
//    // 1. 计数
//    for (i = 0; i < n; i++)
//        buckets[a[i]]++;
//
//    // 2. 排序
//    for (i = 0, j = 0; i < max; i++)
//        while ((buckets[i]--) > 0)
//            a[j++] = i;
//
//    delete[] buckets;
//}
//
//
//int main()
//{
//    int i;
//    int a[] = { 8,2,3,4,3,6,6,3,9 };
//    int ilen = (sizeof(a)) / (sizeof(a[0]));
//
//    cout << "before sort:";
//    for (i = 0; i < ilen; i++)
//        cout << a[i] << " ";
//    cout << endl;
//
//    bucketSort(a, ilen, 10); // 桶排序
//
//    cout << "after  sort:";
//    for (i = 0; i < ilen; i++)
//        cout << a[i] << " ";
//    cout << endl;
//
//    return 0;
//}


//链表建立
//struct Node
//{
//	int key;
//	Node* next;
//};
//
//Node* createList(int arr[], int nLength);
//void printList(Node* head);
//void reversePrint(Node* head);
//void clearList(Node* head);
//
//void main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int nLength = sizeof(arr) / sizeof(arr[0]);
//	Node* head = createList(arr, nLength);
//	printList(head);
//	reversePrint(head);
//	clearList(head);
//}
//
//Node* createList(int arr[], int nLength)
//{
//	Node* head = new Node;
//	head->key = arr[0];
//	head->next = NULL;
//	Node* p = head;
//	for (int i = 1; i < nLength; i++)
//	{
//		Node* ptr = new Node;
//		ptr->key = arr[i];
//		ptr->next = NULL;
//		p->next = ptr;
//		p = p->next;
//	}
//	return head;
//}
//
//
//void printList(Node* head)
//{
//	Node* p = head;
//	while (p != NULL)
//	{
//		cout << p->key << endl;
//		p = p->next;
//	}
//}
//
//void clearList(Node* head)
//{
//	Node* p = head;
//	Node* ptr;
//	while (p != NULL)
//	{
//		ptr = p->next;
//		delete p;
//		p = ptr;
//	}
//}
//
//void reversePrint(Node* head)
//{
//	if (head != NULL)
//	{
//		if (head->next != NULL)
//			reversePrint(head->next);
//	}
//	cout << head->key << endl;
//}


//哈希表
//#include <unordered_map>
//int main()
//{
//    unordered_map<string, string> mymap = {
//        {"house", "maison"},
//        {"apple", "pomme"},
//        {"apple", "pomme"},
//        {"apple", "pomme1"},
//        {"tree", "arbre"},
//        {"book", "livre"},
//        {"door", "porte"},
//        {"grapefruit", "pamplemousse"}
//    };
//    unsigned n = mymap.bucket_count(); //求出哈希表桶数
//
//    cout << "mymap has " << n << "buckets.\n";
//    for (unsigned i = 0; i < n; i++)
//    {
//        cout << "bucket #" << i << "contains: ";
//        for (auto it = mymap.begin(i); it != mymap.end(i); ++it)//begin函数返回一个哈希表起始地址的迭代器
//        {                                                       //end函数返回哈希表结尾位置下一个元素的迭代器
//            cout << "[" << it->first << ":" << it->second << "]";
//        }
//        cout << "\n";
//    }
//    return 0;
//
//}


////二叉树创建与遍历
//typedef char ElemType;
//
////二叉树的二叉链表结构，也就是二叉树的存储结构，1个数据域，2个指针域（分别指向左右孩子）
//
//typedef  struct BiTNode
//{
//    ElemType data;
//    struct BiTNode* lchild, * rchild;
//}BiTNode, * BiTree;
//
////二叉树的建立，按前序遍历的方式建立二叉树，当然也可以以中序或后序的方式建立二叉树
//void CreateBiTree(BiTree* T)
//{
//    ElemType ch; 
//    cin >> ch;
//    if (ch == '#')
//        *T = NULL;  //保证是叶结点
//    else
//    {
//        *T = (BiTree)malloc(sizeof(BiTNode));
//        //if (!*T)
//            //exit(OVERFLOW); //内存分配失败则退出。
//        (*T)->data = ch;//生成结点
//        CreateBiTree(&(*T)->lchild);//构造左子树
//        CreateBiTree(&(*T)->rchild);//构造右子树    
//    }
//}
////表示对遍历到的结点数据进行的处理操作,此处操作是将树结点前序遍历输出
//void operation1(ElemType ch)
//{
//    cout << ch << " ";
//}
////此处在输出的基础上，并输出层数
//void operation2(ElemType ch, int level)
//{
//    cout << ch << "在第" << level << "层" << endl;
//}
//
//
////递归方式前序遍历二叉树
//void PreOrderTraverse(BiTree T, int level)
//{
//    if (T == NULL)
//        return;
//    /*此处表示对遍历的树结点进行的操作，根据你自己的要求进行操作，这里只是输出了结点的数据*/
//        //operation1(T->data);
//    operation2(T->data, level); //输出了层数
//
//    PreOrderTraverse(T->lchild, level + 1);
//    PreOrderTraverse(T->rchild, level + 1);
//}
//
////递归方式中序遍历二叉树
//
//void InOrderTraverse(BiTree T, int level)
//{
//    if (T == NULL)
//        return;
//    InOrderTraverse(T->lchild, level + 1);
//
//    //operation1(T->data);
//    operation2(T->data, level); //输出了层数
//
//    InOrderTraverse(T->rchild, level + 1);
//}
//
////递归方式后序遍历二叉树
//
//void PostOrderTraverse(BiTree T, int level)
//{
//    if (T == NULL)
//        return;
//    PostOrderTraverse(T->lchild, level + 1);
//    PostOrderTraverse(T->rchild, level + 1);
//
//    //operation1(T->data);
//    operation2(T->data, level); //输出了层数
//}
//
//
//int main()
//{
//    int level = 1; //表示层数
//    BiTree T = NULL;
//    cout << "请以前序遍历的方式输入扩展二叉树："; //类似输入AB#D##C##
//    CreateBiTree(&T);// 建立二叉树，没有树，怎么遍历
//
//    cout << "递归前序遍历输出为：" << endl;
//    PreOrderTraverse(T, level);//进行前序遍历，其中operation1()和operation2()函数表示对遍历的结点数据进行的处理操作
//    cout << endl;
//
//    cout << "递归中序遍历输出为：" << endl;
//    InOrderTraverse(T, level);
//    cout << endl;
//
//    cout << "递归后序遍历输出为：" << endl;
//    PostOrderTraverse(T, level);
//    cout << endl;
//
//    return 0;
//}



//#include"hashtable.h"
//
//int main()
//{
//    Elemtype r[12] = { {17,1},{60,2},{29,3},{38,4},{1,5},{2,6},{3,7},{4,8},{5,9},{6,10},{7,11},{8,12} };
//    HashTable H;
//    int i, p, j;
//    KeyType k;
//    H.Init_HashTable();
//    for (i = 0; i < 11; i++) //插入前11个记录  
//    {
//        j = H.Insert_Hash(r[i]);
//        if (j == -1)
//            cout << "表中已有关键字为" << r[i].key << "  " << r[i].ord << "的记录" << endl;
//    }
//
//    cout << "按哈希地址顺序遍历哈希表" << endl;
//    H.Traverse_HashTable();
//    cout << endl;
//
//    cout << "输入要查找的记录的关键字：";
//    cin >> k;
//    j = H.Search_Hash(k, p);
//    if (j == 1)
//        H.Get_Data(p);
//    else
//        cout << "无此记录" << endl;
//
//    j = H.Insert_Hash(r[11]); //插入最后一个元素  
//    if (j == 0)
//    {
//        cout << "插入失败" << endl;
//        cout << "需要重建哈希表才可以插入" << endl;
//        cout << "____重建哈希表____" << endl;
//        H.Insert_Hash(r[i]); //重建后重新插入  
//    }
//
//    cout << "遍历重建后的哈希表" << endl;
//    H.Traverse_HashTable();
//    cout << endl;
//
//    cout << "输入要查找的记录的关键字：";
//    cin >> k;
//    j = H.Search_Hash(k, p);
//    if (j == 1)
//        H.Get_Data(p);
//    else
//        cout << "该记录不存在" << endl;
//
//    cout << "____销毁哈希表____" << endl;
//    H.Destroy_HashTable();
//
//    return 0;
//}


//递归实现指数型枚举
//const int N = 20;
//int n;
//int arr[N];
//
//void dfs(int x)
//{
//	if (x > n)
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			if(arr[i] == 1)
//			printf("%5d", i);
//		}
//		printf("\n");
//		return;
//	}
//
//	arr[x] = 1;
//	dfs(x + 1);
//	arr[x] = 0;
//
//	arr[x] = 2;
//	dfs(x + 1);
//	arr[x] = 0;
//}
//
//void test()
//{
//	fflush(stdin);
//	printf("请输入所需数字");
//	cin >> n;
//	dfs(1);
//	return;
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//递归实现排列型枚举
//const int N = 20;
//int n;
//int arr[N];
//bool s[N];
//
//void dfs(int x)
//{
//	if (x > n)
//	{
//		for(int i = 1 ; i <= n ; i++)
//		printf("%5d", arr[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!s[i])
//		{
//			s[i] = true;
//			arr[x] = i;
//			dfs(x + 1);
//			s[i] = false;
//			arr[x] = 0;
//		}
//	}
//}
//
//void test()
//{
//	printf("please input n:");
//	cin >> n;
//	dfs(1);
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//递归 实现组合型枚举
//const int N = 20;
//int n,r;
//int arr[N];
//
//void dfs(int x, int start)
//{
//	if (x > r)
//	{
//		for (int i = 1; i <= r; i++)
//		{
//			printf("%5d", arr[i]);
//		}
//		printf("\n");
//	}
//
//	for (int i = start; i <= n; i++)
//	{
//		arr[x] = i;
//		dfs(x + 1, i + 1);
//		arr[x] = 0;
//	}
//}
//
//void test()
//{
//	printf("input number:");
//	cin >> n;
//	printf("input SortNumber");
//	cin >> r;
//	printf("\n");
//	dfs(1, 1);
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//选数
//const int N = 30;
//int res = 0;//存种类数
//int k,n;
//int q[N];//存数据
//int arr[N];//存答案
//
//bool is_prime(int sum)
//{
//	if (sum < 2)return false;
//	for (int i = 2; i <= sum / i; i++)
//	{
//		if (sum % i == 0)return false;
//	}
//	return true;
//}
//
//void dfs(int x,int start)
//{
//	if (x > k)
//	{
//		int sum = 0;
//		for (int i = 1; i <= k; i++)
//		{
//			sum += arr[i];
//		}
//		if (is_prime(sum))res++;
//		return;
//	}
//
//	for (int i = start; i <= n; i++)
//	{
//		arr[x] = q[i];
//		dfs(x + 1, i + 1);
//		arr[x] = 0;
//	}
//}
//
//int main()
//{
//	printf("please input k:");
//	cin >> k;
//	printf("plsase input n:");
//	cin >> n;
//	printf("\n");
//	int tmp;
//	printf("please input the data");
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tmp;
//		q[i] = tmp;
//	}
//	dfs(1, 1);
//	printf("结果有:%d种\n", res);
//	return 0;
//}


//烤鸡调料
//const int N = 20;
//int n;//美味程度
//int res = 0;//方法总数
//int arr[N];
//
//void dfs(int x,int sum)
//{
//	if (x > 11)return;
//	if (sum > n)return;
//	if (x > 10 && sum == n)
//	{
//		res++;
//		for (int i = 1; i <= 10; i++)
//		{
//			printf("%3d", arr[i]);
//		}
//		cout << endl;
//	}
//
//	for (int i = 1; i <= 3; i++)
//	{
//		arr[x] = i;
//		dfs(x + 1, sum+i);
//		arr[x] = 0;
//	}
//}
//
//int main()
//{
//	printf("input n:");
//	cin >> n;
//	dfs(1,0);
//	printf("%3d", res);
//	return 0;
//}


//翻译火星文
//const int N = 100;
//int n,m;
//int arr[N];
//bool s[N];
//int mars[N];
//int res =0;
//bool return0 = false;
//
//
//void dfs(int x)
//{
//	if (return0)return;
//
//	if (x > n) {
//		res++;
//		if (res == m + 1)
//		{
//			return0 = true;
//			for (int i = 1; i <= n; i++)
//			{
//				printf("%d", arr[i]);
//			}
//		}
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!res)i = mars[x];
//		if (!s[i])
//		{
//			s[i] = true;
//			arr[x] = i;
//			dfs(x+1);
//			s[i] = false;
//			arr[x] = 0;
//		}
//	}
//}
//
//
//int main()
//{
//	printf("input n(所有数字)");
//	cin >> n;
//	printf("intput m(所求数字)");
//	cin >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		printf("第%d个数字为:", i);
//		cin >> mars[i];
//	}
//	dfs(1);
//	return 0;
//}


//火柴棍等式
//const int N = 20;
//int n;
//int arr[N];
//int res = 0;
//int nums[10010] = { 6,2,5,5,4,5,6,3,7,6 };
//
//void dfs(int x,int sum)
//{
//	if (sum > n)return;
//	if (x > 4)return;
//	if (x > 3)
//	{
//		if (arr[1] + arr[2] == arr[3] && sum == n)
//			res++;
//		return;
//	}
//
//	for (int i = 0; i < 1000; i++)
//	{
//		arr[x] = i;
//		dfs(x + 1, sum + nums[i]);
//		arr[x] = 0;
//	}
//}
//
//int main()
//{
//	printf("please input n:");
//	cin >> n;
//	n -= 4; 
//	for (int i = 10; i <= 1000; i++)
//	{
//		nums[i] = nums[i % 10] + nums[i / 10];
//	}
//	dfs(1, 0);
//	printf("%d", res);
//	return 0;
//}


//PERKET 未完成
//const int N = 30;
//int acid, bitter;
//int n;
//int res = 1e9;
//int s[N];
//int arr[N];
//
//void dfs(int x)
//{
//	if (x > n)
//	{
//		bool has_tl = false;
//		int sum1 = 1;
//		int sum2 = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (arr[i] == 1)
//			{
//				has_tl = true;
//				sum1 *= acid;
//				sum2 += bitter;
//			}
//		}
//		return;
//	}
//
//	s[x] = 1;
//	dfs(x + 1);
//	s[x] = 0;
//
//	s[x] = 2;
//	dfs(x + 1);
//	s[x] = 0;
//}
//
//
//int main()
//{
//	printf("please input n");
//	cin >> n;
//	printf("please input acid");
//	cin >> acid;
//	printf("please input bitter");
//	cin >> bitter;
//	dfs(1);
//	return 0;
//}


//走迷宫
//const int N = 20;
//int n, m;
//int res = 0;
//char arr[N][N] = { {"##.#"},
//				   {"#..#"},
//	               {"#.##"},
//	               {"#..@"} };
//bool s[N][N];
//bool choice;
//int dx[] = { -1,0,1,0 };
//int dy[] = { 0,1,0,-1 };
//
//void dfs(int x,int y)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		int a = x + dx[i],b = y + dy[i];
//		if (a < 0 || a >= n || b < 0 || b >= m)continue;
//		if (s[a][b])continue;
//		if (arr[a][b] != '.')continue;
//
//		res++;
//		s[a][b] = true;
//		dfs(a, b);
//	}
//}
//
//int main()
//{
//	cout <<"input n:";
//	cin >> n;
//	cout << "input m:";
//	cin >> m;
//	for (int i = 0; i < n; i++)
//	{
//		if (choice == true)break;
//		for(int j = 0 ; j < m;j++)
//		{
//			if (arr[i][j] == '@')
//			{
//				s[i][j] = true;
//				dfs(i, j);
//				choice = true;
//			}
//		}
//	}
//	res++;
//	printf("%d", res);
//	return 0;
//}


//洪水灌溉
//const int N = 30;
//int n, m;
//char arr[N][N] = { 
//	{"......"},
//	{"WW..WW"},
//	{"...WWW"},
//	{"W....W"},
//	{"..WWWW"},
//	{"WWWWWW"}
//};
//bool s[N][N];
//int res = 0;
//int dx[] = { 1,1,1,0,0,0,-1,-1,-1 };
//int dy[] = { 1,0,-1,1,0,-1,1,0,-1 };
//
//void dfs(int x, int y)
//{
//	for (int i = 0; i < 8; i++)
//	{
//		int a = x + dx[i], b = y + dy[i];
//		if (a < 0 || a >= n || b < 0 || b >= m)continue;
//		if (s[a][b])continue;
//		if (arr[a][b] == 'W')continue;
//
//		res++;
//		s[a][b] = true;
//		dfs(a, b);
//	}
//}
//
//int main()
//{
//	cout << "input n:";
//	cin >> n;
//	cout << "input m:";
//	cin >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] == '.'&& !s[i][j] )
//			{
//				dfs(i, j);
//			}
//		}
//	}
//	printf("%d", res);
//	return 0;
//}

 

//dfs优化
//const int N = 30;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int f[N];
//	f[1] = 1;
//	f[2] = 2;
//	if (n == 1 || n == 2)
//	{
//		printf("%d", f[n]);
//		return 0;
//	}
//
//
//	int all = 0, tmp1 = 1, tmp2 = 2;
//	for (int j = 3; j <= n; j++)
//	{
//		all = tmp1 + tmp2;
//		tmp1 = tmp2;
//		tmp2 = all;
//	}
//
//
//	for (int i = 3; i <= n ; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	printf("%d\n", f[n]);
//	printf("%d", all);
//	return 0;
//}


//#include<algorithm>
//const int N = 100;
//int n = 4;
//int home[] = { 0,10,7,8,14 };
//int f[N];
//
//int dfs(int x)
//{
//	if (x > n)	return 0;
//	else return max(dfs(x + 1), dfs(x + 2) + home[x]);
//	
//}
//
//int main()
//{
//	//dfs搜索
//	/*int res = dfs(1);
//	printf("%d\n", res);*/
//
//	//倒序递推dp
//	/*memset(f, 0, sizeof(f));
//	for (int i = n; i>=1;i--)
//	{
//		f[i] = max(f[i + 1], f[i + 2] + home[i]);
//	}
//	printf("%d", f[1]);*/
//
//	//空间优化
//	/*int tmp1 = 0, tmp2 = 0, newf = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		newf = max(tmp1 , tmp2 + home[i]);
//		tmp2 = tmp1;
//		tmp1 = newf;
//	}
//	printf("%d", newf);
//	return 0;*/
//}


//#include<algorithm>
//const int N = 100;
//int arr[N][N] = { {0}, {0,1},{0,5,2},{0,3,7,2},{0,4,2,7,4} };
//int n = 4;
//int f[N];
//int mem[N][N];
//int p[N];
//
//int dfs(int x,int y)
//{
//	if (mem[x][y])return mem[x][y];
//	if (x > n || y > n) {
//		return 0;
//	}
//	int sum = 0;
//	if (x <= n && y <= n)
//	{
//		sum = max(dfs(x + 1, y), dfs(x + 1, y +1)) + arr[x][y];
//	}
//	mem[x][y] = sum;
//	return sum;
//}
//
//int main()
//{
//	/*int res =dfs(1,1);
//	printf("%d",res);*/
//
//	/*for (int i = n; i >=1 ; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			f[i][j] = max(f[i + 1][j], f[i +1][j +1]) + arr[i][j];
//		}
//	}
//	printf("%d", f[1][1]);*/
//
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			f[j] = max(f[j], f[j + 1]) + arr[i][j];
//		}
//	}
//	printf("%d", f[1]);
//		return 0;
//}



//01背包问题
//#include<algorithm>
//const int N = 30;
//int v[N] = { 0,1,2,3,4 };
//int w[N] = { 0,2,3,4,5 };
//int volume;
//int n = 4;
//int mem[N][N];
//
//
//int dfs(int x,int spv)
//{
// if(mem[x][spv])return mem[x][spv];
//	if (x > n)return 0;
//	else if (spv < v[x])
//		return dfs(x + 1, spv);
//	else if (spv >= v[x])
//		return mem[x][spv] = max(dfs(x + 1, spv), dfs(x + 1, spv - v[x]) + w[x]);
//}
//
//int main()
//{
//	cin >> volume;
//	int res = dfs(1, volume);
//	printf("%d", res);
//	return 0;
//}


//01背包问题优化
//#include<algorithm>
//const int N = 100;
//int v[N] = { 0,1,2,3,4 };
//int w[N] = { 0,2,3,4,5 };
//int volume;
//int f[N][N];
//int fp[N];
//int n = 4;
//
//int main()
//{
//	cin >> volume;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= volume; j++)
//		{
//			if (j < v[i])f[i][j] = f[i - 1][j];
//			else f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i]]+ w[i]);
//		}
//	}
//	cout << f[n][volume] << endl;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = volume; j >= 0; j--)
//		{
//			if (j >= v[i])fp[j] = max(fp[j], fp[j - v[i]] + w[i]);
//		}
//	}
//	cout << fp[volume] << endl;
//	return 0;
//}

