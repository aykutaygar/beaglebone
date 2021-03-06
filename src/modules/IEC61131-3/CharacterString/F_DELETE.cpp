/*******************************************************************************
 * Copyright (c) 2013 ACIN
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Monika Wenger
 *   - initial API and implementation and/or initial documentation
 *******************************************************************************/

#include "F_DELETE.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "F_DELETE_gen.cpp"
#endif
#include <anyhelper.h>

DEFINE_FIRMWARE_FB(FORTE_F_DELETE, g_nStringIdF_DELETE)

const CStringDictionary::TStringId FORTE_F_DELETE::scm_anDataInputNames[] = {g_nStringIdIN, g_nStringIdL, g_nStringIdP};

const CStringDictionary::TStringId FORTE_F_DELETE::scm_anDataInputTypeIds[] = {g_nStringIdANY_STRING, g_nStringIdANY_INT, g_nStringIdANY_INT};

const CStringDictionary::TStringId FORTE_F_DELETE::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_F_DELETE::scm_anDataOutputTypeIds[] = {g_nStringIdANY_STRING};

const TForteInt16 FORTE_F_DELETE::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_F_DELETE::scm_anEIWith[] = {0, 1, 2, 255};
const CStringDictionary::TStringId FORTE_F_DELETE::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_F_DELETE::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_F_DELETE::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_F_DELETE::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_F_DELETE::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_F_DELETE::executeEvent(int pa_nEIID){
  if (scm_nEventREQID == pa_nEIID) {
    anyStringFBHelper<FORTE_F_DELETE>(IN().getDataTypeID(), *this);
    sendOutputEvent(scm_nEventCNFID);
  }
}

