#include <iostream>

using namespace std;

void bubblesort1A(int A[], int n);		// ð�����򣨰汾1A����0 < n

int main(){
	

	return 0;
}

void bubblesort1A(int A[], int n) {
	bool sorted = false;// ���������־�����ȼٶ���δ����
	while (!sorted) {// ����δȷ����ȫ������֮ǰ�����˽���ɨ�潻��
		sorted = true;// �ٶ��Ѿ��������
		for (int i = 1; i < n; i++) {// ����������Լ�鵱ǰ��ΧA[0, n)�ڵĸ�����Ԫ��
			if (A[i - 1] > A[i]) {         
				swap(A[i - 1], A[i]);
				sorted = false;
			}
		}
		n--;
	}
}// ���������ͱ�־λsorted������ǰ�˳���
