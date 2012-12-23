/*
 * Copyright (C) 2012 Fan Out Networks, Inc.
 *
 * This file is part of Pushpin.
 *
 * Pushpin is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Pushpin is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ACCEPTRESPONSEPACKET_H
#define ACCEPTRESPONSEPACKET_H

#include <QVariant>
#include <QPair>
#include <QList>
#include "httprequestdata.h"
#include "inspectresponsepacket.h"
#include "httpresponsedata.h"

class AcceptResponsePacket
{
public:
	typedef QPair<QByteArray, QByteArray> Rid;
	QList<Rid> rids;
	HttpRequestData request;
	bool https;

	bool haveInspectInfo;
	InspectResponsePacket inspectInfo;

	bool haveResponse;
	HttpResponseData response;

	AcceptResponsePacket();

	QVariant toVariant() const;
};

#endif