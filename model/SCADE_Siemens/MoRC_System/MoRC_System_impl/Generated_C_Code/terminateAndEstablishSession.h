/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _terminateAndEstablishSession_H_
#define _terminateAndEstablishSession_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* terminateAndEstablishSession::initiateTermination */ initiateTermination;
  kcg_bool /* terminateAndEstablishSession::initiateEstablishingNewSession */ initiateEstablishingNewSession;
  orderToContactAnRBC_Type /* terminateAndEstablishSession::newOrderToEstablishASession_out */ newOrderToEstablishASession_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* terminateAndEstablishSession::SM1 */ SM1_state_nxt;
  orderToContactAnRBC_Type /* terminateAndEstablishSession::storedOrder */ storedOrder;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminateAndEstablishSession;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.3.5.2 */
/** Determines, if an establishing or established session has to be terminated due to a new order that request a session with a different RBC. */
/** Initiates the termination, waits til the termination is achieved and initiates the new session. */
/** "Remark_1" {Description = "- Name: terminateAndEstablishSession - Description: Terminates the actual session and establishes a new one, if required.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* terminateAndEstablishSession */
extern void terminateAndEstablishSession(
  /* terminateAndEstablishSession::newOrderToEstablishASession_in */orderToContactAnRBC_Type *newOrderToEstablishASession_in,
  /* terminateAndEstablishSession::sessionStatus */sessionStatus_Type sessionStatus,
  /* terminateAndEstablishSession::OBU_hasToEstablishANewSession */kcg_bool OBU_hasToEstablishANewSession,
  outC_terminateAndEstablishSession *outC);

extern void terminateAndEstablishSession_reset(
  outC_terminateAndEstablishSession *outC);

#endif /* _terminateAndEstablishSession_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminateAndEstablishSession.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
