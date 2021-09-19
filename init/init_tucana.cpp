/*
   Copyright (c) 2015, The Linux Foundation. All rights reserved.
   Copyright (C) 2016 The CyanogenMod Project.
   Copyright (C) 2019-2020 The LineageOS Project.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.
   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_

#include <android-base/properties.h>
#include <sys/_system_properties.h>
#include "vendor_init.h"

using android::base::GetProperty;

void property_override(char const prop[], char const value[])
{
    prop_info *pi;

    pi = (prop_info*) __system_property_find(prop);
    if (pi)
        __system_property_update(pi, value, strlen(value));
    else
        __system_property_add(prop, strlen(prop), value, strlen(value));
}

void vendor_load_properties() {
    std::string region;

    region = android::base::GetProperty("ro.boot.hwc", "");

    if (region == "CN")
    {
        property_override("ro.product.model", "MI CC9 Pro");
        property_override("ro.build.description", "tucana_eea-user 11 RKQ1.200826.002 V12.1.3.0.RFDEUXM release-keys");
        property_override("ro.build.fingerprint", "google/redfin/redfin:11/RQ3A.210905.001/7511028:user/release-keys");
        property_override("ro.vendor.build.fingerprint", "google/redfin/redfin:11/RQ3A.210905.001/7511028:user/release-keys");
    }
    else if (region == "GLOBAL")
    {
        property_override("ro.product.model", "Mi Note 10");
        property_override("ro.build.description", "tucana_eea-user 11 RKQ1.200826.002 V12.1.3.0.RFDEUXM release-keys");
        property_override("ro.build.fingerprint", "google/redfin/redfin:11/RQ3A.210905.001/7511028:user/release-keys");
        property_override("ro.vendor.build.fingerprint", "google/redfin/redfin:11/RQ3A.210905.001/7511028:user/release-keys");
    }
}
