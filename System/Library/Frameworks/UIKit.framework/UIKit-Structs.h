/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIView, NSTimer, DOMNode, UIWebSelectionHandle, NSString, NSMutableArray, UIWebPDFView;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct __GSEvent* GSEventRef;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	id field1;
	id field2;
	id field3;
} SCD_Struct_UI6;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __GSKeyboard* GSKeyboardRef;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct {
	double field1;
	long long field2;
	double field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_UI10;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPath* CGPathRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_UI16;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} SCD_Struct_UI18;

typedef struct {
	SCD_Struct_UI18 field1;
	SCD_Struct_UI18 field2;
	SCD_Struct_UI18 field3;
} SCD_Struct_UI19;

typedef struct CGColor* CGColorRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_UI22;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_UI24;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_UI25;

typedef struct CGContext* CGContextRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_UI29;

typedef struct CGShading* CGShadingRef;

typedef union {
	float singleton;
	float array;
} SCD_Union_UI31;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	BOOL field5;
	BOOL field6;
} SCD_Struct_UI32;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	long long width;
	long long height;
} SCD_Struct_UI34;

typedef struct {
	unsigned val[8];
} SCD_Struct_UI35;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
	int field7;
} SCD_Struct_UI36;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	CGSize field6;
} SCD_Struct_UI38;

typedef struct {
	id field1;
	double field2;
	double field3;
	SCD_Struct_UI38 field4;
	SCD_Struct_UI38 field5;
	SCD_Struct_UI38 field6;
	SCD_Struct_UI38 field7;
	BOOL field8;
} SCD_Struct_UI39;

typedef struct {
	unsigned idiom : 6;
	unsigned landscape : 1;
	unsigned split : 1;
	unsigned appearance : 8;
	unsigned rendering : 16;
} SCD_Struct_UI40;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef union {
	UIImage* image;
	UIView* view;
} SCD_Union_UI43;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_UI44;

typedef struct {
	CGPoint origin;
	CGPoint offset;
	int position;
	CGPoint desiredPoint;
	CGRect desiredBounds;
} SCD_Struct_UI45;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_UI46;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_UI47;

typedef struct {
	NSTimer* timer;
	CGPoint location;
	BOOL isBlocked;
	BOOL isCancelled;
	BOOL isOnWebThread;
	BOOL isDisplayingHighlight;
	BOOL attemptedClick;
	CGPoint lastPanTranslation;
	DOMNode* element;
	id delegate;
	id interactionSheet;
	 UIWebRotatingAlertController;
	BOOL allowsImageSheet;
	BOOL allowsDataDetectorsSheet;
	BOOL allowsLinkSheet;
	BOOL acceptsFirstResponder;
	double documentScale;
	id previewHintRects;
	 NSArray;
	id previewHintImage;
	 UIImage;
} SCD_Struct_UI48;

typedef struct UIWebViewportConfiguration {
	CGSize size;
	float initialScale;
	float minimumScale;
	float maximumScale;
	BOOL allowsUserScaling;
	BOOL allowsShrinkToFit;
} UIWebViewportConfiguration;

typedef struct UIWebTouchEvent {
	int type;
	double timestamp;
	CGPoint locationInScreenCoordinates;
	CGPoint locationInDocumentCoordinates;
	double scale;
	double rotation;
	BOOL inJavaScriptGesture;
	_UIWebTouchPoint touchPoints;
	unsigned touchPointCount;
	BOOL isPotentialTap;
} UIWebTouchEvent;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_UI51;

typedef union GLKVector3 {
	SCD_Struct_UI51 field1;
	SCD_Struct_UI51 field2;
	SCD_Struct_UI51 field3;
	float v[3];
} GLKVector3;

typedef struct {
	GLKVector3 v;
	float s;
} SCD_Struct_UI53;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_UI54;

typedef union GLKQuaternion {
	SCD_Struct_UI53 field1;
	SCD_Struct_UI54 field2;
	float q[4];
} GLKQuaternion;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	id field1;
	unsigned long long field2;
} SCD_Struct_UI57;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct {
	CGPoint point;
	double time;
} SCD_Struct_UI59;

typedef struct {
	UIWebSelectionHandle* scrollingHandle;
	double startTime;
	int direction;
	NSTimer* timer;
} SCD_Struct_UI60;

typedef struct {
	UIWebSelectionHandle* activeHandle;
	CGPoint handleCenterStart;
	double handleOffset;
} SCD_Struct_UI61;

typedef struct {
	BOOL flipPossible;
	BOOL rectsChanged;
	CGRect originalSelectionRect;
} SCD_Struct_UI62;

typedef struct {
	UIWebSelectionHandle* start;
	UIWebSelectionHandle* end;
	CGSize startingOffset;
	BOOL anchorAtStart;
	SCD_Struct_UI62 flipData;
} SCD_Struct_UI63;

typedef union {
	float floatValue;
	double doubleValue;
	unsigned long long integerValue;
	void bytesValue;
} SCD_Union_UI64;

