/*
 * Copyright (c) 2011-2013, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id$
 */

/**
 * \file
 *         Source file for function publishText in component componentOne.
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "chromosomeGui/adv/componentOne/include/publishTextFunction.h"

#include "chromosomeGui/adv/componentOne/include/publishTextFunctionWrapper.h"
#include "chromosomeGui/adv/componentOne/include/componentOneComponentWrapper.h"

// PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_C_INCLUDES) ENABLED START
#include "xme/core/log.h"
#include "xme/hal/include/mem.h"
#include "xme/hal/include/safeString.h"

#ifndef WIN32
#include <mntent.h>
#include <unistd.h>
#include <sys/statvfs.h>
#include <sys/stat.h>
#else // #ifndef WIN32
#include <Windows.h>
#endif  // #ifndef WIN32

#include <inttypes.h>
#include <stdio.h>
// PROTECTED REGION END

/******************************************************************************/
/***   Static variables                                                     ***/
/******************************************************************************/
/**
 * \brief  Variable holding the value of the optional output port 'sendText'.
 *
 * \details If necessary initialize this in the init function.
 *          The value of this variable will be written to the port at the end of
 *          the step function.
 */
static chromosomeGui_topic_WriteText_t
portSendTextData;

// PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_C_STATICVARIABLES) ENABLED START
static char textData[1000];

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/
/**
 * \brief  Fills the given text variable with the text.
 *
 * \param[in,out] text Address of a structure to fill with information.
 *                Must not be NULL.
 */
static void
fillText
(
    char* text
);
/******************************************************************************/
/***   Helper functions                                                     ***/
/******************************************************************************/

#ifndef WIN32

// Linux implementation

static void
fillText
(
    char* text
)
{
    do
    {
        XME_LOG(XME_LOG_ALWAYS, "Which text do you want to send to GUI: ");
        if (!scanf("%s", text))
        {
            text = NULL;
        }
    }
    while (text == NULL);
}

#else // #ifndef WIN32
// Windows implementation

static void
fillText
(
    char* text
)
{
    do
    {
        XME_LOG(XME_LOG_ALWAYS, "\nWhich text do you want to send to GUI: ");
        scanf_s("%s", text, 1000);
    }
    while (text == NULL);
    XME_LOG(XME_LOG_ALWAYS, "\n");
}

#endif // #ifndef WIN32
// PROTECTED REGION END

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
xme_status_t
chromosomeGui_adv_componentOne_publishTextFunction_init
(
    void* param
)
{
    // PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_INITIALIZE_C) ENABLED START
    
    // TODO: Auto-generated stub
    
    XME_UNUSED_PARAMETER(param);
    //fillText(textData);
    return XME_STATUS_SUCCESS;
    
    // PROTECTED REGION END
}

void
chromosomeGui_adv_componentOne_publishTextFunction_step
(
    void* param
)
{
    xme_status_t status[1];
	static int count = 0;
    
    chromosomeGui_topic_WriteText_t* portSendTextDataPtr = &portSendTextData;
    
    {
        // PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_STEP_C) ENABLED START
		if(count == 20)
		{
			fillText(textData);
			count = 0;
			xme_hal_mem_copy(&portSendTextData, textData, sizeof(portSendTextData));
		}
		count++;
        // TODO: Auto-generated stub
    
        XME_UNUSED_PARAMETER(param);
        XME_UNUSED_PARAMETER(status);
        
        // PROTECTED REGION END
    }
    
    status[0] = chromosomeGui_adv_componentOne_componentOneComponentWrapper_writePortSendText(portSendTextDataPtr);
    
    {
        // PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_STEP_2_C) ENABLED START
    
        // TODO: Auto-generated stub
        //       Check return values of writePort calls here
    
        // PROTECTED REGION END
    }
}

void
chromosomeGui_adv_componentOne_publishTextFunction_fini(void)
{
    // PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_TERMINATE_C) ENABLED START
    
    // TODO: Auto-generated stub
    
    // PROTECTED REGION END
}

// PROTECTED REGION ID(CHROMOSOMEGUI_ADV_COMPONENTONE_PUBLISHTEXTFUNCTION_IMPLEMENTATION_C) ENABLED START

// PROTECTED REGION END