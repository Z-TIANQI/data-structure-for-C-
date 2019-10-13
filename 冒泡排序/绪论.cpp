#include <iostream>

using namespace std;

void bubblesort1A(int A[], int n);		// 冒泡排序（版本1A）：0 < n

int main(){
	

	return 0;
}

void bubblesort1A(int A[], int n) {
	bool sorted = false;// 整体排序标志，首先假定尚未排序
	while (!sorted) {// 在尚未确认已全局排序之前，逐趟进行扫面交换
		sorted = true;// 假定已经排序完成
		for (int i = 1; i < n; i++) {// 自左向右逐对检查当前范围A[0, n)内的各相邻元素
			if (A[i - 1] > A[i]) {         
				swap(A[i - 1], A[i]);
				sorted = false;
			}
		}
		n--;
	}
}// 借助布尔型标志位sorted，可提前退出。
