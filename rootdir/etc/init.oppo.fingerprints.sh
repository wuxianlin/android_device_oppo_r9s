#ifdef VENDOR_EDIT
#Ziqing.GUO@Mobile.BSP.FINGERPRINT, 2016/01/16, Add for fingerprint
chown system:system /sys/bus/platform/devices/soc:fpc_fpc1020*/irq
chown system:system /sys/bus/platform/devices/soc:fpc_fpc1020*/irq_enable
chown system:system /sys/bus/platform/devices/soc:fpc_fpc1020*/wakelock_enable
chown system:system /dev/homekey
chmod 0666 /dev/homekey
chown system:system /proc/fp_unlock/lcd_status
chmod 0666 /proc/fp_unlock/lcd_status
chown system:system /proc/fp_unlock/lcdoff_status
chmod 0666 /proc/fp_unlock/lcdoff_status
#endif