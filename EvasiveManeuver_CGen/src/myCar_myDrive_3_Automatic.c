/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.6.0
 * CODE GENERATOR:..............V7.6.0
 * COMPONENT:...................myCar.myDrive_3
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_myDrive_3_Automatic.h"
#include "ESDL_Linear_Interpolation.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define AirFriction_REF (&(self->myCar_myDrive_3_Automatic_CAL_MEM->AirFriction))
#define bearing_VAL (self->myCar_myDrive_3_Automatic_RAM->bearing)
#define BrakeMomentum_REF (&(self->myCar_myDrive_3_Automatic_CAL_MEM->BrakeMomentum))
#define dh_VAL (self->myCar_myDrive_3_Automatic_RAM->dh)
#define dist_VAL (self->myCar_myDrive_3_Automatic_RAM->dist)
#define ds_VAL (self->myCar_myDrive_3_Automatic_RAM->ds)
#define EngineMomentum_REF (&(self->myCar_myDrive_3_Automatic_CAL_MEM->EngineMomentum))
#define h_VAL (self->myCar_myDrive_3_Automatic_RAM->h)
#define momentum_VAL (self->myCar_myDrive_3_Automatic_RAM->momentum)
#define MyTurn_instance_REF (&(self->MyTurn_instance))
#define v_VAL (self->myCar_myDrive_3_Automatic_RAM->v)
#define x_VAL (self->myCar_myDrive_3_Automatic_RAM->x)
#define y_VAL (self->myCar_myDrive_3_Automatic_RAM->y)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_myDrive_3_Automatic_move'
 * ----------------------------------------------------------------------------
 * model name:...................................'move'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_myDrive_3_Automatic_move (
               const struct myCar_myDrive_3_Automatic * self,
   /* IN    */ const float32                            powerCtrl,
   /* IN    */ const float32                            brakeCtrl,
   /* IN    */ const float32                            mydt,
   /* IN    */ const float32                            myg,
   /* IN    */ const float32                            beta,
   /* IN    */ const float32                            height,
   /* IN    */ const float32                            length
   )
{
   /* temp. variables */
   float32 _t1real32;

   if (dist_VAL > length)
   {
      dist_VAL = dist_VAL - length;
   } /* end if */
   _t1real32 = (float32)v_VAL * 0.01F;
   momentum_VAL
      = ESDL_Linear_CharTable2_getAt_r32r32r32((EngineMomentum_REF)->xSize, (EngineMomentum_REF)->xDist, (EngineMomentum_REF)->ySize, (EngineMomentum_REF)->yDist, (EngineMomentum_REF)->values, powerCtrl, _t1real32);
   ds_VAL = (float32)v_VAL * mydt * 2.77777777777778e-3F;
   dist_VAL = ds_VAL + dist_VAL;
   dh_VAL = h_VAL - height;
   h_VAL = height;
   _t1real32
      = ((ESDL_Linear_CharTable1_getAt_r32r32((BrakeMomentum_REF)->xSize, (BrakeMomentum_REF)->xDist, (BrakeMomentum_REF)->values, brakeCtrl) + momentum_VAL + ESDL_Linear_CharTable1_getAt_r32r32((AirFriction_REF)->xSize, (AirFriction_REF)->xDist, (AirFriction_REF)->values, _t1real32) + (myg * (((ds_VAL == 0.0F) ? dh_VAL : (dh_VAL / ds_VAL))) * 9.81F)) * mydt * 360.0F) + (float32)v_VAL;
   _t1real32
      = ((_t1real32 >= 0.0F) ? (((_t1real32 <= 20000.0F) ? _t1real32 : 20000.0F)) : 0.0F);
   _t1real32
      = ((_t1real32 < 0.0F) ? (_t1real32 - 0.5F) : (_t1real32 + 0.5F));
   v_VAL
      = ((_t1real32 >= 0.0F) ? (((_t1real32 <= 20000.0F) ? (uint16)_t1real32 : 20000U)) : 0U);
   myCar_MyTurn_Automatic_move(MyTurn_instance_REF, beta, (float32)v_VAL * 0.01F, mydt);
   bearing_VAL
      = self->MyTurn_instance.myCar_MyTurn_Automatic_RAM->bearing * 57.2957812199555F;
   x_VAL = self->MyTurn_instance.myCar_MyTurn_Automatic_RAM->x;
   y_VAL = self->MyTurn_instance.myCar_MyTurn_Automatic_RAM->y;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_myDrive_3_Automatic_move'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_myDrive_3_Automatic_reset'
 * ----------------------------------------------------------------------------
 * model name:...................................'reset'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_myDrive_3_Automatic_reset ( const struct myCar_myDrive_3_Automatic * self)
{
   h_VAL = 0.0F;
   dist_VAL = h_VAL;
   x_VAL = dist_VAL;
   y_VAL = x_VAL;
   v_VAL = 0U;
   bearing_VAL = 0.0F;
   myCar_MyTurn_Automatic_reset(MyTurn_instance_REF);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_myDrive_3_Automatic_reset'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


