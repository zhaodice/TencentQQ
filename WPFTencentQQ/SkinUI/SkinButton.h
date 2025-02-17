#ifndef BUTTON_HEAD_FILE
#define BUTTON_HEAD_FILE

#pragma once

#include "SkinUI.h"

//按妞类型
enum UI_BUTTON_TYPE
{
	en_PushButton,
	en_CheckButton,
	en_RadioButton,
	en_IconButton,
	en_MenuButton
};

// CButtonEx

class SKINUI_CLASS CSkinButton : public CButton,public ISkinControl
{
	DECLARE_DYNAMIC(CSkinButton)

	//资源定义
public:
	CImageEx * m_pBackImgN, * m_pBackImgH, * m_pBackImgD, * m_pBackImgF;
	CImageEx * m_pCheckImgN, * m_pCheckImgH, * m_pCheckImgTickN, *m_pCheckImgTickH;
	CImageEx * m_pArrowImg, * m_pIconImg;

	//变量定义
protected:
	BOOL m_bFocus, m_bPress, m_bHover, m_bMouseTracking;

	UI_BUTTON_TYPE				m_nBtnType;
	DWORD						m_dwTextAlign;
	HMENU						m_hMenu;
	HDC							m_hBackDC;

	//函数定义
public:
	//构造函数
	CSkinButton();
	//析构函数
	virtual ~CSkinButton();

	//重载函数
protected:
	//消息循环
	virtual LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam);

	//设置函数
public:
	//设置类型
	void SetButtonType(UI_BUTTON_TYPE type);
	//调整位置
	void SetSize(int nWidth,int nHeight);
	//设置菜单
	void SetMenu(HMENU hMenu);

	//资源加载
public:
	//设置资源
	BOOL SetBackImage(LPCTSTR lpNormal, LPCTSTR lpHoven, LPCTSTR lpDown, LPCTSTR lpFocus,CONST LPRECT lprcNinePart=NULL);
	//设置资源
	BOOL SetCheckImage(LPCTSTR lpNormal, LPCTSTR lpHoven, LPCTSTR lpTickNormal, LPCTSTR lpTickHoven);
	//设置资源
	BOOL SetIconImage(LPCTSTR lpszFileName);
	//设置资源
	BOOL SetMenuImage(LPCTSTR lpszFileName);

	//绘画函数
public:
	//PUSH按钮
	void DrawPushButton(CDC* pDC,RECT &rcClient);
	//Check按钮
	void DrawCheckButton(CDC* pDC,RECT &rcClient);
	//Check按钮
	void DrawIConButton(CDC* pDC,RECT &rcClient);
	//Check按钮
	void DrawMenuButton(CDC* pDC,RECT &rcClient);

	//消息函数
protected:
	//鼠标移动
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//鼠标离开
	afx_msg LRESULT OnMouseLeave(WPARAM wparam, LPARAM lparam);
	//重绘背景
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//销毁消息
	afx_msg void OnDestroy();
	//左键按下
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//左键抬起
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//设置焦点
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	//焦点丢失
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	//绘制消息
	afx_msg void OnPaint();
	//左键双击
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseLeave();
};


#endif