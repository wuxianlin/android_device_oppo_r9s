/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package android.security.keystore;

import android.security.keymaster.KeymasterDefs;

/**
 * Class tracking all the keymaster enum values needed for the binder API to keystore.
 * This must be kept in sync with hardware/libhardware/include/hardware/keymaster_defs.h
 * See keymaster_defs.h for detailed descriptions of each constant.
 * @hide
 */
public final class SoterKeymasterDefs {

    private SoterKeymasterDefs() {}

    //add for wechat
    /*
    below for soter usage
    */
    public static final int KM_TAG_SOTER_IS_FROM_SOTER = KeymasterDefs.KM_BOOL | 11000;
    public static final int KM_TAG_SOTER_IS_AUTO_SIGNED_WITH_ATTK_WHEN_GET_PUBLIC_KEY = KeymasterDefs.KM_BOOL | 11001;
    public static final int KM_TAG_SOTER_IS_AUTO_SIGNED_WITH_COMMON_KEY_WHEN_GET_PUBLIC_KEY = KeymasterDefs.KM_BOOL | 11002;
    public static final int KM_TAG_SOTER_AUTO_SIGNED_COMMON_KEY_WHEN_GET_PUBLIC_KEY = KeymasterDefs.KM_BYTES | 11003;
    public static final int KM_TAG_SOTER_AUTO_ADD_COUNTER_WHEN_GET_PUBLIC_KEY = KeymasterDefs.KM_BOOL | 11004;
    public static final int KM_TAG_SOTER_IS_SECMSG_FID_COUNTER_SIGNED_WHEN_SIGN = KeymasterDefs.KM_BOOL | 11005;
    public static final int KM_TAG_SOTER_USE_NEXT_ATTK = KeymasterDefs.KM_BOOL | 11006;
    public static final int KM_TAG_SOTER_UID = KeymasterDefs.KM_UINT | 11007;
    public static final int KM_TAG_SOTER_AUTO_SIGNED_COMMON_KEY_WHEN_GET_PUBLIC_KEY_BLOB = KeymasterDefs.KM_BYTES | 11008;
    //add end
}
