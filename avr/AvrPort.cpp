/*
 * Copyright 2010 by Adam Mayer	 <adam@makerbot.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */


#include "AvrPort.h"

Port PortA(0x20);
Port PortB(0x23);
Port PortC(0x26);
Port PortD(0x29);
Port PortE(0x2C);
Port PortF(0x2F);
Port PortG(0x32);
Port PortH(0x100);
Port PortJ(0x103);
Port PortK(0x106);
Port PortL(0x109);
Port PortNull(0xFFFF);

Port PORTMAP[] =
{
  PortA,
  PortB,
  PortC,
  PortD,
  PortE,
  PortF,
  PortG,
  PortH,
  PortNull,
  PortJ,
  PortK,
  PortL
};

