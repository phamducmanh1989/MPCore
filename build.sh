#!/bin/bash

set -e

IOSSDK_VER="12.2"

# xcodebuild -showsdks

xcodebuild -project MPCore.xcodeproj -target MPCore -configuration Release \
    COPY_PHASE_STRIP=YES \
    DEBUG_INFORMATION_FORMAT=dwarf-with-dsym \
    GCC_GENERATE_DEBUGGING_SYMBOLS=NO \
    GCC_SYMBOLS_PRIVATE_EXTERN=YES 
    BITCODE_GENERATION_MODE=bitcode -sdk iphoneos${IOSSDK_VER} build
xcodebuild -project MPCore.xcodeproj -target MPCore -configuration Release \
    COPY_PHASE_STRIP=YES \
    DEBUG_INFORMATION_FORMAT=dwarf-with-dsym \
    GCC_GENERATE_DEBUGGING_SYMBOLS=NO \
    GCC_SYMBOLS_PRIVATE_EXTERN=YES 
    BITCODE_GENERATION_MODE=bitcode -sdk iphonesimulator${IOSSDK_VER} build

rm -rf MPCore.framework

cd build

mkdir -p Release-iphone/lib

rm -rf Release-iphone/lib/*

xcrun -sdk iphoneos lipo -create Release-iphoneos/MPCore.framework/MPCore Release-iphonesimulator/MPCore.framework/MPCore -output Release-iphone/lib/MPCore

cp -R Release-iphoneos/MPCore.framework Release-iphone/lib/MPCore.framework

mv Release-iphone/lib/MPCore Release-iphone/lib/MPCore.framework/MPCore


cp -r Release-iphone/lib/MPCore.framework ../