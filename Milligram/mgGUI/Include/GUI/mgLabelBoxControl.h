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

#ifndef MGLABELBOXCONTROL_H
#define MGLABELBOXCONTROL_H

/*
  The parent of all label box controls.  A label box is a 
  frame around a group of controls, with a text label.
*/
#include "GUI/mgControl.h"

class mgLabelBoxControl : public mgControl
{
public:
  // constructor
  mgLabelBoxControl(
    mgControl* parent)
  : mgControl(parent)
  {}

  // destructor
  virtual ~mgLabelBoxControl()
  {}

  // set the label
  virtual void setLabel(
    const char* text) = 0;
};

#endif