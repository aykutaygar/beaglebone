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

#include "F_ABS.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "F_ABS_gen.cpp"
#endif
#include <anyhelper.h>

DEFINE_FIRMWARE_FB(FORTE_F_ABS, g_nStringIdF_ABS)

const CStringDictionary::TStringId FORTE_F_ABS::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_F_ABS::scm_anDataInputTypeIds[] = {g_nStringIdANY_NUM};

const CStringDictionary::TStringId FORTE_F_ABS::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_F_ABS::scm_anDataOutputTypeIds[] = {g_nStringIdANY_NUM};

const TForteInt16 FORTE_F_ABS::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_F_ABS::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_F_ABS::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_F_ABS::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_F_ABS::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_F_ABS::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_F_ABS::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_F_ABS::executeEvent(int pa_nEIID){
  if (scm_nEventREQID == pa_nEIID) {
  anyMagnitudeFBHelper<FORTE_F_ABS>(IN().getDataTypeID(), *this);
  sendOutputEvent(scm_nEventCNFID);
  }
}



