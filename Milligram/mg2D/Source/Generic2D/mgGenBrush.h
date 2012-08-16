/*
  Copyright (C) 1995-2012 by Michael J. Goodfellow

  This source code is distributed for free and may be modified, redistributed, and
  incorporated in other projects (commercial, non-commercial and open-source)
  without restriction.  No attribution to the author is required.  There is
  no requirement to make the source code available (no share-alike required.)

  This source code is distributed "AS IS", with no warranty expressed or implied.
  The user assumes all risks related to quality, accuracy and fitness of use.

  Except where noted, this source code is the sole work of the author, but it has 
  not been checked for any intellectual property infringements such as copyrights, 
  trademarks or patents.  The user assumes all legal risks.  The original version 
  may be found at "http://www.sea-of-memes.com".  The author is not responsible 
  for subsequent alterations.

  Retain this copyright notice and add your own copyrights and revisions above
  this notice.
*/
#ifndef MGGENBRUSH_H
#define MGGENBRUSH_H

#include "Graphics2D/mgTypes2D.h"

class mgGenSurface;
class mgGenContext;

class mgGenBrush : public mgBrush
{
public:
  // destructor
  virtual ~mgGenBrush();

protected:
  BYTE m_r; 
  BYTE m_g;
  BYTE m_b;

  // constructor
  mgGenBrush(
    BYTE r, 
    BYTE g, 
    BYTE b);

  friend class mgGenSurface;
  friend class mgGenContext;
};

#endif