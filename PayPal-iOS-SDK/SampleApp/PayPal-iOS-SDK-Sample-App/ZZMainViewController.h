//
//  ZZMainViewController.h
//  PayPal-iOS-SDK-Sample-App
//  iOS. WuSanbao.
//  Copyright (c) 2014-2016 PayPal, Inc. All rights reserved.
//  All rights reserved.
//

#import "ZZFlipsideViewController.h"
#import "PayPalMobile.h"

@interface ZZMainViewController : UIViewController <PayPalPaymentDelegate, PayPalFuturePaymentDelegate, PayPalProfileSharingDelegate, ZZFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property(nonatomic, strong, readwrite) NSString *environment;
@property(nonatomic, assign, readwrite) BOOL acceptCreditCards;
@property(nonatomic, strong, readwrite) NSString *resultText;

@end
