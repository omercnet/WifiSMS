/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMGeometry, NSString;



@interface GMMNewLocation : PBCodable 
{
    NSString *_query;
    GMMGeometry *_geocode;
    NSString *_queryRefinementToken;
    BOOL _isVia;
    BOOL _hasIsVia;
}

@property(readonly) ? coordinate;
@property(readonly) BOOL hasQuery;
@property(readonly) BOOL hasGeocode;
@property(readonly) BOOL hasQueryRefinementToken;
@property(readonly) BOOL hasIsVia; /* unknown property attribute: V_hasIsVia */
@property BOOL isVia; /* unknown property attribute: V_isVia */
@property(retain) NSString *queryRefinementToken; /* unknown property attribute: V_queryRefinementToken */
@property(retain) GMMGeometry *geocode; /* unknown property attribute: V_geocode */
@property(retain) NSString *query; /* unknown property attribute: V_query */


- (id)init;
- (void)dealloc;
- (BOOL)hasQuery;
- (BOOL)hasGeocode;
- (BOOL)hasQueryRefinementToken;
- (void)setIsVia:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (BOOL)hasIsVia;
- (BOOL)isVia;
- (id)queryRefinementToken;
- (void)setQueryRefinementToken:(id)arg1;
- (id)geocode;
- (void)setGeocode:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (struct { double x1; double x2; })coordinate;

@end
