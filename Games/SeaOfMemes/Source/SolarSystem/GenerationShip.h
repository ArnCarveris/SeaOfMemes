/*
  Copyright (C) 1995-2011 by Michael J. Goodfellow

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
#ifndef GENERATIONSHIP_H
#define GENERATIONSHIP_H

class GenerationShip
{
public:
  // constructor
  GenerationShip(
    const mgOptionsFile& options,
    const mgPoint3& center);
  
  virtual ~GenerationShip();
    
  // delete display buffers
  virtual void deleteBuffers();

  // create buffers ready to send to display
  virtual void createBuffers();

  // animate object
  virtual BOOL animate(
    double now,                       // current time (ms)
    double since);                    // milliseconds since last pass

  // draw opaque data
  virtual void render();

  // draw transparent data
  virtual void renderTransparent();

protected:
  mgPoint3 m_center;
  int m_samples;

  mgTextureImage* m_terrainTexture;
  mgVertexBuffer* m_terrainVertexes;
  mgIndexBuffer* m_terrainIndexes;

  mgTextureImage* m_waterTexture;
  mgVertexBuffer* m_waterVertexes;
  mgIndexBuffer* m_waterIndexes;

  mgTextureImage* m_shellTexture;
  mgVertexBuffer* m_shellVertexes;
  mgIndexBuffer* m_shellIndexes;

  mgTextureImage* m_lightTexture;
  mgVertexBuffer* m_lightVertexes;
  mgIndexBuffer* m_lightIndexes;

  // generate noise
  double noise(
    double x,
    double y);

  // generate noise
  double noise(
    double x,
    double y,
    double z);

  // return terrain point on inside of ship
  void insidePt(
    mgPoint3& pt,
    double x,
    double y,
    double z);

  // add the polygons for terrain height map
  void addPolygons(
    double* heights,
    int width,
    int height,
    mgVertexBuffer* vertexes);

  // add indexes for a grid of points
  virtual void addGridIndexes(
    mgIndexBuffer* indexes,
    int vertexBase,
    int width,
    int height,
    int widthStart,
    int widthLen,
    BOOL outward);

  // create ship shell
  void createShell();

  // create water level
  void createWater();

  // create light tube
  void createLight();

  // create terrain
  void createTerrain();
};

#endif
