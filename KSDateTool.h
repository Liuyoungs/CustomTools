//
//  LSDateTool.h
//  DateDemo
//
//  Created by  舒柳洋 on 2017/1/12.
//  Copyright © 2017年 Liuyang Shu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KSDateTool : NSObject

/**
 获取系统当前日期

 @return <#return value description#>
 */
+ (NSString *)getCurrentDateWithFormatter:(NSString *)dateFormatter;

/**
 string转date

 @param dateString <#dateString description#>
 @return <#return value description#>
 */
+ (NSDate *)stringToDateWithString:(NSString *)dateString formatter:(NSString *)dateFormatter;


/**
 date转string

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)dateToStringWithDate:(NSDate *)date formatter:(NSString *)dateFormatter;



/**
 比较两个日期先后

 @param date1 <#date1 description#>
 @param date2 <#date2 description#>
 @return <#return value description#>
 */
+(NSDate *)compareDate:(NSString*)date1 withDate:(NSString*)date2 formatter:(NSString *)dateFormatter;


/**
 本地日期转UTC

 @param localDate <#localDate description#>
 @return <#return value description#>
 */
+ (NSString *)getUTCFormatterWithLocalDate:(NSString *)localDate localDateFormatter:(NSString *)localFormatter UTCFormatter:(NSString *)UTCFormatter;

/**
 UTC转本地日期

 @param utcDate <#utcDate description#>
 @return <#return value description#>
 */
+ (NSString *)getLocalDateFormatterWithUTCDate:(NSString *)utcDate UTCFormatter:(NSString *)UTCFormatter localDateFormatter:(NSString *)localFormatter;


/**
 本地日期转GMT

 @param localDate 本地日期
 @return 转换后的日期字符串
 */
+ (NSString *)getGMTFormaterWithLocalDate:(NSDate *)localDate formatter:(NSString *)dateFormatter;


/**
 GMT转本地日期

 @param GMTDate GMT日期
 @return 转换后的日期字符串
 */
+ (NSString *)getLocalDateFormaterWithGMTDate:(NSString *)GMTDate localFormatter:(NSString *)localFormatter;

/**
 时间戳转时间

 @param timeStamp 时间戳
 @return 时间字符串
 */
+ (NSString *)timeStampTransToTime:(NSString *)timeStamp outputFormatter:(NSString *)formatter;

/**
 时间转时间戳

 @param time 时间
 @return 时间戳
 */
+(NSString *)timeTransTotimeStamp:(NSString *)time inputFormatter:(NSString *)inputFormatter;

/**
 判断date是否是今天
 
 @param date 需要判断的日期
 @return 是/不是今天
 */
+ (BOOL)isTodayWithDate:(NSDate *)date;

/**
 判断date是否是昨天
 
 @param date 需要判断的日期
 @return 是/不是昨天
 */
+ (BOOL)isYestodayWithDate:(NSDate *)date;

/**
 判断date是否是明天
 
 @param date 需要判断的日期
 @return 是/不是明天
 */
+ (BOOL)isTomorrowWithDate:(NSDate *)date;
/**
 判断date是否是今年
 
 @param date 需要判断的日期
 @return 是/不是今年
 */
+ (BOOL)isThisYearWithDate:(NSDate *)date;

/**
 比较两个日期之间相差几天
 
 @param startDate <#startDate description#>
 @param endDate <#endDate description#>
 @return <#return value description#>
 */
+ (NSInteger)differOfBothDateWithStartDate:(NSString *)startDate endDate:(NSString *)endDate;

/**
 比较两个时间之间相差多少分钟
 
 @param startTime <#startTime description#>
 @param endTime <#endTime description#>
 @return <#return value description#>
 */
+ (NSInteger)differOfBothTimeWithStartTime:(NSString *)startTime endTime:(NSString *)endTime;

/**
 计算多少天之后的日期
 
 @param startDate 需要换算的日期
 @param day 天数
 @return 换算之后的日期
 */
+ (NSString *)getDateAfterSomeDaysWithDate:(NSDate *)startDate days:(NSString *)day;
@end
