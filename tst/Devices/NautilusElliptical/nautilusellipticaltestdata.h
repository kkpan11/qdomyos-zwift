﻿#pragma once
#include "Devices/Elliptical/ellipticaltestdata.h"

#include "devices/nautiluselliptical/nautiluselliptical.h"

class NautilusEllipticalTestData : public EllipticalTestData {

public:
    NautilusEllipticalTestData(): EllipticalTestData("Nautilus Elliptical") {
        this->addDeviceName("NAUTILUS E", comparison::StartsWithIgnoreCase);
    }

    deviceType get_expectedDeviceType() const override { return deviceType::NautilusElliptical; }

    bool get_isExpectedDevice(bluetoothdevice * detectedDevice) const override {
        return dynamic_cast<nautiluselliptical*>(detectedDevice)!=nullptr;
    }
};

