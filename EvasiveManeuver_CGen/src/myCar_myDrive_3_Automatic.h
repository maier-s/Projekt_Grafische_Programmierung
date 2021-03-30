/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.6.0
 * CODE GENERATOR:..............V7.6.0
 * COMPONENT:...................myCar.myDrive_3
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_MYCAR_MYDRIVE_3_AUTOMATIC_H_
#define _ASD_MYCAR_MYDRIVE_3_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 4))
# error NOT COMPLIANT (< compliance level 4) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "myCar_MyTurn_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myDrive_3_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct myCar_myDrive_3_Automatic_CAL_MEM_SUBSTRUCT {
   struct myCar_MyTurn_Automatic_CAL_MEM_SUBSTRUCT MyTurn_instance;
   struct CharTable1_real32_6_real32_TYPE AirFriction;
   struct CharTable1_real32_6_real32_TYPE BrakeMomentum;
   struct CharTable2_real32_6_real32_6_real32_TYPE EngineMomentum;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myDrive_3_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myDrive_3_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct myCar_myDrive_3_Automatic_RAM_SUBSTRUCT {
   float32 bearing;
   float32 dh;
   float32 dist;
   float32 ds;
   float32 h;
   float32 momentum;
   float32 x;
   float32 y;
   uint16 v;
   struct myCar_MyTurn_Automatic_RAM_SUBSTRUCT MyTurn_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myDrive_3_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'myCar_myDrive_3_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct myCar_myDrive_3_Automatic {
   struct myCar_myDrive_3_Automatic_CAL_MEM_SUBSTRUCT * myCar_myDrive_3_Automatic_CAL_MEM;
   struct myCar_myDrive_3_Automatic_RAM_SUBSTRUCT * myCar_myDrive_3_Automatic_RAM;
   struct myCar_MyTurn_Automatic MyTurn_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'myCar_myDrive_3_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ..................myCar_myDrive_3_Automatic */
#define _myCar_myDrive_3_Automatic_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class myCar_myDrive_3_Automatic
 ******************************************************************************/
extern void myCar_myDrive_3_Automatic_move (
               const struct myCar_myDrive_3_Automatic * self,
   /* IN    */ const float32                            powerCtrl,
   /* IN    */ const float32                            brakeCtrl,
   /* IN    */ const float32                            mydt,
   /* IN    */ const float32                            myg,
   /* IN    */ const float32                            beta,
   /* IN    */ const float32                            height,
   /* IN    */ const float32                            length
   );
extern void myCar_myDrive_3_Automatic_reset ( const struct myCar_myDrive_3_Automatic * self);



#endif /* _ASD_MYCAR_MYDRIVE_3_AUTOMATIC_H_ */
