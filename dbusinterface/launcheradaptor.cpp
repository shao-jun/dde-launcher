/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -c LauncherAdaptor -a launcheradaptor launcher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "launcheradaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class LauncherAdaptor
 */

LauncherAdaptor::LauncherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

LauncherAdaptor::~LauncherAdaptor()
{
    // destructor
}

void LauncherAdaptor::Exit()
{
    // handle method call com.deepin.dde.Launcher.Exit
    QMetaObject::invokeMethod(parent(), "Exit");
}

void LauncherAdaptor::Hide()
{
    // handle method call com.deepin.dde.Launcher.Hide
    QMetaObject::invokeMethod(parent(), "Hide");
}

void LauncherAdaptor::Show()
{
    // handle method call com.deepin.dde.Launcher.Show
    QMetaObject::invokeMethod(parent(), "Show");
}

void LauncherAdaptor::Toggle()
{
    // handle method call com.deepin.dde.Launcher.Toggle
    QMetaObject::invokeMethod(parent(), "Toggle");
}

