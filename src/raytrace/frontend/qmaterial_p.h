/*
 * Copyright (C) 2018-2019 Michał Siejak
 * This file is part of Quartz - a raytracing aspect for Qt3D.
 * See LICENSE file for licensing information.
 */

#pragma once

#include <Qt3DRaytrace/qmaterial.h>
#include <Qt3DCore/private/qcomponent_p.h>
#include <Qt3DCore/private/qtypedpropertyupdatechange_p.h>

namespace Qt3DRaytrace {

struct QMaterialData
{
    QColor albedo;
};

class QMaterialPrivate : public Qt3DCore::QComponentPrivate
{
public:
    QMaterialPrivate();
    Q_DECLARE_PUBLIC(QMaterial)

    QMaterialData m_data;
};

} // Qt3DRaytrace