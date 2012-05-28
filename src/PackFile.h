/** \file       PackFile.h
 *  \brief      Contains the declaration of the PF file class.
 *  \author     Rhoot
 */

/*	Copyright (C) 2012 Rhoot <https://github.com/rhoot>

    This file is part of Gw2Browser.

    Gw2Browser is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifndef PACKFILE_H_INCLUDED
#define PACKFILE_H_INCLUDED

namespace gw2b
{

class PackFile
{
    Array<byte> mData;
public:
    PackFile(const Array<byte>& pData);
    ~PackFile();

    /** Finds a given chunk and returns a pointer to it. Note that this does
     *  \e not allocate a new array, but rather returns a pointer to within
     *  the array that already exists.
     *  \param[in]  pChunkType  Type of chunk to look for.
     *  \param[out] poSize      Size of the returned chunk.
     *  \return byte*   Pointer to the start of the chunk (post-header). */
    const byte* GetChunk(uint pChunkType, uint& poSize) const;
};

}; // namespace gw2b

#endif // PACKFILE_H_INCLUDED