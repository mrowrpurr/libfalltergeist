/*
 * Copyright 2012-2013 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBFALLTERGEIST_DATFILE_H
#define LIBFALLTERGEIST_DATFILE_H

#include <string.h>
#include <vector>
#include <fstream>

namespace libfalltergeist
{
class DatFileItem;

class DatFile
{
protected:
    std::vector<DatFileItem *> * _items;
    char * _filename;
    unsigned int _littleEndian(unsigned int);
    int _littleEndian(int);
    unsigned short _littleEndian(unsigned short);
    short _littleEndian(short);

public:
    DatFile();
    DatFile(char * filename);
    ~DatFile();

    virtual std::vector<DatFileItem *> * items();

    //DatFileItem * item(char * filename);

    char * filename();
    void setFilename(char * filename);

    char * getItemData(unsigned int offset, unsigned int size);
};

}

#endif // LIBFALLTERGEIST_DATFILE_H
