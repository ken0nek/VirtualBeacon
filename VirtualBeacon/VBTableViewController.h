//
//  VBTableViewController.h
//  VirtualBeacon
//
//  Created by Ken Tominaga on 2014/04/12.
//  Copyright (c) 2014年 Tommy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface VBTableViewController : UITableViewController <CBPeripheralManagerDelegate>

@property(nonatomic) CLBeaconRegion *region;
@property(nonatomic) CBPeripheralManager *manager;
@property(nonatomic) NSUUID *proximityUUID;

@property (weak, nonatomic) IBOutlet UISwitch *firstSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *secondSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *thirdSwitch;

- (IBAction)didFirstSwitchValueChange:(id)sender;
- (IBAction)didSecondSwitchValueChanged:(id)sender;
- (IBAction)didThirdSwitchValueChanged:(id)sender;

@end
