
// calculatorDlg.h : ͷ�ļ�
//

#pragma once


// CcalculatorDlg �Ի���
class CcalculatorDlg : public CDialogEx
{
// ����
public:
	CcalculatorDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_str;
	double temp;
	int flag;
	afx_msg void OnBnClickedDot();	
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedMinus();
	afx_msg void OnBnClickedMutiply();
	afx_msg void OnBnClickedDivide();
	afx_msg void OnBnClickedCalculator();
	afx_msg void OnBnClickedPercent();
	afx_msg void OnBnClickedX();
	afx_msg void OnBnClickedBack();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedPlusminus();
	afx_msg void OnBnClickedSignofecolution();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	double x,y,secag,hag,minag;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
