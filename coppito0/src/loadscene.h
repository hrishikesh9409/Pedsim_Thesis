///
/// pedsim - A microscopic pedestrian simulation system. 
/// Copyright (c) 2003 - 2012 by Christian Gloor
///                              

#ifndef _loadscene_h_
#define _loadscene_h_

class Scene;
class Waypoint;
class QGraphicsScene;
class Agent;

#include <QtCore>
#include <QXmlStreamReader>
#include <vector>

extern double cell_length;
extern double cell_width;

struct coordinates{
	double x1;
	double y1;
	double x2;
	double y2;
};

class Loadscene : public QObject {

	Q_OBJECT
	
 public:
	Loadscene(QString file, Scene *pedscene, QGraphicsScene *graphicsscene); 
	
 signals: 
	
 public slots:		
	
 private slots:
	void processData(QByteArray data);
	void printCoordinates(std::vector<coordinates>& points);
	void divide_Cells(std::vector<coordinates>& points);
 private:
	QXmlStreamReader m_xmlReader;
	Scene *pedscene; 
	QGraphicsScene *graphicsscene;
	
	QMap<QString, Waypoint*> waypoints;
	QList<Agent*> agents;
	std::vector<coordinates> points;
	std::vector<std::vector<coordinates> > cells;
};

#endif
