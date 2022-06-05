#define _CRT_SECURE_NO_WARNINGS
#define N 3
#include<stdio.h>
int main() {
	/*int arr[3][3] = { {1,4,3},
		              {2,5,6},
		              {7,9,8} };*/
	int i, j, arr[N][N];
	for (i = 0; i < N; i++) {//输入一个N*N的矩阵
		for (j = 0; j < N; j++) {
			scanf("%d ", &arr[i][j]);
		}
	}
	for (i = 0; i < N; i++) {//输出矩阵
		for (j = 0; j < N; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int min,x,flag=0;//flag为判断鞍点是否找到
	for (i = 0; i < N; i++) {
		int max = arr[i][0],y=0;
		for (j = 0; j < N; j++) {
			if (arr[i][j] > max) {//找出一行中最大的一个数
				max = arr[i][j];
				y = j;
			}
		}
		min = max;
		for (x = 0; x < N; x++) {//找出最大那个数所在列最小的数
			if (arr[x][y] < min) {
				min = arr[x][y];
				break;
			}
		}
		if (max == min) {//比较这两个数是否相等，相等则为鞍点
			printf("行:%d,列:%d,point：%d", i+1,y+1,max);
			flag = 1;//找到鞍点flag置为1
			break;
		}
	}
	if (flag == 0)//flag=0鞍点没找到
		printf("not found!");
	return 0;
}
