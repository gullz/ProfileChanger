/*
 ============================================================================
 Name		: ProfileSwitcherApplication.cpp
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Main application class
 ============================================================================
 */

// INCLUDE FILES
#include "ProfileSwitcher.hrh"
#include "ProfileSwitcherDocument.h"
#include "ProfileSwitcherApplication.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CProfileSwitcherApplication::CreateDocumentL()
// Creates CApaDocument object
// -----------------------------------------------------------------------------
//
CApaDocument* CProfileSwitcherApplication::CreateDocumentL()
	{
	// Create an ProfileSwitcher document, and return a pointer to it
	return CProfileSwitcherDocument::NewL(*this);
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherApplication::AppDllUid()
// Returns application UID
// -----------------------------------------------------------------------------
//
TUid CProfileSwitcherApplication::AppDllUid() const
	{
	// Return the UID for the ProfileSwitcher application
	return KUidProfileSwitcherApp;
	}

// End of File
