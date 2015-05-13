/*
 ============================================================================
 Name		: ProfileSwitcherAppView.cpp
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Application view implementation
 ============================================================================
 */

// INCLUDE FILES
#include <coemain.h>
#include "ProfileSwitcherAppView.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::NewL()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CProfileSwitcherAppView* CProfileSwitcherAppView::NewL(const TRect& aRect)
	{
	CProfileSwitcherAppView* self = CProfileSwitcherAppView::NewLC(aRect);
	CleanupStack::Pop(self);
	return self;
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::NewLC()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CProfileSwitcherAppView* CProfileSwitcherAppView::NewLC(const TRect& aRect)
	{
	CProfileSwitcherAppView* self = new (ELeave) CProfileSwitcherAppView;
	CleanupStack::PushL(self);
	self->ConstructL(aRect);
	return self;
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::ConstructL()
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppView::ConstructL(const TRect& aRect)
	{
	// Create a window for this application view
	CreateWindowL();

	// Set the windows size
	SetRect(aRect);

	// Activate the window, which makes it ready to be drawn
	ActivateL();
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::CProfileSwitcherAppView()
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CProfileSwitcherAppView::CProfileSwitcherAppView()
	{
	// No implementation required
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::~CProfileSwitcherAppView()
// Destructor.
// -----------------------------------------------------------------------------
//
CProfileSwitcherAppView::~CProfileSwitcherAppView()
	{
	// No implementation required
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::Draw()
// Draws the display.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppView::Draw(const TRect& /*aRect*/) const
	{
	// Get the standard graphics context
	CWindowGc& gc = SystemGc();

	// Gets the control's extent
	TRect drawRect(Rect());

	// Clears the screen
	gc.Clear(drawRect);

	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::SizeChanged()
// Called by framework when the view size is changed.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppView::SizeChanged()
	{
	DrawNow();
	}

// -----------------------------------------------------------------------------
// CProfileSwitcherAppView::HandlePointerEventL()
// Called by framework to handle pointer touch events.
// Note: although this method is compatible with earlier SDKs, 
// it will not be called in SDKs without Touch support.
// -----------------------------------------------------------------------------
//
void CProfileSwitcherAppView::HandlePointerEventL(
		const TPointerEvent& aPointerEvent)
	{

	// Call base class HandlePointerEventL()
	CCoeControl::HandlePointerEventL(aPointerEvent);
	}

// End of File
