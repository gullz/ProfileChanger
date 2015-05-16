/*
 ============================================================================
 Name		: ProfileSwitcherAppUi.cpp
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : CProfileSwitcherAppUi implementation
 ============================================================================
 */

// INCLUDE FILES
#include <avkon.hrh>
#include <aknmessagequerydialog.h>


#include <ProfileSwitcher.rsg>

#include "ProfileSwitcher.hrh"
#include "ProfileSwitcher.pan"
#include "ProfileSwitcherApplication.h"
#include "ProfileSwitcherAppUi.h"
#include "ProfileSwitcherAppView.h"

// _LIT( KFileName, "C:\\private\\E6DC77AC\\ProfileSwitcher.txt" );
// _LIT( KText, "Profile Switcher-beta");

// ============================ MEMBER FUNCTIONS ===============================


// -----------------------------------------------------------------------------
// CProfileSwitcherAppUi::ConstructL()
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppUi::ConstructL()
{
	// Initialise app UI with standard value.
	BaseConstructL(CAknAppUi::EAknEnableSkin);

	// Create view object
	iAppView = CProfileSwitcherAppView::NewL(ClientRect());
}
// -----------------------------------------------------------------------------
// CProfileSwitcherAppUi::CProfileSwitcherAppUi()
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CProfileSwitcherAppUi::CProfileSwitcherAppUi()
{
	// No implementation required
}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppUi::~CProfileSwitcherAppUi()
// Destructor.
// -----------------------------------------------------------------------------
//
CProfileSwitcherAppUi::~CProfileSwitcherAppUi()
{
	if (iAppView)
	{
		delete iAppView;
		iAppView = NULL;
	}

}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppUi::HandleCommandL()
// Takes care of command handling.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppUi::HandleCommandL(TInt aCommand)
{
	switch (aCommand)
	{
		case EEikCmdExit:
		case EAknSoftkeyExit:
		{
			Exit();
			break;
		}
		case EHelp:
		{
			break;
		}

		case EAbout:
		{

			CAknMessageQueryDialog* dlg = new (ELeave) CAknMessageQueryDialog();
			dlg->PrepareLC(R_ABOUT_QUERY_DIALOG);
			HBufC* title = iEikonEnv->AllocReadResourceLC(R_ABOUT_DIALOG_TITLE);
			dlg->QueryHeading()->SetTextL(*title);
			CleanupStack::PopAndDestroy(); //title
			HBufC* msg = iEikonEnv->AllocReadResourceLC(R_ABOUT_DIALOG_TEXT);
			dlg->SetMessageTextL(*msg);
			CleanupStack::PopAndDestroy(); //msg
			dlg->RunLD();
			break;
		}
		default:
			Panic( EProfileSwitcherUi);
			break;
		}
	}
// -----------------------------------------------------------------------------
//  Called by the framework when the application status pane
//  size is changed.  Passes the new client rectangle to the
//  AppView
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppUi::HandleStatusPaneSizeChange()
{
	iAppView->SetRect(ClientRect());
}

// End of File
