// Page120.h: interface for the CPage120 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PAGE120_H__F8E4F306_EE09_11D3_B2F2_00104B9CFF37__INCLUDED_)
#define AFX_PAGE120_H__F8E4F306_EE09_11D3_B2F2_00104B9CFF37__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "PageAdd.h"

class CPage120 : public CPageAdd  
{
public:
	CPage120();
	CPage120(UINT nIDCap);
	virtual ~CPage120();
	virtual void InitGrid();
	virtual BOOL UpdateData( BOOL bSaveAndValidate = TRUE );
};

#endif // !defined(AFX_Page120_H__F8E4F306_EE09_11D3_B2F2_00104B9CFF37__INCLUDED_)
