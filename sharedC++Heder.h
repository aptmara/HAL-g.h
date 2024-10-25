#ifndef SHARED_FILE_H
#define SHARED_FILE_H

/*
 * ----------------------------------------------
 * ファイル名: sharedC++Header.h
 * 作成日: 2024-10-25
 *
 * 更新者: 山内陽
 * 更新日: 2024-10-25
 * 作業内容:
 *  - 作成: 足し算を行う関数を追加
 *
 * ----------------------------------------------
 */


 // 必要なヘッダーファイル
#include <iostream>

/**
 * 与えられた2つの整数の合計を計算する関数。
 * @param a 第一引数の整数
 * @param b 第二引数の整数
 * @return aとbの合計
 */
int add(int a, int b) {
    return a + b;
}


#endif // SHARED_FILE_H