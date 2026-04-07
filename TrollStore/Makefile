TARGET := iphone:clang:16.5:14.0
INSTALL_TARGET_PROCESSES = TrollStore
ARCHS = arm64

TARGET_CODESIGN = ldid

include $(THEOS)/makefiles/common.mk

APPLICATION_NAME = TrollStore

TrollStore_FILES = $(wildcard *.m) $(wildcard ../Shared/*.m)
TrollStore_FRAMEWORKS = UIKit CoreGraphics CoreServices CoreTelephony
TrollStore_PRIVATE_FRAMEWORKS = Preferences MobileIcons MobileContainerManager
TrollStore_LIBRARIES = archive
TrollStore_CFLAGS = -fobjc-arc -I../Shared -I$(shell brew --prefix)/opt/libarchive/include
TrollStore_CODESIGN_FLAGS = -Sentitlements.plist

include $(THEOS_MAKE_PATH)/application.mk
TrollStore_LDFLAGS = -Wl,-undefined,dynamic_lookup
