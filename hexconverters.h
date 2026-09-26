#pragma once
#include <QtCore>
#include <QtEndian>

QString uIntToHex(QString i, bool bigEndian);
QString intToHex(QString i, bool bigEndian);
QString floatToHex(QString i, bool bigEndian);
QString doubleToHex(QString i, bool bigEndian);
QString uShortToHex(QString i, bool bigEndian);
QString shortToHex(QString i, bool bigEndian);
QString uLongToHex(QString i, bool bigEndian);
QString longToHex(QString i, bool bigEndian);
QString uInt128ToHex(QString i, bool bigEndian);
QString int128ToHex(QString i, bool bigEndian);