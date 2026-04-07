#import <Foundation/Foundation.h>

static inline NSDictionary* getCommonTCCServices() {
    static NSDictionary* services;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        services = @{
            @"kTCCServicePhotos": @"Photo Library",
            @"kTCCServicePhotosAdd": @"Photo Library (Add)",
            @"kTCCServiceCamera": @"Camera",
            @"kTCCServiceMicrophone": @"Microphone",
            @"kTCCServiceAddressBook": @"Contacts",
            @"kTCCServiceCalendar": @"Calendars",
            @"kTCCServiceReminders": @"Reminders",
            @"kTCCServiceWillow": @"HomeKit",
            @"kTCCServiceGameCenterFriends": @"Game Center Friends",
            @"kTCCServiceExposureNotification": @"Exposure Notifications",
            @"kTCCServiceFocusStatus": @"Focus Status",
            @"kTCCServiceUserTracking": @"User Tracking",
            @"kTCCServiceFaceID": @"Face ID",
            @"kTCCServiceMediaLibrary": @"Apple Media Library",
            @"kTCCServiceMotion": @"Motion Sensors",
            @"kTCCServiceNearbyInteraction": @"Nearby Device Interaction",
            @"kTCCServiceBluetoothAlways": @"Bluetooth (Always)",
            @"kTCCServiceBluetoothWhileInUse": @"Bluetooth (While In Use)",
            @"kTCCServiceBluetoothPeripheral": @"Bluetooth (Peripherals)",
            @"kTCCServiceLocation": @"Location"
        };
    });
    return services;
}
#define commonTCCServices getCommonTCCServices()
