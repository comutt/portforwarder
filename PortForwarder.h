// PortForwarder.h : PORTFORWARDER �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#if !defined(AFX_PORTFORWARDER_H__FC035639_2D50_4F0D_B6EF_A5B81671B557__INCLUDED_)
#define AFX_PORTFORWARDER_H__FC035639_2D50_4F0D_B6EF_A5B81671B557__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// CPortForwarderApp:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� PortForwarder.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class CPortForwarderApp : public CWinApp
{
public:
	CPortForwarderApp();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CPortForwarderApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����

	//{{AFX_MSG(CPortForwarderApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_PORTFORWARDER_H__FC035639_2D50_4F0D_B6EF_A5B81671B557__INCLUDED_)
