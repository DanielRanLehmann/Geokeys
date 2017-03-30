//
//  Geokeys.h
//  Geokeys
//
//  Created by Daniel Ran Lehmann on 3/30/17.
//  Copyright © 2017 Daniel Ran Lehmann. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    GKAddress,
    GKPostalAddress,
    GKClosestAddress,
    GKRoad,
    GKPostalCode,
    GKMunicipality,
    GKParish,
    GKPoliceDistrict,
    GKConstituency,
    GKJurisdiction,
    GKOwnerAssociations,
    GKLandRegisterNumber,
    GKAssessingProperty,
    GKRealEstate,
    GKPlace,
    GKPlaceCategory,
    GKHeight,
    GKTransformCoordinates
} GKMethods;

@interface Geokeys : NSObject

- (instancetype)initWithLogin:(NSString *)login password:(NSString *)password;

- (void)GET:(GKMethods)method parameters:(NSDictionary *)parameters completionHandler:(void (^)(NSError *error, id response))handler;

- (void)transformCoordinates:(NSArray *)coordinates fromEPSG:(NSUInteger)fromEPSG toEPSG:(NSUInteger)toEPSG completionHandler:(void (^)(NSError *, id))handler;


@end
