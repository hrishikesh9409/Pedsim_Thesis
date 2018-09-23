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
#include <algorithm>

extern double cell_length;
extern double cell_width;



struct coordinates{
	double x1;
	double y1;
	double x2;
	double y2;
};

struct vertex{
	double x;
	double y;
};

extern std::vector<coordinates> test;

class Loadscene : public QObject {

	Q_OBJECT
	
 public:
	Loadscene(QString file, Scene *pedscene, QGraphicsScene *graphicsscene); 
	
 signals: 
	
 public slots:		
	
 private slots:
	void processData(QByteArray data);
	void printCoordinates(std::vector<coordinates> points);
	void divide_Cells(std::vector<coordinates>& points);
 private:
	QXmlStreamReader m_xmlReader;
	Scene *pedscene; 
	QGraphicsScene *graphicsscene;
	
	QMap<QString, Waypoint*> waypoints;
	QList<Agent*> agents;

	coordinates c;

	vertex v[4];

	std::vector<coordinates> points;

	std::vector<vertex> cell_coordinate;
	std::vector<std::vector<vertex> > cell;
};

#endif
