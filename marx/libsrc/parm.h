/*
    This file is part of MARX

    Copyright (C) 2002-2023 Massachusetts Institute of Technology

    This software was developed by the MIT Center for Space Research
    under contract SV1-61010 from the Smithsonian Institution.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#ifndef _MARX_PARM_H_LOADED_
#define _MARX_PARM_H_LOADED_
typedef struct
{
   char *name;
   unsigned int type;
   void *value;
}
Marx_Parameter_Table_Type;

extern int marx_get_parameters (Param_File_Type *,
				Marx_Parameter_Table_Type *);

#endif
