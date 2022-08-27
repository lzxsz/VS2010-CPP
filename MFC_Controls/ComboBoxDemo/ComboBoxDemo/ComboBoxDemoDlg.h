
// ComboBoxDemoDlg.h : header file
//

#pragma once

#include "MyComboBox.h"

// CComboBoxDemoDlg dialog
class CComboBoxDemoDlg : public CDialogEx
{
// Construction
public:
	CComboBoxDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_COMBOBOXDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;


	CFont m_fontComboBox;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CMyComboBox m_ctrComboBox;
};
