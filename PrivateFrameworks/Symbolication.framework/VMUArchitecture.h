/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUArchitecture : NSObject <NSCoding, NSCopying>
{
    NSInteger _cpuType;
    NSInteger _cpuSubtype;
}

+ (id)currentArchitecture;
+ (id)anyArchitecture;
+ (id)ppcArchitecture;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)i386Architecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;
+ (id)armArchitecture;
+ (id)architectureWithCpuType:(NSInteger)arg1 cpuSubtype:(NSInteger)arg2;
+ (void)initialize;

- (struct _VMURange { unsigned long long x1; unsigned long long x2; })commpageAddressRange;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })objcpageAddressRange;
- (id)initWithCpuType:(NSInteger)arg1 cpuSubtype:(NSInteger)arg2;
- (BOOL)isBigEndian;
- (BOOL)isLittleEndian;
- (BOOL)is32Bit;
- (BOOL)is64Bit;
- (BOOL)isEqualToArchitecture:(id)arg1;
- (BOOL)matchesArchitecture:(id)arg1;
- (NSInteger)cpuType;
- (NSInteger)cpuSubtype;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end