#include<stdio.h>
#include <stdlib.h>
#pragma region 第1問
//   1011 + 0101 =1 0000   = 16
// 110100 + 11011 =100 1111 = 128 + 15= 143
//   1011 + 110011 =11 1110  =  48 + 14= 62
#pragma endregion
#pragma region 第2問
// ff + ff= 1111 1111+1111 1111 = 1 1111 1110 =  1020
// ed + 10= 1110 1101+0001 0000 =   1111 1101 =  509 
//563 + cd= 0101 0110 0011+1100 1101= 0110 0011 0000 = 3120  
#pragma endregion
#pragma region 第4問
//char、int、float、doubleのサイズはそれぞれいくつか答えよ。
//char  = -128 ～ 127
//int   = -2147483648 ～ 2147483647
//float = 3.4E-38 ～ 3.4E+38
//double= 1.7E-308 ～ 1.7E+308
#pragma endregion
#pragma region 第4問
//int judge = true;
//if (judge)
//{
//	①
//}
//else
//{
//	②
//}
//①と②どちらが処理されるか答えよ。
//①が処理される
//理由はjudgeがtrueになっているから
#pragma endregion
#pragma region 第5問

	//for (int i = 0; i < 100; i = i + 3)
	//{

	//	①
	//}
	//①の処理が何回実行されるか答えよ。
	//34回

#pragma endregion
#pragma region 第6問

	//int i = 0;
	//while (i < 100)
	//{
	//	i = i + 5;
	//	j++;
	//	①
	//}
	//①の処理は何回実行されるか答えよ。
	//20回

#pragma endregion
#pragma region 第7問
//int array[4][5];
//上記配列のサイズはいくつか答えよ
//4×5=20
#pragma endregion
#pragma region 第8問
//int array[5][20]
//for (int i = 0; i < 5; ++i)
//{
//	for (int j = 0; j < ①; ++j)
//	{
//		array[i][j] = i * ① + j;
//	}
//}
//①には何という数字が入るか答えよ。
//①=20


#pragma endregion
#pragma region 第9問
//① testFunc(int a)
//{
//	return;
//}
//①にはint, float, voidのどれが正しいか答えよ。
//①=void
#pragma endregion
#pragma region 第10問
//２点間の距離を求める関数を作成してください。
//int main()
//{
//	add();
//}
//void add()
//{float Player_Position[2] = {10,20};
//	float Enemy_Position[2] =  {5,17} ;
//	float Position_X = 0;
//	float Position_Y = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		if (i == 0)
//		{
//			Position_X = Player_Position[i] - Enemy_Position[i];
//			printf("%d\n", Position_X);
//		}
//		else
//		{
//			Position_Y = Player_Position[i] - Enemy_Position[i];
//			printf("%d\n", Position_Y);
//		}
//
//	}
//}
#pragma endregion
#pragma region 第11問
//カード構造体を作成してください。
//このカードはトランプのカードのことです。
//情報として、なんのカードなのかを持っていてください。
//スペードの7である、ハートの13であるなど。
//この構造体には現在の自分の情報を設定する処理と、
//現在の自分の情報を開示する処理を作ってください。
//
//トランプの山札の構造体を作成してください。
//その際カードには先ほど作った構造体を使用してください。
//以下の条件を満たしておくこと。
//トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
//Card card[53];
//
//シャッフル機能を実装する。
//card[53]にランダムにカード情報を付与してください。
//card[0]がクラブの6、card[1]がハートの5といったように。
//その際同じカードは存在しないようにしてください。


