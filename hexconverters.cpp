#include "hexconverters.h"

QString uIntToHex(QString i, bool bigEndian)
{
    quint32 c = i.toUInt();
    quint32 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString intToHex(QString i, bool bigEndian)
{
    qint32 c = i.toInt();
    qint32 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString floatToHex(QString i, bool bigEndian)
{
    float c = i.toFloat();
    float n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString doubleToHex(QString i, bool bigEndian)
{
    double c = i.toDouble();
    double n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString uShortToHex(QString i, bool bigEndian)
{
    quint16 c = i.toUShort();
    quint16 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString shortToHex(QString i, bool bigEndian)
{
    qint16 c = i.toShort();
    qint16 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString uLongToHex(QString i, bool bigEndian)
{
    quint64 c = i.toULong();
    quint64 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString longToHex(QString i, bool bigEndian)
{
    qint64 c = i.toLong();
    qint64 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString uInt128ToHex(QString i, bool bigEndian)
{
    quint128 c = i.toULongLong();
    quint128 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}
QString int128ToHex(QString i, bool bigEndian)
{
    qint128 c = i.toLongLong();
    qint128 n = !bigEndian ? qToLittleEndian(c) : qToBigEndian(c);
    QByteArray array(reinterpret_cast<const char*>(&n), sizeof(n));
    return array.toHex();
}