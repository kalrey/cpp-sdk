// file      : ACE_TMCast/Protocol.cpp
// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// cvs-id    : $Id: Protocol.cpp 80826 2008-03-04 14:51:23Z wotte $

#include "Protocol.hpp"

namespace ACE_TMCast
{
  namespace Protocol
  {
    /*
      namespace
      {
      char const* labels[] = {
      "NONE", "BEGIN", "COMMIT", "ABORT", "COMMITED", "ABORTED"};
      }

      std::string
      tslabel (Protocol::TransactionStatus s)
      {
      return labels[s];
      }

      std::ostream&
      operator << (std::ostream& o, Transaction const& t)
      {
      return o << "{" << t.id << "; " << tslabel (t.status) << "}";
      }
    */
  }
}
