// PortForwarderDlg.h : �w�b�_�[ �t�@�C��
//

#if !defined(AFX_PORTFORWARDERDLG_H__AE793096_DECB_43D6_B17B_795DA7E90082__INCLUDED_)
#define AFX_PORTFORWARDERDLG_H__AE793096_DECB_43D6_B17B_795DA7E90082__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPortForwarderDlg �_�C�A���O

class CPortForwarderDlg : public CDialog
{
// �\�z
public:
	CPortForwarderDlg(CWnd* pParent = NULL);	// �W���̃R���X�g���N�^

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CPortForwarderDlg)
	enum { IDD = IDD_PORTFORWARDER_DIALOG };
		// ����: ���̈ʒu�� ClassWizard �ɂ���ăf�[�^ �����o���ǉ�����܂��B
	//}}AFX_DATA

	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CPortForwarderDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �̃T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:
	HICON m_hIcon;

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CPortForwarderDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonConnect();
	afx_msg void OnConfigFileButton();
	virtual void OnCancel();
	afx_msg void OnDestroy();
	afx_msg void OnHide();
	afx_msg void OnPfShow();
	//}}AFX_MSG
    afx_msg LRESULT OnFatalCalled(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnShowMessageBox(WPARAM info, LPARAM lParam);
    afx_msg LRESULT OnGetPassphrase(WPARAM info, LPARAM lParam);
    afx_msg LRESULT OnConnected(WPARAM info, LPARAM lParam);
    afx_msg LRESULT OnThreadEnd(WPARAM info, LPARAM lParam);
    afx_msg LRESULT OnTrayClicked(UINT iconResource, LONG mouseMessage);
	DECLARE_MESSAGE_MAP()
private:
    NOTIFYICONDATA m_trayIcon;
	void CloseConnection();
    void CreateHostsList(LPCTSTR configFile);
    BOOL GetInfo();
    void SetInfo();
    void AdjustFileNames();
    void AddIcon();
    void DeleteIcon();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_PORTFORWARDERDLG_H__AE793096_DECB_43D6_B17B_795DA7E90082__INCLUDED_)
