
---

# プロジェクト名 - C++ ヘッダーファイル共同作成

## 目次

1. [プロジェクト概要](#プロジェクト概要)
2. [開発環境](#開発環境)
3. [GitHub での作業ルール](#GitHub-での作業ルール)
4. [コーディングルール](#コーディングルール)
5. [ファイルの構成](#ファイルの構成)
6. [変更方法](#変更方法)
7. [レビューとマージ](#レビューとマージ)
8. [トラブルシューティング](#トラブルシューティング)
9. [参考文献](#参考文献)

---

## プロジェクト概要

このプロジェクトは、**1つの C++ ヘッダーファイル**を大人数で共同開発することを目的としています。このファイルには、汎用的な関数やクラスが含まれる予定です。

目標は、**高品質で効率的なコードを提供すること**です。初心者から経験者まで、すべての開発者が一貫したルールに従ってコードを記述することで、メンテナンスしやすいファイルを作成します。

## 開発環境

- **C++ バージョン**: C++17 以上
- **推奨 IDE**: Visual Studio Code、CLion、Xcode
- **Git**: GitHub を使用してバージョン管理を行います。
- **コンパイラ**: g++ または clang++ を推奨します。

## GitHub での作業ルール

### 1. ブランチの運用

- **main ブランチ**: 常に最新で安定した状態を保ちます。直接の変更は禁止です。
- **開発ブランチ**: 各自が作業する際には、`feature/機能名`の形式でブランチを作成してください。

### 2. プルリクエスト (Pull Request)

- 変更を main ブランチに反映する際は、必ずプルリクエストを作成します。
- プルリクエストには、変更内容の要約と背景を記載してください。
- 最低1人のレビューアから承認を受ける必要があります。

### 3. コミットメッセージの形式

コミットメッセージは以下の形式に従ってください。

```
[タグ] 説明 (例: [修正] 配列初期化のバグを修正)
```

| タグ | 意味 |
|------|------|
| [追加] | 新しい機能を追加した場合 |
| [修正] | バグ修正 |
| [変更] | コードのロジックを変更した場合 |
| [削除] | 機能を削除した場合 |

## ファイルの構成

```
プロジェクトフォルダ/
├── main.cpp             # サンプルのメインファイル
├── include/
│   └── shared_file.h    # 共有のヘッダーファイル
└── README.md            # この README ファイル
```

## 変更方法

1. 自分のブランチを作成します (`feature/機能名`)。
2. `include/shared_file.h` を編集し、適切なコーディングルールに従って記述します。
3. コミットしてプッシュします (`git push origin feature/機能名`)。
4. GitHub 上でプルリクエストを作成し、レビューを依頼します。

## レビューとマージ

1. レビューアがコードを確認し、コメントや改善提案を行います。
2. 必要な変更があれば修正して再度コミットします。
3. 承認後、レビューアが main ブランチにマージします。

## トラブルシューティング

- **競合 (Conflict)** が発生した場合は、GitHub の指示に従って競合を解決してください。
- **ビルドエラー** が発生した場合、インデントの確認、未定義の変数の削除などを行ってください。

## 参考文献

- [C++ コーディングスタイルガイド (Google)](https://google.github.io/styleguide/cppguide.html)
- [Git コミットメッセージの書き方](https://chris.beams.io/posts/git-commit/)

---

この README がプロジェクトの進行に役立つことを願っています。質問があれば、GitHub の Issue やディスカッション機能を使用してください。
---

## コーディングルール

### 1. 命名規則

命名は、コードの可読性と理解を助けるために重要です。

- **クラス名**: PascalCase を使用します（例: `MyClass`）。直感的で、役割を示す名前をつけましょう。
- **関数名**: camelCase を使用します（例: `calculateResult`）。動詞を先頭にして、関数が何を行うのかを表現します。
- **変数名**: 基本的にはcamelCase で命名しますが、長くなる場合は略語を避け、分かりやすい名前にします（例: `totalAmount`）。
- **定数**: 全て大文字で、単語間はアンダースコアで区切ります（例: `MAX_SIZE`）。
- **グローバル変数**: 原則として使用禁止ですが、どうしても必要な場合はg_を接頭辞として使用します（例: `g_globalCounter`）。

### 2. コードのインデントとスペース

- **インデント**: スペース4つを使用します。タブは使わず、全員が同じ間隔でコードを見やすくします。
- **ブレース `{}`**: 開きブレースは同じ行に置き、閉じブレースは新しい行に置きます。コードブロックの開始と終了が分かりやすくなります。

    ```cpp
    if (condition) {
        // 処理
    } else {
        // 他の処理
    }
    ```

- **スペース**:
  - 演算子の前後に1つずつスペースを入れます（例: `a + b`）。
  - カンマの後にもスペースを入れます（例: `int a, b, c;`）。

### 3. コメントの記述

コードの意図を明確にするため、適切にコメントを記述します。

- **関数のコメント**: 各関数には、機能や引数、戻り値についての説明を上部に記載します。
- **変数のコメント**: 特殊な用途の変数や、理解が難しい変数には説明を追加します。

    ```cpp
    /**
     * 与えられた2つの整数の合計を計算する関数。
     * @param a 第一引数の整数
     * @param b 第二引数の整数
     * @return aとbの合計
     */
    int add(int a, int b) {
        return a + b;
    }
    ```

### 4. クラスの構造と書き方

- **アクセス指定子 (public, protected, private)**: 上から順に `public`、`protected`、`private` の順で配置し、それぞれのセクションの間にコメントを挿入します。
- **メンバ変数**: 変数名の頭にアンダースコアを付けます（例: `_count`）。privateの変数とメソッドは、他からアクセスされないことが分かるようにします。

    ```cpp
    class Example {
    public:
        Example(int val);
        void display() const;

    private:
        int _value;
    };
    ```

### 5. ファイル分割とインクルードガード

- **ファイル分割**: クラスごとにヘッダーファイル (`.h`) とソースファイル (`.cpp`) を作成します。
- **インクルードガード**: ヘッダーファイルにはインクルードガードを使い、重複読み込みを防ぎます。

    ```cpp
    #ifndef EXAMPLE_H
    #define EXAMPLE_H

    // ヘッダーファイル内容

    #endif // EXAMPLE_H
    ```

### 6. エラーハンドリング

- **例外処理**: 例外が発生しうる箇所には `try-catch` を使い、エラー内容をログ出力または適切に処理します。
- **assertの使用**: デバッグ時には、`assert` で条件を確認し、異常があればプログラムを停止させます。

### 7. 関数の長さと責任分離

- **関数の長さ**: 1つの関数は通常20行以内に収め、特定の役割を持たせます。
- **責任分離**: 単一責任の原則に従い、1つの関数には1つの処理内容のみを持たせ、分かりやすく保ちます。

---
