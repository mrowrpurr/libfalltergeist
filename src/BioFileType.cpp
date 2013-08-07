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

#include "../src/BioFileType.h"
#include "../src/DatFileItem.h"

namespace libfalltergeist
{

BioFileType::BioFileType(DatFileItem * datFileItem) : _datFileItem(datFileItem)
{
    _text = 0;
    open();
}

BioFileType::~BioFileType()
{
    delete [] _text;
}

DatFileItem * BioFileType::datFileItem()
{
    return _datFileItem;
}

void BioFileType::open()
{
//!    _text = new char[datFileItem()->size() + 1]();
//!    datFileItem()->setPosition(0);
//!    datFileItem()->readBytes(_text, datFileItem()->size());
}

const char * BioFileType::text()
{
    return _text;
}

}
