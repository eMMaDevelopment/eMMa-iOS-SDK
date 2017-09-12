//
//  EMMACampaign.h
//  eMMa
//
//  Created by Jaume Cornadó Panadés on 16/12/14.
//  Copyright (c) 2014 moddity. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMMADefines.h"

@class EMMABannerPromotion; 
@class EMMAStripCampaign;
@class EMMATabBarPromotion;
@class EMMAAdBallPromotion;

@interface EMMACampaign : NSObject


-(id) initWithType: (EMMACampaignType) type;

@property EMMACampaignType type;

@property (nonatomic, strong) id filterInfo;

@property int idPromo;

@property (nonatomic, strong) NSURL *promoURL;

@property (nonatomic, strong) NSURL *imageURL;

@property BOOL canClose;

@property NSInteger times;


+(EMMACampaignType) typeFromString: (NSString*) type;

-(EMMABannerPromotion*) toBanner;

-(EMMAStripCampaign*) toStrip;

-(EMMATabBarPromotion*) toTabBar;

-(void) parseCampaignInfo:(NSDictionary*) response;

-(EMMAAdBallPromotion*) toAdBall;

@end
