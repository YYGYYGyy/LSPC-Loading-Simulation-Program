// Page467.h: interface for the CPage467 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PAGE467_H__BB96B967_4D33_11D4_B2FF_00104B9CFF37__INCLUDED_)
#define AFX_PAGE467_H__BB96B967_4D33_11D4_B2FF_00104B9CFF37__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "PageAdd.h"

class CPage467 : public CPageAdd  
{
public:
	CPage467();
	CPage467(UINT nID);
	virtual ~CPage467();
	virtual void InitGrid();
	virtual BOOL UpdateData( BOOL bSaveAndValidate = TRUE );

};

#endif // !defined(AFX_PAGE467_H__BB96B967_4D33_11D4_B2FF_00104B9CFF37__INCLUDED_)
