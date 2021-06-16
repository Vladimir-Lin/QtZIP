/****************************************************************************
 *
 * Copyright (C) 2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com (2107437784)
 * URL      : http://qtucl.sourceforge.net/
 *
 * QtUCL acts as an interface between Qt and UCL library.
 * Please keep QtUCL as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#include <qtzip.h>

extern "C" {
#include "zip.h"
#include "unzip.h"
}

QT_BEGIN_NAMESPACE

//////////////////////////////////////////////////////////////////////////////

QtZIP:: QtZIP(void)
{
}

QtZIP::~QtZIP(void)
{
}

QString QtZIP::Version(void)
{
  return "1.6.0" ;
}

bool QtZIP::IsWritable(void)
{
  return true ;
}

bool QtZIP::IsReadable(void)
{
  return true ;
}

//////////////////////////////////////////////////////////////////////////////

QT_END_NAMESPACE
