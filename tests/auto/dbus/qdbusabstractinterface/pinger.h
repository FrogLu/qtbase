/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtDBus module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -i interface.h -p pinger org.qtproject.QtDBus.Pinger.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef PINGER_H_1246463415
#define PINGER_H_1246463415

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "interface.h"

/*
 * Proxy class for interface org.qtproject.QtDBus.Pinger
 */
class ComTrolltechQtDBusPingerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.qtproject.QtDBus.Pinger"; }

public:
    ComTrolltechQtDBusPingerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ComTrolltechQtDBusPingerInterface();

    Q_PROPERTY(RegisteredType complexProp READ complexProp WRITE setComplexProp)
    inline RegisteredType complexProp() const
    { return qvariant_cast< RegisteredType >(property("complexProp")); }
    inline void setComplexProp(RegisteredType value)
    { setProperty("complexProp", qVariantFromValue(value)); }

    Q_PROPERTY(QString stringProp READ stringProp WRITE setStringProp)
    inline QString stringProp() const
    { return qvariant_cast< QString >(property("stringProp")); }
    inline void setStringProp(const QString &value)
    { setProperty("stringProp", qVariantFromValue(value)); }

    Q_PROPERTY(QDBusVariant variantProp READ variantProp WRITE setVariantProp)
    inline QDBusVariant variantProp() const
    { return qvariant_cast< QDBusVariant >(property("variantProp")); }
    inline void setVariantProp(const QDBusVariant &value)
    { setProperty("variantProp", qVariantFromValue(value)); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<RegisteredType> complexMethod()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("complexMethod"), argumentList);
    }

    inline QDBusPendingReply<QString, int> multiOutMethod()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("multiOutMethod"), argumentList);
    }
    inline QDBusReply<QString> multiOutMethod(int &out1)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("multiOutMethod"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            out1 = qdbus_cast<int>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<int> sleepMethod(int in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("sleepMethod"), argumentList);
    }

    inline QDBusPendingReply<QString> stringMethod()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("stringMethod"), argumentList);
    }

    inline QDBusPendingReply<> voidMethod()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("voidMethod"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void complexSignal(RegisteredType in0);
    void stringSignal(const QString &in0);
    void voidSignal();
};

namespace com {
  namespace trolltech {
    namespace QtDBus {
      typedef ::ComTrolltechQtDBusPingerInterface Pinger;
    }
  }
}
#endif
