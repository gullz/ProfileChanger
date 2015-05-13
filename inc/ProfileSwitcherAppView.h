/*
 ============================================================================
 Name		: ProfileSwitcherAppView.h
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Declares view class for application.
 ============================================================================
 */

#ifndef __PROFILESWITCHERAPPVIEW_h__
#define __PROFILESWITCHERAPPVIEW_h__

// INCLUDES
#include <coecntrl.h>

// CLASS DECLARATION
class CProfileSwitcherAppView : public CCoeControl
	{
public:
	// New methods

	/**
	 * NewL.
	 * Two-phased constructor.
	 * Create a CProfileSwitcherAppView object, which will draw itself to aRect.
	 * @param aRect The rectangle this view will be drawn to.
	 * @return a pointer to the created instance of CProfileSwitcherAppView.
	 */
	static CProfileSwitcherAppView* NewL(const TRect& aRect);

	/**
	 * NewLC.
	 * Two-phased constructor.
	 * Create a CProfileSwitcherAppView object, which will draw itself
	 * to aRect.
	 * @param aRect Rectangle this view will be drawn to.
	 * @return A pointer to the created instance of CProfileSwitcherAppView.
	 */
	static CProfileSwitcherAppView* NewLC(const TRect& aRect);

	/**
	 * ~CProfileSwitcherAppView
	 * Virtual Destructor.
	 */
	virtual ~CProfileSwitcherAppView();

public:
	// Functions from base classes

	/**
	 * From CCoeControl, Draw
	 * Draw this CProfileSwitcherAppView to the screen.
	 * @param aRect the rectangle of this view that needs updating
	 */
	void Draw(const TRect& aRect) const;

	/**
	 * From CoeControl, SizeChanged.
	 * Called by framework when the view size is changed.
	 */
	virtual void SizeChanged();

	/**
	 * From CoeControl, HandlePointerEventL.
	 * Called by framework when a pointer touch event occurs.
	 * Note: although this method is compatible with earlier SDKs, 
	 * it will not be called in SDKs without Touch support.
	 * @param aPointerEvent the information about this event
	 */
	virtual void HandlePointerEventL(const TPointerEvent& aPointerEvent);

private:
	// Constructors

	/**
	 * ConstructL
	 * 2nd phase constructor.
	 * Perform the second phase construction of a
	 * CProfileSwitcherAppView object.
	 * @param aRect The rectangle this view will be drawn to.
	 */
	void ConstructL(const TRect& aRect);

	/**
	 * CProfileSwitcherAppView.
	 * C++ default constructor.
	 */
	CProfileSwitcherAppView();

	};

#endif // __PROFILESWITCHERAPPVIEW_h__
// End of File
