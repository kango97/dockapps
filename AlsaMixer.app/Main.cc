//
//  Mixer.app / AlsaMixer.app
//
//  Copyright (c) 1998-2002 Per Liden
//  Copyright (C) 2004, Petr Hlavka
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111-1307,
//  USA.
//

#include "Mixer.h"

Mixer* app;

int main(int argc, char** argv)
{
   app = new Mixer(argc, argv);
   app->run();
   return 0;
}
