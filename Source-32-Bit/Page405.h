#if !defined(AFX_PAGECHAN_H__092E39A5_03F8_11D4_B2F6_00104B9CFF37__INCLUDED_)
#define AFX_PAGECHAN_H__092E39A5_03F8_11D4_B2F6_00104B9CFF37__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Page405.h : header file
//

#include "PageAdd.h"

class CPage405 : public CPageAdd  
{
public:
	CPage405();
	CPage405(UINT nIDCap);
	virtual ~CPage405();
	virtual void InitGrid();
	virtual BOOL UpdateData( BOOL bSaveAndValidate = TRUE );
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGECHAN_H__092E39A5_03F8_11D4_B2F6_00104B9CFF37__INCLUDED_)
