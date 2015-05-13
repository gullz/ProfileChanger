/*
 ============================================================================
 Name		: ProfileSwitcherDocument.h
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Declares document class for application.
 ============================================================================
 */

#ifndef __PROFILESWITCHERDOCUMENT_h__
#define __PROFILESWITCHERDOCUMENT_h__

// INCLUDES
#include <akndoc.h>

// FORWARD DECLARATIONS
class CProfileSwitcherAppUi;
class CEikApplication;

// CLASS DECLARATION

/**
 * CProfileSwitcherDocument application class.
 * An instance of class CProfileSwitcherDocument is the Document part of the
 * AVKON application framework for the ProfileSwitcher example application.
 */
class CProfileSwitcherDocument : public CAknDocument
	{
public:
	// Constructors and destructor

	/**
	 * NewL.
	 * Two-phased constructor.
	 * Construct a CProfileSwitcherDocument for the AVKON application aApp
	 * using two phase construction, and return a pointer
	 * to the created object.
	 * @param aApp Application creating this document.
	 * @return A pointer to the created instance of CProfileSwitcherDocument.
	 */
	static CProfileSwitcherDocument* NewL(CEikApplication& aApp);

	/**
	 * NewLC.
	 * Two-phased constructor.
	 * Construct a CProfileSwitcherDocument for the AVKON application aApp
	 * using two phase construction, and return a pointer
	 * to the created object.
	 * @param aApp Application creating this document.
	 * @return A pointer to the created instance of CProfileSwitcherDocument.
	 */
	static CProfileSwitcherDocument* NewLC(CEikApplication& aApp);

	/**
	 * ~CProfileSwitcherDocument
	 * Virtual Destructor.
	 */
	virtual ~CProfileSwitcherDocument();

public:
	// Functions from base classes

	/**
	 * CreateAppUiL
	 * From CEikDocument, CreateAppUiL.
	 * Create a CProfileSwitcherAppUi object and return a pointer to it.
	 * The object returned is owned by the Uikon framework.
	 * @return Pointer to created instance of AppUi.
	 */
	CEikAppUi* CreateAppUiL();

private:
	// Constructors

	/**
	 * ConstructL
	 * 2nd phase constructor.
	 */
	void ConstructL();

	/**
	 * CProfileSwitcherDocument.
	 * C++ default constructor.
	 * @param aApp Application creating this document.
	 */
	CProfileSwitcherDocument(CEikApplication& aApp);

	};

#endif // __PROFILESWITCHERDOCUMENT_h__
// End of File
