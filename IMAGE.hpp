#pragma once

//########## ヘッダーファイル読み込み ##########
#include "Dxlib.h"
#include <string>


//########## マクロ定義：画像のファイルパスと名前 ##########
#define MY_IMG_DIR_JIKI		R"(.\MY_IMG\JIKI\)"			//自機の画像ファイルの場所

#define MY_IMG_NAME_JIKI_1	R"(jiki_1_mini.png)"		//自機１の名前
#define MY_IMG_NAME_JIKI_2	R"(jiki_2_mini.png)"		//自機2の名前

//########## マクロ定義：エラーメッセージ##########
#define IMAGE_ERROR_TITLE "IMAGE_ERROR"					//エラータイトル
#define IMAGE_ERROR_MSG	  "画像が読み込めませんでした"	//エラーメッセージ

//########## クラスの定義 ##########

class IMAGE
{
private:
	std::string FilePath;								//パス
	std::string FileName;								//名前

	int Handle;											//ハンドル

	int X;												//X位置
	int Y;												//Y位置
	int Width;											//幅
	int Height;											//高さ

	bool IsLoad;										//読み込めたか？	

	vool IsDraw;										//描画しても良い？

public:
	IMAGE(const char *, const char *);					//コンストラクタ
	~IMAGE();											//デストラクタ

	std::string GetFileName(void);						//名前を取得

	void SetX(int);										//X位置を設定
	void SetY(int);										//Y位置を設定
	int GetX(void);										//X位置を取得
	int GetY(void);										//Y位置を取得
	int GetWidth(void);									//幅を取得
	int GetHeight(void);								//高さを取得

	bool GetIsLoad(void);								//読み込めた？

	void Draw(void);									//画像を描画
};