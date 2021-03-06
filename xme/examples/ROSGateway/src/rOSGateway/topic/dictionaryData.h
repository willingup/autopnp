/*
 * Copyright (c) 2011-2014, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id: dictionaryData.h 7824 2014-03-14 08:02:47Z kainz $
 */

/**
 * \file
 *         Topic registry extension.
 *         Project specific topic data structures are defined here.
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

#ifndef ROSGATEWAY_DICTIONARY_TOPICDATA_H
#define ROSGATEWAY_DICTIONARY_TOPICDATA_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include <stdint.h>

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/
/**
 * \typedef ROSGateway_topic_message_t
 *
 * \brief Data type for topic 'message' (identifier: ROSGATEWAY_TOPIC_MESSAGE).
 */
#pragma pack(push, 1)
typedef struct
{
    char text[256];
} ROSGateway_topic_message_t;
#pragma pack(pop)

/**
 * \typedef ROSGateway_topic_status_t
 *
 * \brief Data type for topic 'status' (identifier: ROSGATEWAY_TOPIC_STATUS).
 */
#pragma pack(push, 1)
typedef struct
{
    char value;
} ROSGateway_topic_status_t;
#pragma pack(pop)

/**
 * \typedef ROSGateway_topic_sumRequest_t
 *
 * \brief Data type for topic 'sumRequest' (identifier: ROSGATEWAY_TOPIC_SUMREQUEST).
 */
#pragma pack(push, 1)
typedef struct
{
    int64_t a;
    int64_t b;
} ROSGateway_topic_sumRequest_t;
#pragma pack(pop)

/**
 * \typedef ROSGateway_topic_sumResponse_t
 *
 * \brief Data type for topic 'sumResponse' (identifier: ROSGATEWAY_TOPIC_SUMRESPONSE).
 */
#pragma pack(push, 1)
typedef struct
{
    int64_t sum;
} ROSGateway_topic_sumResponse_t;
#pragma pack(pop)

/**
 * \typedef ROSGateway_topic_differenceRequest_t
 *
 * \brief Data type for topic 'differenceRequest' (identifier: ROSGATEWAY_TOPIC_DIFFERENCEREQUEST).
 */
#pragma pack(push, 1)
typedef struct
{
    int64_t a;
    int64_t b;
} ROSGateway_topic_differenceRequest_t;
#pragma pack(pop)

/**
 * \typedef ROSGateway_topic_differenceResponse_t
 *
 * \brief Data type for topic 'differenceResponse' (identifier: ROSGATEWAY_TOPIC_DIFFERENCERESPONSE).
 */
#pragma pack(push, 1)
typedef struct
{
    int64_t difference;
} ROSGateway_topic_differenceResponse_t;
#pragma pack(pop)
#endif // #ifndef ROSGATEWAY_DICTIONARY_TOPICDATA_H
