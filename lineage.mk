# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from r9s device
$(call inherit-product, device/oppo/r9s/device.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

PRODUCT_NAME := lineage_r9s
PRODUCT_DEVICE := r9s
PRODUCT_MANUFACTURER := OPPO
PRODUCT_BRAND := OPPO
#PRODUCT_MODEL := OPPO R9s

PRODUCT_GMS_CLIENTID_BASE := android-oppo

#TARGET_VENDOR_PRODUCT_NAME := R9s
#TARGET_VENDOR_DEVICE_NAME := R9s
#PRODUCT_BUILD_PROP_OVERRIDES += TARGET_DEVICE=R9s PRODUCT_NAME=R9s

#PRODUCT_BUILD_PROP_OVERRIDES += \
#    BUILD_FINGERPRINT=OPPO/R9s/R9s:7.1.1/NMF26F/1490443277:user/release-keys \
#    PRIVATE_BUILD_DESC="msm8953_64-user 7.1.1 NMF26F 992 dev-keys"

TARGET_VENDOR := OPPO
