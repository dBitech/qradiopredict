// Written by Adrian Musceac YO8RZZ at gmail dot com, started August 2013.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef PLOTVALUE_H
#define PLOTVALUE_H

/**
 * @brief Struct holding signal plot values
 */
class PlotValue
{
public:
    PlotValue();
    double longitude;
    double latitude;
    double longitude1;
    double latitude1;
    double longitude2;
    double latitude2;
    double longitude3;
    double latitude3;
    double signal;
    double distance;
};

#endif // PLOTVALUE_H
