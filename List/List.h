// List.h : main header file for the LIST application
//

#if !defined(AFX_LIST_H__DA5ED6D0_DECF_11D1_994B_444553540000__INCLUDED_)
#define AFX_LIST_H__DA5ED6D0_DECF_11D1_994B_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CListApp:
// See List.cpp for the implementation of this class
//

class CListApp : public CWinApp
{
public:
	CListApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CListApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIST_H__DA5ED6D0_DECF_11D1_994B_444553540000__INCLUDED_)
