/*
 * Oreka -- A media capture and retrieval platform
 *
 * Copyright (C) 2005, orecx LLC
 *
 * http://www.orecx.com
 *
 */
#ifndef __SIPSKINNYPARSERS_H__
#define __SIPSKINNYPARSERS_H__ s

#include <list>
#include <map>
#include "PacketHeaderDefs.h"
#include "Rtp.h"
#include "VoIpSession.h"
#include "SipTcp.h"
#include "Win1251.h"

bool TrySipInvite(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipSubscribe(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySip302MovedTemporarily(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySip200Ok(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipSessionProgress(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipTcp(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, TcpHeaderStruct* tcpHeader);
static bool SipFailedTcpToUdp(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, TcpHeaderStruct* tcpHeader, u_char *pBuffer, int bLength);
static bool SipInviteTcpToUdp(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, TcpHeaderStruct* tcpHeader, u_char *pBuffer, int bLength);
static bool SipByeTcpToUdp(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader,TcpHeaderStruct* tcpHeader, u_char *pBuffer, int bLength);
bool TryLogFailedSip(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipInfo(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipNotify(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipBye(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);
bool TrySipRefer(EthernetHeaderStruct* ethernetHeader, IpHeaderStruct* ipHeader, UdpHeaderStruct* udpHeader, u_char* udpPayload, u_char* packetEnd);

#endif
