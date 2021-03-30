/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.6.0
 * CODE GENERATOR:..............V7.6.0
 * COMPONENT:...................myCar.MyTurn
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_MyTurn_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define bearing_VAL (self->myCar_MyTurn_Automatic_RAM->bearing)
#define D_VAL (self->myCar_MyTurn_Automatic_CAL_MEM->D)
#define dpi_VAL (self->myCar_MyTurn_Automatic_RAM->dpi)
#define pi_VAL (self->myCar_MyTurn_Automatic_RAM->pi)
#define x_VAL (self->myCar_MyTurn_Automatic_RAM->x)
#define y_VAL (self->myCar_MyTurn_Automatic_RAM->y)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_MyTurn_Automatic_move'
 * ----------------------------------------------------------------------------
 * model name:...................................'move'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_MyTurn_Automatic_move (
               const struct myCar_MyTurn_Automatic * self,
   /* IN    */ const float32                         beta,
   /* IN    */ const float32                         v,
   /* IN    */ const float32                         mydt
   )
{
   bearing_VAL
      = bearing_VAL + ((((D_VAL == 0.0F) ? v : (v / D_VAL))) * (float32)tan((float64)beta) * mydt * 7.71604938271605e-2F);
   if (bearing_VAL > pi_VAL)
   {
      bearing_VAL = bearing_VAL - dpi_VAL;
   } /* end if */
   if (bearing_VAL < -pi_VAL)
   {
      bearing_VAL = bearing_VAL + dpi_VAL;
   } /* end if */
   x_VAL
      = x_VAL + (v * (float32)cos((float64)bearing_VAL) * mydt * 2.77777777777778e-1F);
   y_VAL
      = y_VAL + (v * (float32)sin((float64)bearing_VAL) * mydt * 2.77777777777778e-1F);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_MyTurn_Automatic_move'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_MyTurn_Automatic_reset'
 * ----------------------------------------------------------------------------
 * model name:...................................'reset'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_MyTurn_Automatic_reset ( const struct myCar_MyTurn_Automatic * self)
{
   bearing_VAL = 0.0F;
   x_VAL = 0.0F;
   y_VAL = 0.0F;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_MyTurn_Automatic_reset'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


