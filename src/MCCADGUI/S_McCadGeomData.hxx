// Copyright (C) 2014-2015  KIT-INR/NK
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
//
#ifndef S_MCCADGEOMDATA_HXX
#define S_MCCADGEOMDATA_HXX

#include "../MCCAD/McCadMcVoid/McCadGeomData.hxx"
#include "S_McCadSolid.hxx"

class S_McCadGeomData : public McCadGeomData
{
public:
    S_McCadGeomData();
    S_McCadGeomData(const int & studyID, Standard_Boolean bGenVoid);

    void            S_InputData(const int & studyID);
    /** genreate a new S_McCadSolid using a shape. */
    S_McCadSolid *  S_GenSMcCadSolid( const TopoDS_Shape & aShape);


private:
    Standard_Boolean m_bGenerateVoid;                       /**< The switch of void generation */

};

#endif // S_MCCADGEOMDATA_HXX
