/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCETransaction : NSObject {

	unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _ownerUIDs;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUColumnRowCoordinate> >, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUColumnRowCoordinate> > > > >* _cellsForOwnerUIDs;

}
-(void)enumerateCellIDs:(/*^block*/id)arg1 ;
-(BOOL)isDeferringReplaceFormulaForOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)addCellID:(const SCD_Struct_TS315*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)deferReplaceFormulaForOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)description;
@end
