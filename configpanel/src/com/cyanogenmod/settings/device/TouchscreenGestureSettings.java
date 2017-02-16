package com.cyanogenmod.settings.device;


import android.os.Bundle;
import android.preference.SwitchPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceCategory;
import android.preference.PreferenceScreen;
import android.provider.Settings.System;
import android.view.MenuItem;

import android.provider.Settings;
import com.cyanogenmod.settings.device.utils.FileUtils;
import cyanogenmod.providers.CMSettings;

public class TouchscreenGestureSettings extends PreferenceActivity {
    private static final String KEY_HAPTIC_FEEDBACK = "touchscreen_gesture_haptic_feedback";

    private SwitchPreference mHapticFeedback;
    private SwitchPreference mGesture;

    private static final String BLACK_SCREEN_SETTINGS_KEY = "black_screen_setting_key";
    private static final String DOUBLE_CLICK_LIGHT_SCREEN_KEY = "double_click_light_screen_key";
    private static final String DRAW_O_START_CAMERA_KEY = "draw_o_start_camera_key";
    private static final String FLASH_LIGHT_KEY = "open_light_device_key";
    private static final String MUSCI_CONTROL_KEY = "music_control_key";
    private static final String MUSIC_CONTROL_NEXT_KEY = "music_control_next_key";
    private static final String MUSIC_CONTROL_PAUSE_KEY = "music_control_pause_key";
    private static final String MUSIC_CONTROL_PREV_KEY = "music_control_prev_key";
    private static final String MUSIC_CONTROL_START_KEY = "music_control_start_key";
    private static final String MUSIC_ROOT_KEY = "music_control";
    private static final String STARTUP_ROOT_KEY ="quick_startup";
    private int isDoubleClickEnable;
    private int isFlashlightEnable;
    private int isMusicControlEnable;
    private int isMusicNextEnable;
    private int isMusicPauseEnable;
    private int isMusicPlayEnable;
    private int isMusicPrevEnable;
    private int isStartUpCameraEnable;
    private int mBlackSettingValues;
    private SwitchPreference mCameraPerference;
    private SwitchPreference mDoubleLightScreenPreference;
    private SwitchPreference mFlashLightPreference;
    private SwitchPreference mMusicNextPreference;
    private SwitchPreference mMusicPausePreference;
    private PreferenceCategory mMusicPrefererce;
    private SwitchPreference mMusicPrevPreference;
    private SwitchPreference mMusicStartPreference;
    private PreferenceCategory mStartUpPreferece;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
        getActionBar().setDisplayHomeAsUpEnabled(true);
        addPreferencesFromResource(R.xml.black_screen_settings);

        mHapticFeedback = (SwitchPreference) findPreference(KEY_HAPTIC_FEEDBACK);
        //mHapticFeedback.setOnPreferenceChangeListener(this);
        mGesture = (SwitchPreference) findPreference(BLACK_SCREEN_SETTINGS_KEY);
        //mGesture.setOnPreferenceChangeListener(this);

