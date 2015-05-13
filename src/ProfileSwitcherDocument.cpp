/*
 ============================================================================
 Name		: ProfileSwitcherDocument.cpp
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : CProfileSwitcherDocument implementation
 ============================================================================
 */

// INCLUDE FILES
#include "ProfileSwitcherAppUi.h"
#include "ProfileSwitcherDocument.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CProfileSwitcherDocument::NewL()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CProfileSwitcherDocument* CProfileSwitcherDocument::NewL(CEikApplication& aApp)
	{
	CProfileSwitcherDocument* self = NewLC(aApp);
	CleanupStack::Pop(self);
	return self;
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherDocument::NewLC()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CProfileSwitcherDocument* CProfileSwitcherDocument::NewLC(CEikApplication& aApp)
	{
	CProfileSwitcherDocument* self =
			new (ELeave) CProfileSwitcherDocument(aApp);

	CleanupStack::PushL(self);
	self->ConstructL();
	return self;
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherDocument::ConstructL()
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherDocument::ConstructL()
	{
	// No implementation required
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherDocument::CProfileSwitcherDocument()
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CProfileSwitcherDocument::CProfileSwitcherDocument(CEikApplication& aApp) :
	CAknDocument(aApp)
	{
	// No implementation required
	}

// ---------------------------------------------------------------------------
// CProfileSwitcherDocument::~CProfileSwitcherDocument()
// Destructor.
// ---------------------------------------------------------------------------
//
CProfileSwitcherDocument::~CProfileSwitcherDocument()
	{
	// No implementation required
	}

// ---------------------------------------------------------------------------
// CProfileSwitcherDocument::CreateAppUiL()
// Constructs CreateAppUi.
// ---------------------------------------------------------------------------
//
CEikAppUi* CProfileSwitcherDocument::CreateAppUiL()
	{
	// Create the application user interface, and return a pointer to it;
	// the framework takes ownership of this object
	return new (ELeave) CProfileSwitcherAppUi;
	}

// End of File
