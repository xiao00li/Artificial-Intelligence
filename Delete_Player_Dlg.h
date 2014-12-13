#pragma once
#include "afxcmn.h"


// Delete_Player_Dlg 对话框

class Delete_Player_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Delete_Player_Dlg)

public:
	Delete_Player_Dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Delete_Player_Dlg();

// 对话框数据
	enum { IDD = IDD_Delete_Players };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL  OnInitDialog();
	CListCtrl attacker_team_list_;
	CListCtrl defender_team_list_;
//	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnColumnclickList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedOk();
	afx_msg void OnLvnColumnclickList2(NMHDR *pNMHDR, LRESULT *pResult);
};