typedef struct UINibArchiveTableInfo {
	unsigned count;
	unsigned offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
	unsigned char type[10];
	unsigned formatVersion;
	unsigned coderVersion;
	UINibArchiveTableInfo objects;
	UINibArchiveTableInfo keys;
	UINibArchiveTableInfo values;
	UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
	long long objectID;
	long long nextGenericKey;
	unsigned nextValueSearchIndex;
	BOOL replaced;
} UINibDecoderRecursiveState;

typedef struct UIKeyToKeyIDCache {
	NSString* previousKey[64];
	void* previousKeyID[64];
	BOOL previousKeyExists[64];
	long long hashHits;
	long long hashHotMisses;
	long long hashColdMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
	unsigned previousScope;
	unsigned previousKey;
	UINibDecoderValue previousValue;
} UIKeyAndScopeToValueCache;

typedef struct {
	CGPoint field1;
	double field2;
} SCD_Struct_UI70;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	double amount;
	int unit;
} SCD_Struct_UI73;

typedef struct {
	SCD_Struct_UI73 field1[4];
} SCD_Struct_UI74;

typedef struct __DCSDictionary* DCSDictionaryRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct {
	BOOL itemIsEnabled[29];
	char timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	char serviceString[100];
	char serviceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	unsigned deviceIsRTL : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
	char personName[100];
} SCD_Struct_UI77;

typedef struct {
	BOOL overrideItemIsEnabled[29];
	unsigned overrideTimeString : 1;
	unsigned overrideGsmSignalStrengthRaw : 1;
	unsigned overrideGsmSignalStrengthBars : 1;
	unsigned overrideServiceString : 1;
	unsigned overrideServiceImages : 2;
	unsigned overrideOperatorDirectory : 1;
	unsigned overrideServiceContentType : 1;
	unsigned overrideWifiSignalStrengthRaw : 1;
	unsigned overrideWifiSignalStrengthBars : 1;
	unsigned overrideDataNetworkType : 1;
	unsigned disallowsCellularDataNetworkTypes : 1;
	unsigned overrideBatteryCapacity : 1;
	unsigned overrideBatteryState : 1;
	unsigned overrideBatteryDetailString : 1;
	unsigned overrideBluetoothBatteryCapacity : 1;
	unsigned overrideThermalColor : 1;
	unsigned overrideSlowActivity : 1;
	unsigned overrideActivityDisplayId : 1;
	unsigned overrideBluetoothConnected : 1;
	unsigned overrideBreadcrumb : 1;
	unsigned overrideDisplayRawGSMSignal : 1;
	unsigned overrideDisplayRawWifiSignal : 1;
	unsigned overridePersonName : 1;
	SCD_Struct_UI77 values;
} SCD_Struct_UI78;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	BOOL animateContentRotation;
	BOOL preserveHeight;
	BOOL avoidFadingBottomOfContent;
	BOOL skipSnapshotOfEndState;
	BOOL preventAdditveAnimations;
	double contentStretchRightEdgeInset;
	int edgeClip;
} SCD_Struct_UI81;

typedef struct __CFSet* CFSetRef;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
	double targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct {
	NSMutableArray* all;
	NSMutableArray* html;
	NSMutableArray* javascript;
	NSMutableArray* css;
	NSMutableArray* error;
	NSMutableArray* warning;
	NSMutableArray* tip;
	NSMutableArray* log;
} SCD_Struct_UI84;

typedef struct {
	UIWebPDFView* view;
	NSTimer* timer;
} SCD_Struct_UI85;

typedef struct UIForceLevelInfo {
	long long identifier;
	double center;
	double minimum;
	double maximum;
	double attractionStrength;
	long long attractionSharpness;
	double attractionSlope;
} UIForceLevelInfo;

typedef struct PDFHistoryItem {
	BOOL restorePending;
	BOOL isInitialScale;
	double zoomScale;
	CGPoint contentOffset;
} PDFHistoryItem;

typedef union {
	SCD_Struct_UI40 styling;
	int intValue;
} SCD_Union_UI88;

typedef struct __CTFont* CTFontRef;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_UI91;

typedef struct {
	int commonRowHorizontalAlignment;
	int lastRowHorizontalAlignment;
	int rowVerticalAlignment;
} SCD_Struct_UI92;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct CGGradient* CGGradientRef;

typedef struct {
	SCD_Union_UI31 position;
	 color;
} SCD_Struct_UI95;

typedef struct __CTLine* CTLineRef;

typedef struct {
	NSRange src;
	NSRange dst;
	BOOL isEqual;
} SCD_Struct_UI97;

typedef struct {
	_ field1;
	NSRange field2;
	_ field3;
	NSRange field4;
	BOOL field5;
} SCD_Struct_UI98;

typedef struct {
	unsigned long long senderID;
	double controllerState[16];
	double normalizedLeftStickState[4];
	double normalizedRightStickState[4];
	double normalizedShoulderButtonState[4];
} SCD_Struct_UI99;

typedef struct {
	long long userInterfaceIdiom;
	double displayScale;
	long long touchLevel;
	unsigned long long interactionModel;
	unsigned long long primaryInteractionModel;
	long long horizontalSizeClass;
	long long verticalSizeClass;
	long long userInterfaceStyle;
	long long forceTouchCapability;
} SCD_Struct_UI100;

