/*
 * Copyright (C) 2017 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RESULTVIEW_H
#define RESULTVIEW_H

#include <QWidget>
#include <QPointer>

class QLabel;
class SuggestButton;

class ResultView : public QWidget
{
    Q_OBJECT
public:
    explicit ResultView(QWidget *parent = 0);

signals:

public slots:
    void onLogLinkActivated(const QString&);
    void updateResult(quint32 error, const QString &, const QString &description);

private:
    QPointer<QLabel>  m_title;
    QPointer<QLabel> m_hitsTitle;
    QPointer<QLabel> m_resultIcon;
    QPointer<QLabel> m_logHits;
    QPointer<SuggestButton> m_rebootLater;
    QPointer<SuggestButton> m_rebootNow;
};

#endif // RESULTVIEW_H
