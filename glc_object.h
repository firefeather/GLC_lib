/****************************************************************************

 This file is part of the GLC-lib library.
 Copyright (C) 2005-2006 Laurent Ribon (laumaya@users.sourceforge.net)
 Version 0.9.7, packaged on September, 2007.

 http://glc-lib.sourceforge.net

 GLC-lib is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 GLC-lib is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with GLC-lib; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

*****************************************************************************/

//! \file GLC_object.h Interface for the GLC_Object class.

#ifndef GLC_OBJECT_H_
#define GLC_OBJECT_H_

#include <QtOpenGL>
#include <QString>

#include "glc_maths.h"
#include "glc_enum.h"

//////////////////////////////////////////////////////////////////////
//! \class GLC_Object
/*! \brief GLC_Object is base class for most GLC class*/

/*! GLC_Object is a abstract class. \n \n
 *  Every GLC_Object have :
 *		- unique ID #m_Uid generated by #GLC_GenID
 *		- virtual OpenGL method GLC_Object::glExecute
 */
//////////////////////////////////////////////////////////////////////

class GLC_Object
{
//////////////////////////////////////////////////////////////////////
/*! @name Constructor / Destructor */
//@{
//////////////////////////////////////////////////////////////////////
public:		
	
	//! Default constructor
	/*! Create a GLC_Object , Generate is UID GLC_Object::m_Uid 
	 * and set GLC_Object::m_Name to pName*/
	//GLC_Object(const char *pName= "");
	GLC_Object(const QString name= "");
	
	//! Copy constructor
	GLC_Object(const GLC_Object& sourceObject);
	
	//! Virtual destructor
	virtual ~GLC_Object();
//@}

//////////////////////////////////////////////////////////////////////
/*! \name Get Functions*/
//@{
//////////////////////////////////////////////////////////////////////
public:
	//! Get Object ID
	GLC_uint	getID() const;
	//! Get Object Name
	const QString getName() const;
//@}

//////////////////////////////////////////////////////////////////////
/*! \name Set Functions*/
//@{
//////////////////////////////////////////////////////////////////////
public:
	//! Set Object Name
	void setName(const QString name);
//@}


//////////////////////////////////////////////////////////////////////
// Private member
//////////////////////////////////////////////////////////////////////

protected:
	//! The Unique ID of an GLC_Object
	/*! Generated on GLC_Object creation*/
	GLC_uint m_Uid;
	//! Name of an GLC_Object
	QString m_Name;
};
#endif //GLC_OBJECT_H_