        mStartUpPreferece = (PreferenceCategory) findPreference(STARTUP_ROOT_KEY);
        mMusicPrefererce = (PreferenceCategory) findPreference(MUSIC_ROOT_KEY);
        mCameraPerference = (SwitchPreference) findPreference(DRAW_O_START_CAMERA_KEY);
        mDoubleLightScreenPreference = (SwitchPreference) findPreference(DOUBLE_CLICK_LIGHT_SCREEN_KEY);
        mMusicPrevPreference = (SwitchPreference) findPreference(MUSIC_CONTROL_PREV_KEY);
        mMusicNextPreference = (SwitchPreference) findPreference(MUSIC_CONTROL_NEXT_KEY);
        mMusicStartPreference = (SwitchPreference) findPreference(MUSIC_CONTROL_START_KEY);
        mMusicPausePreference = (SwitchPreference) findPreference(MUSIC_CONTROL_PAUSE_KEY);
        mFlashLightPreference = (SwitchPreference) findPreference(FLASH_LIGHT_KEY);
        mMusicPrefererce.removePreference(mMusicPausePreference);
 	}

	public boolean onOptionsItemSelected(MenuItem item) {
		finish();
		return true;
	}
	@Override
    protected void onResume() {
		// TODO Auto-generated method stub
		super.onResume();
		getConfig();
		mCameraPerference.setChecked(isStartUpCameraEnable != 0);
		mDoubleLightScreenPreference.setChecked(isDoubleClickEnable != 0);
	   mMusicPrevPreference.setChecked(isMusicPrevEnable != 0);
	   mMusicNextPreference.setChecked(isMusicNextEnable != 0);
	   mMusicStartPreference.setChecked(isMusicPlayEnable != 0);
	   mMusicPausePreference.setChecked(isMusicPauseEnable != 0);
	   mFlashLightPreference.setChecked(isFlashlightEnable != 0);

        mHapticFeedback.setChecked(CMSettings.System.getInt(getContentResolver(),
                CMSettings.System.TOUCHSCREEN_GESTURE_HAPTIC_FEEDBACK, 1) != 0);
        mGesture.setChecked(FileUtils.readOneLine("/proc/touchpanel/double_tap_enable").equals("1"));
	}
    @SuppressWarnings("deprecation")
	public boolean onPreferenceTreeClick(PreferenceScreen preferenceScreen, Preference preference) {
        if(preference.getKey().equals(BLACK_SCREEN_SETTINGS_KEY)) {
            FileUtils.writeLine("/proc/touchpanel/double_tap_enable", mGesture.isChecked() ? "1" : "0");
            return true;
        } else if (preference.getKey().equals(KEY_HAPTIC_FEEDBACK)) {
            CMSettings.System.putInt(getContentResolver(),
                    CMSettings.System.TOUCHSCREEN_GESTURE_HAPTIC_FEEDBACK, mHapticFeedback.isChecked() ? 1 : 0);
            return true;
        } else if (preference.getKey().equals(DRAW_O_START_CAMERA_KEY)) {
            if (mCameraPerference.isChecked()) {
                set1(mBlackSettingValues, 6);
                return true;
            }
            set0(this.mBlackSettingValues, 6);
            return true;
        } else if (preference.getKey().equals(DOUBLE_CLICK_LIGHT_SCREEN_KEY)) {
            if (mDoubleLightScreenPreference.isChecked()) {
                set1(mBlackSettingValues, 7);
                return true;
            }
            set0(mBlackSettingValues, 7);
            return true;
        } else if (preference.getKey().equals(MUSIC_CONTROL_NEXT_KEY)) {
            if (mMusicNextPreference.isChecked()) {
                set1(mBlackSettingValues, 3);
                return true;
            }
            set0(this.mBlackSettingValues, 3);
            return true;
        } else if (preference.getKey().equals(MUSIC_CONTROL_PREV_KEY)) {
            if (mMusicPrevPreference.isChecked()) {
                set1(mBlackSettingValues, 4);
                return true;
            }
            set0(mBlackSettingValues, 4);
            return true;
        } else if (!preference.getKey().equals(FLASH_LIGHT_KEY)) {
            if (preference.getKey().equals(MUSIC_CONTROL_START_KEY)) {
                if (mMusicStartPreference.isChecked()) {
                    set1(mBlackSettingValues, 1);
                } else {
                    set0(mBlackSettingValues, 1);
                }
            } else if (preference.getKey().equals(MUSIC_CONTROL_PAUSE_KEY)) {
                if (mMusicPausePreference.isChecked()) {
                    set1(mBlackSettingValues, 2);
                } else {
                    set0(mBlackSettingValues, 2);
                }
            }
            return false;
        } else if (mFlashLightPreference.isChecked()) {
            set1(mBlackSettingValues, 0);
            return true;
        } else {
            set0(mBlackSettingValues, 0);
            return true;
        }
    	//return super.onPreferenceTreeClick(preferenceScreen, preference);
    }

    private void getConfig() {
        mBlackSettingValues = System.getInt(getContentResolver(), "blackscreen_gestrue_enable", 0);
        isFlashlightEnable = get(mBlackSettingValues, 0);
        isMusicPlayEnable = get(mBlackSettingValues, 1);
        isMusicPauseEnable = get(mBlackSettingValues, 2);
        isMusicNextEnable = get(mBlackSettingValues, 3);
        isMusicPrevEnable = get(mBlackSettingValues, 4);
        isMusicControlEnable = get(mBlackSettingValues, 5);
        isStartUpCameraEnable = get(mBlackSettingValues, 6);
        isDoubleClickEnable = get(mBlackSettingValues, 7);
        //System.out.println("getConfig mBlackSettingValues : " + this.mBlackSettingValues);
    }

    private int get(int num, int index) {
        return ((1 << index) & num) >> index;
    }

    private int set1(int num, int index) {
        int mul;
        switch (index) {
            case 0:
                mul = 1;
                break;
            case 1:
                mul = 2;
                break;
            case 2:
                mul = 4;
                break;
            case 3:
                mul = 8;
                break;
            case 4:
                mul = 16;
                break;
            case 5:
                mul = 32;
                break;
            case 6:
                mul = 64;
                break;
            case 7:
                mul = 128;
                break;
            default:
                mul = 0;
                break;
        }
        this.mBlackSettingValues = num | mul;
        //System.out.println("set1 mBlackSettingValues : " + this.mBlackSettingValues);
        System.putInt(getContentResolver(), "blackscreen_gestrue_enable", mBlackSettingValues);
        return num | mul;
    }

    private int set0(int num, int index) {
        int mul;
        switch (index) {
            case 0:
                mul = 254;
                break;
            case 1:
                mul = 253;
                break;
            case 2:
                mul = 251;
                break;
            case 3:
                mul = 247;
                break;
            case 4:
                mul = 239;
                break;
            case 5:
                mul = 223;
                break;
            case 6:
                mul = 191;
                break;
            case 7:
                mul = 127;
                break;
            default:
                mul = 255;
                break;
        }
        this.mBlackSettingValues = num & mul;
        //System.out.println("set0 mBlackSettingValues : " + this.mBlackSettingValues);
        System.putInt(getContentResolver(), "blackscreen_gestrue_enable", mBlackSettingValues);
        return num & mul;
    }

}
