﻿// ConsoleApplication.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "../include/lib_func.h"

int main()
{
	// NUM までの素数を求める
	const int NUM = 10000;

	list lst;
	initialize_list(&lst);

	node nd[NUM];

	for (int i = 1; i < NUM; i++) {
		initialize_node(&nd[i], i+1);
		push_front(&lst, &nd[i]);
	}

	node* p = lst.header;
	while (p) {
		printf("%d, ", p->data);
		p = get_next(&lst, p);
	}
	printf("\n");
}