//課題
//////////////////////////////
int b=0;
struct my_Joker
{
public:
	//set
	int  list_Download_1(int i){ return list_01[i]; };
	int  list_Download_2(int i) { return list_02[i]; };
	int  list_Download_3(int i) { return list_03[i]; };
	//get
	void list_updata_1(int num, int j) { list_01[num] = j; };
	void list_updata_2(int num, int j) { list_02[num] = j; };
	void list_updata_3(int num, int j) { list_03[num] = j; };
	//Update
	void list_up1(int i) { list_02[list_01[i]]; };
	void list_up2(int i) { list_03[list_01[i]]; };
private:
	int list_01[53] = {0};
	int list_02[53] = {0};
	int list_03[53] = {0};
};
//シャッフルスクリプト
void shuffle(int array[], int size) {
	//シャッフル
	for (int i = 0; i < size; i++) {

		int j = rand() % size;
		int t = array[i];
		array[i] = array[j];
		array[j] = t;
	}
}
int main()
{
	my_Joker joker;
	int list[53] = {0};
	for (int i = 0; i < 53; i++)
	{
		list[i] = i + 1;
		joker.list_updata_1(i,i+1);
	}
	for (int i = 0; i <= 13; i++)
	{
		joker.list_updata_2(i, 0);
		joker.list_updata_2(i + 13, 1);
		joker.list_updata_2(i + 26, 2);
		joker.list_updata_2(i + 39, 3);
		joker.list_updata_3(i,i);
		joker.list_updata_3(i+13,i);
		joker.list_updata_3(i+26,i);
		joker.list_updata_3(i+39,i);
	}
	joker.list_updata_2(53,100 );
	joker.list_updata_3(53,100);
	/*for (int i = 0; i < 53; i++) {
		printf("%d,", list[i]);
	}
	return 0;*/
	/*for (int i = 0; i < 53; i++)
	{
		printf("文字、%d数字、%d\n", joker.list_Download_2(joker.list_Download_1(i)), joker.list_Download_2(joker.list_Download_1(i)));
	}*/
	shuffle(list, 53);
	/*for (int i = 0; i < 53; i++) {
		printf("%d,", list[i]);
	}*/
	
	for (int i = 0; i < 53; i++)
	{
		joker.list_updata_1(i, list[i]);
	}
	for (int i = 0; i < 53; i++)
	{
		printf("番号:%d,文字:%d,数字:%d\n",joker.list_Download_1(i), joker.list_Download_2(joker.list_Download_1(i)), joker.list_Download_3(joker.list_Download_1(i)));
	}
	//printf("%b\n",b);
	while (true)
	{
		int i = 0;
		printf("どのカードがいいですか0~52まで引けます\n");
		printf("又は、ほかの数字を押すとシャッフルか終わるのを選べます\n");
		scanf_s("%d" ,&i);
		if (i <= 52)
		{
			switch (joker.list_Download_2(i))
			{
			case 0:
				printf("マーク:スペード,数字:%d\n", joker.list_Download_3(i));
				break;
			case 1:
				printf("マーク:ダイヤ,数字:%d\n", joker.list_Download_3(i));
				break;
			case 2:
				printf("マーク:クラブ,数字:%d\n", joker.list_Download_3(i));
				break;
			case 3:
				printf("マーク:ハート,数字:%d\n", joker.list_Download_3(i));
				break;
			case 100:
				printf("カードジョーカー\n");
				break;
			default:
				break;
			}
		}
		else 
		{
			int m_test = 0;
			printf("終わりますか=>0、シャッフルしますか=>1\n");
			scanf_s("%d", &m_test);
			if (m_test == 0)
			{
				break;
			}
			else if (m_test == 1)
			{
				shuffle(list, 53);
				for (int i = 0; i < 53; i++)
				{
					joker.list_updata_1(i, list[i]);
				}
				for (int i = 0; i < 53; i++)
				{
					printf("番号:%d,文字:%d,数字:%d\n", joker.list_Download_1(i), joker.list_Download_2(joker.list_Download_1(i)), joker.list_Download_3(joker.list_Download_1(i)));
				}
			}
			else
			{
				printf("押し間違えています\n");
			}
			
		}
	}
	return 0;
}

#pragma endregion




