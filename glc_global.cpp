/****************************************************************************

 This file is part of the GLC-lib library.
 Copyright (C) 2005-2008 Laurent Ribon (laumaya@users.sourceforge.net)
 Version 1.2.0, packaged on September 2009.

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

//! \file glc_global.cpp implementation of usefull utilities

#include "glc_global.h"

QMutex glc::iDMutex;
QMutex glc::geomIdMutex;
QMutex glc::userIdMutex;
QMutex glc::widget3dIdMutex;

GLC_uint glc::GLC_GenID(void)
{
	static GLC_uint Id= 0;
	glc::iDMutex.lock();
	Id++;
	glc::iDMutex.unlock();
	return Id;
}

GLC_uint glc::GLC_GenGeomID(void)
{
	static GLC_uint Id= 0;
	glc::geomIdMutex.lock();
	Id++;
	glc::geomIdMutex.unlock();
	return Id;
}

GLC_uint glc::GLC_GenUserID(void)
{
	static GLC_uint Id= 0;
	glc::userIdMutex.lock();
	Id++;
	glc::userIdMutex.unlock();
	return Id;
}

GLC_uint glc::GLC_Gen3DWidgetID(void)
{
	static GLC_uint Id= 0;
	glc::widget3dIdMutex.lock();
	Id++;
	glc::widget3dIdMutex.unlock();
	return Id;
}
