/*******************************************************************************
 * Copyright (c) 2005 - 2010, 2017 ACIN, fortiss GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *  Alois Zoitl, Rene Smodic - initial API and implementation and/or initial documentation
 *******************************************************************************/
#include "forte_sync.h"

CPCSyncObject::CPCSyncObject(){
  pthread_mutex_init(&m_oMutexHandle, 0);
}

CPCSyncObject::~CPCSyncObject(){
  pthread_mutex_destroy(&m_oMutexHandle);
  //TODO handle return value
}
