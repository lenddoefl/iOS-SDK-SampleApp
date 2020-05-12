// Generated by Apple Swift version 5.2.2 (swiftlang-1103.0.32.6 clang-1103.0.32.51)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreGraphics;
@import Foundation;
@import MediaPlayer;
@import ObjectiveC;
@import UIKit;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="LenddoSDKFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC18LenddoSDKFramework11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
- (UIInterfaceOrientationMask)application:(UIApplication * _Nonnull)application supportedInterfaceOrientationsForWindow:(UIWindow * _Nullable)window SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC18LenddoSDKFramework23CancelledViewController")
@interface CancelledViewController : UIViewController
- (void)viewDidLoad;
- (IBAction)closeButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class LocalizedLabel;
@class UIImageView;
@class UIView;
@class AVCapturePhotoOutput;
@class AVCapturePhoto;

SWIFT_CLASS("_TtC18LenddoSDKFramework21CaptureViewController")
@interface CaptureViewController : UIViewController <AVCapturePhotoCaptureDelegate>
@property (nonatomic, weak) IBOutlet LocalizedLabel * _Null_unspecified cameraLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified cameraGrid;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified cameraView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (void)viewWillDisappear:(BOOL)animated;
- (IBAction)cameraButtonClick:(id _Nonnull)sender;
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhoto:(AVCapturePhoto * _Nonnull)photo error:(NSError * _Nullable)error;
- (IBAction)closeButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC18LenddoSDKFramework14DashedLineView")
@interface DashedLineView : UIView
@property (nonatomic) IBInspectable CGFloat perDashLength;
@property (nonatomic) IBInspectable CGFloat spaceBetweenDash;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull dashColor;
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC18LenddoSDKFramework13FormTextField")
@interface FormTextField : UITextField
@property (nonatomic, strong) IBInspectable UIColor * _Nullable borderColor;
@property (nonatomic) IBInspectable CGFloat borderWidth;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework18HomeViewController")
@interface HomeViewController : UIViewController
- (void)viewDidLoad;
- (IBAction)documentCaptureClick:(id _Nonnull)sender;
- (IBAction)signatureClick:(id _Nonnull)sender;
- (IBAction)livenessClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework16LenddoOnboarding")
@interface LenddoOnboarding : NSObject <WKNavigationDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework26LivenessDoneViewController")
@interface LivenessDoneViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified dialogView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)previewClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UINavigationBar;
@class UIButton;
@class UIProgressView;
@class UILabel;
@class NSNotification;

SWIFT_CLASS("_TtC18LenddoSDKFramework29LivenessPreviewViewController")
@interface LivenessPreviewViewController : UIViewController
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified navigationBar;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified tempImage;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified buttonView;
@property (nonatomic, weak) IBOutlet UIProgressView * _Null_unspecified progressView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified processingView;
@property (nonatomic, weak) IBOutlet LocalizedLabel * _Null_unspecified processingLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified progressLabel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified playerView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified playButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)playerDidFinishPlayingWithNote:(NSNotification * _Nonnull)note;
- (void)viewDidLayoutSubviews;
- (IBAction)playButtonClick:(id _Nonnull)sender;
- (IBAction)submitClick:(id _Nonnull)sender;
- (IBAction)retakeClick:(id _Nonnull)sender;
- (IBAction)backButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework31LivenessSubmittedViewController")
@interface LivenessSubmittedViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified voilaImage;
@property (nonatomic, weak) IBOutlet LocalizedLabel * _Null_unspecified submittedTitle;
@property (nonatomic, weak) IBOutlet LocalizedLabel * _Null_unspecified submittedDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)nextClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVCaptureFileOutput;
@class AVCaptureConnection;
@class AVAudioPlayer;

SWIFT_CLASS("_TtC18LenddoSDKFramework22LivenessViewController")
@interface LivenessViewController : UIViewController <AVAudioPlayerDelegate, AVCaptureFileOutputRecordingDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified cameraView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified overlayView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified speakerButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified recordButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified flashButton;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified timerView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timerLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified overlayLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified overlayIcon;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didFinishRecordingToOutputFileAtURL:(NSURL * _Nonnull)outputFileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections error:(NSError * _Nullable)error;
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer * _Nonnull)player successfully:(BOOL)flag;
- (IBAction)speakerButtonClick:(id _Nonnull)sender;
- (IBAction)recordButtonClick:(id _Nonnull)sender;
- (IBAction)flashButtonClick:(id _Nonnull)sender;
- (IBAction)backButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework15LocalizedButton")
@interface LocalizedButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) IBInspectable NSString * _Nonnull keyValue;
- (void)layoutSubviews;
@property (nonatomic) IBInspectable BOOL useDefault;
@property (nonatomic) IBInspectable BOOL rounded;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable borderColor;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework14LocalizedLabel")
@interface LocalizedLabel : UILabel
@property (nonatomic, copy) IBInspectable NSString * _Nonnull keyValue;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@class UITapGestureRecognizer;

