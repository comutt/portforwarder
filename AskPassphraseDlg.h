#if !defined(AFX_ASKPASSPHRASEDLG_H__7E6F220C_81E4_42A5_887D_9D89ED0E66C6__INCLUDED_)
#define AFX_ASKPASSPHRASEDLG_H__7E6F220C_81E4_42A5_887D_9D89ED0E66C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AskPassphraseDlg.h : �w�b�_�[ �t�@�C��
//

/////////////////////////////////////////////////////////////////////////////
// CAskPassphraseDlg �_�C�A���O

class CAskPassphraseDlg : public CDialog
{
// �R���X�g���N�V����
public:
	CAskPassphraseDlg(CWnd* pParent = NULL);   // �W���̃R���X�g���N�^

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CAskPassphraseDlg)
	enum { IDD = IDD_PF_ASK_PASSPHRASE_DLG };
	CString	m_passphrase;
	//}}AFX_DATA


// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CAskPassphraseDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CAskPassphraseDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
    askpassinfo* info;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_ASKPASSPHRASEDLG_H__7E6F220C_81E4_42A5_887D_9D89ED0E66C6__INCLUDED_)
