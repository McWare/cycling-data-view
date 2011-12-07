////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.50Release
// Tag = $Name: AKW1_500 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_MESG_WITH_EVENT_BROADCASTER_HPP)
#define FIT_MESG_WITH_EVENT_BROADCASTER_HPP

#include <list>
#include <vector>
#include "fit_mesg_with_event_listener.hpp"
#include "fit_mesg_with_event.hpp"

namespace fit
{

class MesgWithEventBroadcaster : public MesgWithEventListener
{
   public:
      MesgWithEventBroadcaster(void);
      void AddListener(MesgWithEventListener& mesgObserver);
      void OnMesg(MesgWithEvent& mesg);

   private:
      void Broadcast(MesgWithEvent& mesg);

      std::vector<MesgWithEventListener*> listeners;
      std::vector<std::list<MesgWithEvent*> > startedEvents;
};

} // namespace fit

#endif // !defined(FIT_MESG_WITH_EVENT_BROADCASTER_HPP)