SWIFT_CLASS("_TtC18LenddoSDKFramework21PreviewViewController")
@interface PreviewViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified image;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified processingView;
@property (nonatomic, weak) IBOutlet LocalizedLabel * _Null_unspecified processingLabel;
@property (nonatomic, weak) IBOutlet UIProgressView * _Null_unspecified progressView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified progressLabel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified confirmView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified noButtonView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified noButtonImage;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified yesButtonView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified yesButtonImage;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (void)noButtonClickWithSender:(UITapGestureRecognizer * _Nonnull)sender;
- (void)yesButtonClickWithSender:(UITapGestureRecognizer * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework17ProgressIndicator")
@interface ProgressIndicator : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework20ResultsTableViewCell")
@interface ResultsTableViewCell : UITableViewCell
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework21ResultsViewController")
@interface ResultsViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework27SelfiePreviewViewController")
@interface SelfiePreviewViewController : UIViewController
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified navigationBar;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified buttonView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified processingView;
@property (nonatomic, weak) IBOutlet UIProgressView * _Null_unspecified progressView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified progressLabel;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)submitButtonClick:(id _Nonnull)sender;
- (IBAction)retakeButtonClick:(id _Nonnull)sender;
- (IBAction)backButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework20SelfieViewController")
@interface SelfieViewController : UIViewController <AVCapturePhotoCaptureDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified cameraView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified flashButton;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)switchCamButtonClick:(id _Nonnull)sender;
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhoto:(AVCapturePhoto * _Nonnull)photo error:(NSError * _Nullable)error;
- (IBAction)recordButtonClick:(id _Nonnull)sender;
- (IBAction)flashButtonClick:(id _Nonnull)sender;
- (IBAction)backButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class YPDrawSignatureView;

/// <h2>YPDrawSignatureViewDelegate Protocol</h2>
/// YPDrawSignatureViewDelegate:
/// <ul>
///   <li>
///     optional didStart(_ view : YPDrawSignatureView)
///   </li>
///   <li>
///     optional didFinish(_ view : YPDrawSignatureView)
///   </li>
/// </ul>
SWIFT_PROTOCOL("_TtP18LenddoSDKFramework19YPSignatureDelegate_")
@protocol YPSignatureDelegate
- (void)didStart:(YPDrawSignatureView * _Nonnull)view;
- (void)didFinish:(YPDrawSignatureView * _Nonnull)view;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework23SignatureViewController")
@interface SignatureViewController : UIViewController <YPSignatureDelegate>
@property (nonatomic, weak) IBOutlet YPDrawSignatureView * _Null_unspecified drawSignatureView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified processingView;
@property (nonatomic, weak) IBOutlet UIProgressView * _Null_unspecified progressView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified progressLabel;
@property (nonatomic, weak) IBOutlet LocalizedButton * _Null_unspecified redoButton;
@property (nonatomic, weak) IBOutlet LocalizedButton * _Null_unspecified submitButton;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified buttonView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified signatureImage;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)redoClick:(id _Nonnull)sender;
- (IBAction)submitClick:(id _Nonnull)sender;
- (IBAction)closeButtonClick:(id _Nonnull)sender;
- (void)didStart:(YPDrawSignatureView * _Nonnull)view;
- (void)didFinish:(YPDrawSignatureView * _Nonnull)view;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework23SubmittedViewController")
@interface SubmittedViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified image;
@property (nonatomic, weak) IBOutlet LocalizedLabel * _Null_unspecified descriptionLabel;
@property (nonatomic, weak) IBOutlet LocalizedButton * _Null_unspecified doneButton;
@property (nonatomic, weak) IBOutlet LocalizedButton * _Null_unspecified newPageButton;
- (void)viewDidLoad;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (IBAction)newPageClick:(id _Nonnull)sender;
- (IBAction)doneClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework21SuccessViewController")
@interface SuccessViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified clientIDLabel;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)closeButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LenddoSDKFramework14ViewController")
@interface ViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified partnerscriptIdTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified applicationNameTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified applicationIdTextField;
- (IBAction)generateApplicationIdButtonClicked:(id _Nonnull)sender;
- (IBAction)startOnboardingButtonClicked:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class WKWebView;
@class WKNavigationAction;

SWIFT_CLASS("_TtC18LenddoSDKFramework17WebViewController")
@interface WebViewController : UIViewController <WKNavigationDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified wvView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITouch;
@class UIEvent;
@class UIGestureRecognizer;

/// <h1>Class: YPDrawSignatureView</h1>
/// Accepts touches and draws an image to an UIView
/// <h2>Description</h2>
/// This is an UIView based class for capturing a signature drawn by a finger in iOS.
/// <h2>Usage</h2>
/// Add the YPSignatureDelegate to the view to exploit the optional delegate methods
/// <ul>
///   <li>
///     startedDrawing(_ view: YPDrawSignatureView)
///   </li>
///   <li>
///     finishedDrawing(_ view: YPDrawSignatureView)
///   </li>
///   <li>
///     Add an @IBOutlet, and set its delegate to self
///   </li>
///   <li>
///     Clear the signature field by calling clear() to it
///   </li>
///   <li>
///     Retrieve the signature from the field by either calling
///   </li>
///   <li>
///     getSignature() or
///   </li>
///   <li>
///     getCroppedSignature()
///   </li>
/// </ul>
IB_DESIGNABLE
SWIFT_CLASS("_TtC18LenddoSDKFramework19YPDrawSignatureView")
@interface YPDrawSignatureView : UIView
@property (nonatomic) IBInspectable CGFloat strokeWidth;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull strokeColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull signatureBackgroundColor SWIFT_DEPRECATED_MSG("", "backgroundColor");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
