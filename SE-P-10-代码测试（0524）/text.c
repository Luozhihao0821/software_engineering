#define _CRT_SECURE_NO_WARNINGS
#define N 3
#include<stdio.h>
int main() {
	/*int arr[3][3] = { {1,4,3},
		              {2,5,6},
		              {7,9,8} };*/
	int i, j, arr[N][N];
	for (i = 0; i < N; i++) {//����һ��N*N�ľ���
		for (j = 0; j < N; j++) {
			scanf("%d ", &arr[i][j]);
		}
	}
	for (i = 0; i < N; i++) {//�������
		for (j = 0; j < N; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int min,x,flag=0;//flagΪ�жϰ����Ƿ��ҵ�
	for (i = 0; i < N; i++) {
		int max = arr[i][0],y=0;
		for (j = 0; j < N; j++) {
			if (arr[i][j] > max) {//�ҳ�һ��������һ����
				max = arr[i][j];
				y = j;
			}
		}
		min = max;
		for (x = 0; x < N; x++) {//�ҳ�����Ǹ�����������С����
			if (arr[x][y] < min) {
				min = arr[x][y];
				break;
			}
		}
		if (max == min) {//�Ƚ����������Ƿ���ȣ������Ϊ����
			printf("��:%d,��:%d,point��%d", i+1,y+1,max);
			flag = 1;//�ҵ�����flag��Ϊ1
			break;
		}
	}
	if (flag == 0)//flag=0����û�ҵ�
		printf("not found!");
	return 0;
}
