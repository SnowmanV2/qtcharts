#ifndef SPLINEPRESENTER_P_H
#define SPLINEPRESENTER_P_H

#include "chartitem_p.h"
#include <QObject>
#include "qsplineseries.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class SplinePresenter : public QObject, public ChartItem
{
    Q_OBJECT
public:
    SplinePresenter(QSplineSeries* series, QGraphicsObject *parent = 0);

    QRectF boundingRect() const { return m_boundingRect; }
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    
signals:
    
public slots:
    void handleDomainChanged(const Domain& domain);
    void handleGeometryChanged(const QRectF& rect);

    private:
    QSplineSeries* m_series;
    QRectF m_boundingRect;
    
};

QTCOMMERCIALCHART_END_NAMESPACE

#endif // SPLINEPRESENTER_P_H
