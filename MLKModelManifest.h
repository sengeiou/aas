//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MLKModelManifest : NSObject
{
    long long _modelType;
    NSString *_modelPath;
    NSString *_labelsPath;
    NSString *_modelDirectoryPath;
    NSString *_modelFilename;
    NSString *_labelsFilename;
}

+ (id)stringNameForModelType:(long long)arg1;
@property(copy, nonatomic) NSString *labelsFilename; // @synthesize labelsFilename=_labelsFilename;
@property(copy, nonatomic) NSString *modelFilename; // @synthesize modelFilename=_modelFilename;
@property(copy, nonatomic) NSString *modelDirectoryPath; // @synthesize modelDirectoryPath=_modelDirectoryPath;
@property(readonly, copy, nonatomic) NSString *labelsPath; // @synthesize labelsPath=_labelsPath;
@property(readonly, copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(readonly, nonatomic) long long modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;
- (_Bool)atomicallyWriteData:(id)arg1 toFilePath:(id)arg2;
- (_Bool)removeItemIfExistsAtURL:(id)arg1 error:(id *)arg2;
- (id)dataWithJSONObject:(id)arg1 error:(id *)arg2;
- (_Bool)saveManifestToFileWithName:(id)arg1 error:(id *)arg2;
- (id)initWithModelType:(long long)arg1 modelDirectoryPath:(id)arg2 modelFilename:(id)arg3 labelsFilename:(id)arg4 error:(id *)arg5;
- (id)initWithModelType:(long long)arg1 modelDirectoryPath:(id)arg2 manifestFilename:(id)arg3 error:(id *)arg4;

@end

