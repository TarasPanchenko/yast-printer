/* PrintersConf.h -*- c++ -*-
 *
 * Default destination (printer/class)
 *
 * Author: Petr Blahos <pblahos@suse.cz>
 *
 * $Id$
 */
#ifndef _DefaultDest_H_
#define _DefaultDest_H_

#include <string>
#include <Y2.h>
#include <ycp/YCPString.h>
#include <ycp/YCPBoolean.h>

class DefaultDest
{
public:
  DefaultDest()
      {
      }
  ~DefaultDest()
      {
      }
  YCPValue Read();
  YCPBoolean Write(const YCPPath &path, const YCPValue& value, const YCPValue& arg);
};

#endif//_DefaultDest_H_