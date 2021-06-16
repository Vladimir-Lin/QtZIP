/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com (2107437784)
 * URL      : http://qtzip.sourceforge.net/
 *
 * QtZIP acts as an interface between Qt and ZIP library.
 * Please keep QtZIP as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_ZIP_H
#define QT_ZIP_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTZIP_LIB)
#      define Q_ZIP_EXPORT Q_DECL_EXPORT
#    else
#      define Q_ZIP_EXPORT Q_DECL_IMPORT
#    endif
#else
#      define Q_ZIP_EXPORT
#endif

#define QT_ZIP_LIB 1

class Q_ZIP_EXPORT QtZIP
{
  public:

    explicit        QtZIP      (void) ;
    virtual        ~QtZIP      (void) ;

    static  QString Version    (void) ;
    virtual bool    IsWritable (void) ;
    virtual bool    IsReadable (void) ;

  protected:

  private:

} ;

QT_END_NAMESPACE

#endif
