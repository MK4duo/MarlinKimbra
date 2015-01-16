/**
 * German
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_DE_H
#define LANGUAGE_DE_H

#define WELCOME_MSG                         MACHINE_NAME " Bereit."
#define MSG_SD_INSERTED                     "SDKarte erkannt"
#define MSG_SD_REMOVED                      "SDKarte entfernt"
#define MSG_MAIN                            "Hauptmenü"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Stepper abschalt."
#define MSG_AUTO_HOME                       "Auto Nullpunkt"
#define MSG_BED_SETTING                     "Bed Setting"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Setze Nullpunkt"
#define MSG_PREHEAT_PLA                     "Vorwärmen PLA"
#define MSG_PREHEAT_PLA0                    "Vorwärmen PLA 1"
#define MSG_PREHEAT_PLA1                    "Vorwärmen PLA 2"
#define MSG_PREHEAT_PLA2                    "Vorwärmen PLA 3"
#define MSG_PREHEAT_PLA3                    "Preheat PLA 4"
#define MSG_PREHEAT_PLA0123                 "Preheat PLA All"
#define MSG_PREHEAT_PLA_BEDONLY             "Vorw. PLA Bett"
#define MSG_PREHEAT_PLA_SETTINGS            "Vorwärm. PLA Ein."
#define MSG_PREHEAT_ABS                     "Vorwärmen ABS"
#define MSG_PREHEAT_ABS0                    "Vorwärmen ABS 1"
#define MSG_PREHEAT_ABS1                    "Vorwärmen ABS 2"
#define MSG_PREHEAT_ABS2                    "Vorwärmen ABS 3"
#define MSG_PREHEAT_ABS3                    "Preheat ABS 4"
#define MSG_PREHEAT_ABS0123                 "Preheat ABS All"
#define MSG_PREHEAT_ABS_BEDONLY             "Vorw. ABS Bett"
#define MSG_PREHEAT_ABS_SETTINGS            "Vorwärm. ABS Ein."
#define MSG_PREHEAT_GUM                     "Preheat GUM"
#define MSG_PREHEAT_GUM0                    "Preheat GUM 1"
#define MSG_PREHEAT_GUM1                    "Preheat GUM 2"
#define MSG_PREHEAT_GUM2                    "Preheat GUM 3"
#define MSG_PREHEAT_GUM3                    "Preheat GUM 4"
#define MSG_PREHEAT_GUM_BEDONLY             "Preheat GUM Bed"
#define MSG_PREHEAT_GUM_SETTINGS            "Preheat GUM conf"
#define MSG_COOLDOWN                        "Abkühlen"
#define MSG_SWITCH_PS_ON                    "Switch Power On"
#define MSG_SWITCH_PS_OFF                   "Switch Power Off"
#define MSG_EXTRUDE                         "Extrude"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Achsen bewegen"
#define MSG_MOVE_X                          "X bewegen"
#define MSG_MOVE_Y                          "Y bewegen"
#define MSG_MOVE_Z                          "Z bewegen"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_E3                         "Extruder4"
#define MSG_MOVE_01MM                       "0.1mm bewegen"
#define MSG_MOVE_1MM                        "1mm bewegen"
#define MSG_MOVE_10MM                       "10mm bewegen"
#define MSG_SPEED                           "Geschw"
#define MSG_NOZZLE                          "Düse"
#define MSG_NOZZLE1                         "Düse2"
#define MSG_NOZZLE2                         "Düse3"
#define MSG_NOZZLE3                         "Düse4"
#define MSG_BED                             "Bett"
#define MSG_FAN_SPEED                       "Lüftergeschw."
#define MSG_FLOW                            "Fluss"
#define MSG_FLOW0                           "Fluss 0"
#define MSG_FLOW1                           "Fluss 1"
#define MSG_FLOW2                           "Fluss 2"
#define MSG_FLOW3                           "Fluss 3"
#define MSG_CONTROL                         "Einstellungen"
#define MSG_MIN                             "\002 Min"
#define MSG_MAX                             "\002 Max"
#define MSG_FACTOR                          "\002 Faktor"
#define MSG_AUTOTEMP                        "AutoTemp"
#define MSG_ON                              "Ein"
#define MSG_OFF                             "Aus"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_ACC                             "Acc"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-Retract"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_E0STEPS                         "E0steps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Bewegung"
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EPROM                     "EPROM speichern"
#define MSG_LOAD_EPROM                      "EPROM laden"
#define MSG_RESTORE_FAILSAFE                "Standardkonfig."
#define MSG_REFRESH                         "Aktualisieren"
#define MSG_WATCH                           "Beobachten"
#define MSG_PREPARE                         "Vorbereitung"
#define MSG_TUNE                            "Justierung"
#define MSG_PAUSE_PRINT                     "Druck anhalten"
#define MSG_RESUME_PRINT                    "Druck fortsetz"
#define MSG_STOP_PRINT                      "Druck stoppen"
#define MSG_CARD_MENU                       "SDKarten Menü"
#define MSG_NO_CARD                         "Keine SDKarte"
#define MSG_DWELL                           "Warten..."
#define MSG_USERWAIT                        "Warte auf Nutzer"
#define MSG_RESUMING                        "Druck fortsetzung"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Kein Zug."
#define MSG_KILLED                          "KILLED"
#define MSG_STOPPED                         "GESTOPPT"
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Wechs. Retract mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Wechs. UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Filament wechseln"
#define MSG_INIT_SDCARD                     "Init. SD-Card"
#define MSG_CNG_SDCARD                      "Change SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_RECTRACT                        "Retract"
#define MSG_LASER                           "Laser Preset"
#define MSG_CONFIG                          "Configuration"
#define MSG_BAUDRATE                        "Baudrate"
#define MSG_RECTRACT                        "Rectract"
#define MSG_E_BOWDEN_LENGTH                 "Extrude " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_R_BOWDEN_LENGTH                 "Retract " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_PURGE_XMM                       "Purge " STRINGIFY(LCD_PURGE_LENGTH) "mm"
#define MSG_RETRACT_XMM                     "Retract " STRINGIFY(LCD_RETRACT_LENGTH) "mm"

#ifdef DELTA
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
#endif // DELTA

#ifdef FIRMWARE_TEST
#define MSG_FWTEST_YES                      "Put the Y command to go next"
#define MSG_FWTEST_NO                       "Put the N command to go next"
#define MSG_FWTEST_YES_NO                   "Put the Y or N command to go next"
#define MSG_FWTEST_ENDSTOP_ERR              "ENDSTOP ERROR! Check wire and connection"
#define MSG_FWTEST_PRESS                    "Press and hold the endstop "
#define MSG_FWTEST_INVERT                   "Reverse value in "
#define MSG_FWTEST_XAXIS                    "Has the nozzle moved to the right?"
#define MSG_FWTEST_YAXIS                    "Has the nozzle moved forward?"
#define MSG_FWTEST_ZAXIS                    "Has the nozzle moved up?"
#define MSG_FWTEST_01                       "Manually move the axes X, Y and Z away from the endstop"
#define MSG_FWTEST_02                       "Do you want check ENDSTOP?"
#define MSG_FWTEST_03                       "Start check ENDSTOP"
#define MSG_FWTEST_04                       "Start check MOTOR"
#define MSG_FWTEST_ATTENTION                "ATTENTION! Check that the three axes are more than 5 mm from the endstop!"
#endif // FIRMWARE_TEST

#endif // LANGUAGE_DE_H