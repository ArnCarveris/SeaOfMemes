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
#ifndef MGXPPEN_H
#define MGXPPEN_H

#include "Graphics2D/mgTypes2D.h"

class mgXPContext;
class mgXPSurface;

class mgXPPen : public mgPen
{
public:
  // destructor    
  virtual ~mgXPPen();
  
protected:
  HPEN m_platformPen;

  // constructor
  mgXPPen(
    int r,
    int g,
    int b,
    int thick);

  friend class mgXPContext;
  friend class mgXPSurface;
};

#endif
