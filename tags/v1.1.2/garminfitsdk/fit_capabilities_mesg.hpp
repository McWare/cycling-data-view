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


#if !defined(FIT_CAPABILITIES_MESG_HPP)
#define FIT_CAPABILITIES_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class CapabilitiesMesg : public Mesg
{
   public:
      CapabilitiesMesg(void) : Mesg(Profile::MESG_CAPABILITIES)
      {
      }

      CapabilitiesMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns number of languages
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetNumLanguages(void) const
      {
         return GetFieldNumValues(0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns languages field
      // Comment: Use language_bits_x types where x is index of array.
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8Z GetLanguages(FIT_UINT8 index) const
      {
         return GetFieldUINT8ZValue(0, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set languages field
      // Comment: Use language_bits_x types where x is index of array.
      ///////////////////////////////////////////////////////////////////////
      void SetLanguages(FIT_UINT8 index, FIT_UINT8Z languages)
      {
         SetFieldUINT8ZValue(0, languages, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns number of sports
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetNumSports(void) const
      {
         return GetFieldNumValues(1, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns sports field
      // Comment: Use sport_bits_x types where x is index of array.
      ///////////////////////////////////////////////////////////////////////
      FIT_SPORT_BITS_0 GetSports(FIT_UINT8 index) const
      {
         return GetFieldUINT8ZValue(1, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set sports field
      // Comment: Use sport_bits_x types where x is index of array.
      ///////////////////////////////////////////////////////////////////////
      void SetSports(FIT_UINT8 index, FIT_SPORT_BITS_0 sports)
      {
         SetFieldUINT8ZValue(1, sports, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns workouts_supported field
      ///////////////////////////////////////////////////////////////////////
      FIT_WORKOUT_CAPABILITIES GetWorkoutsSupported(void) const
      {
         return GetFieldUINT32ZValue(21, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set workouts_supported field
      ///////////////////////////////////////////////////////////////////////
      void SetWorkoutsSupported(FIT_WORKOUT_CAPABILITIES workoutsSupported)
      {
         SetFieldUINT32ZValue(21, workoutsSupported, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns checksum field
      ///////////////////////////////////////////////////////////////////////
      FIT_CHECKSUM GetChecksum(void) const
      {
         return GetFieldUINT8Value(252, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set checksum field
      ///////////////////////////////////////////////////////////////////////
      void SetChecksum(FIT_CHECKSUM checksum)
      {
         SetFieldUINT8Value(252, checksum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_CAPABILITIES_MESG_HPP)
