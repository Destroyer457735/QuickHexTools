#include <stdio.h>
#include <iostream>
#include "hexconverters.h"

const QStringList CONVERSION_OPTIONS = {"int","uint","float","double","ushort","short","ulong","long","uint128","int128"};

bool is_big_endian(void)
{
    union {
        uint32_t i;
        char c[4];
    } bint = {0x01020304};

    return bint.c[0] == 1;
}

void displayHelp(void)
{
    qInfo() << "USAGE";
    qInfo() << "    Argument:       Explanation:                            Possible Values:";
    qInfo() << "    1. Value Type   The type of value to convert from.      int,uint,float,double,ushort,short,ulong,long,uint128,int128";
    qInfo() << "    2. Value        The value to convert.                   Anything";
    qInfo() << "    3. Endian       The endianness to use when converting.  Big,Little (non case-sensitive)";
    qInfo() << "EXAMPLES";
    qInfo() << "    int 1000 Big";
    qInfo() << "    float 3.14159 Little";
    return;
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QStringList args = QCoreApplication::arguments();

    if(args.length() < 3)
    {
        displayHelp();
        return 0;
    }
    QString i = args.at(2);
    bool bigEndian = args.length() >= 4 ? (QString::compare(args.at(3),"Big",Qt::CaseInsensitive) == 0 ? true : false) : false;
    QString hex;
    if(args.at(1) == CONVERSION_OPTIONS.at(0))
        hex = intToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(1))
        hex = uIntToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(2))
        hex = floatToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(3))
        hex = doubleToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(4))
        hex = uShortToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(5))
        hex = shortToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(6))
        hex = uLongToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(7))
        hex = longToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(8))
        hex = uInt128ToHex(i,bigEndian);
    else if(args.at(1) == CONVERSION_OPTIONS.at(9))
        hex = int128ToHex(i,bigEndian);

    qInfo() << hex.toUpper();
    return 0;
}
