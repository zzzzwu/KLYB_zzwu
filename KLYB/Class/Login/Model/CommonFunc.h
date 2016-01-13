//
//  CommonFunc.h
//  Base64加密
//
//  Created by ddmap on 15-5-6.
//  Copyright (c) 2015年 jerry. All rights reserved.

/*
 使用示例：  将此通用类的头文件引入到目标类后，直接使用类名进行调用即可。
 
 NSString *str = [NSString stringWithFormat:@"YWE="];
 NSString *str1 = [NSString stringWithFormat:@"aa"];
 NSLog(@"resultStr========%@",[CommonFunc textFromBase64String:str]);   //使用类名进行调用
 NSLog(@"resultStr=========%@",[CommonFunc base64StringFromText:str1]);  //使用类名进行调用
 

 */

#define __BASE64( text )        [CommonFunc base64StringFromText:text]
#define __TEXT( base64 )        [CommonFunc textFromBase64String:base64]

@interface CommonFunc : NSObject

/******************************************************************************
 函数名称 : + (NSString *)base64StringFromText:(NSString *)text
 函数描述 : 将文本转换为base64格式字符串
 输入参数 : (NSString *)text    文本
 输出参数 : N/A
 返回参数 : (NSString *)    base64格式字符串
 备注信息 :
 ******************************************************************************/
+ (NSString *)base64StringFromText:(NSString *)text;

/******************************************************************************
 函数名称 : + (NSString *)textFromBase64String:(NSString *)base64
 函数描述 : 将base64格式字符串转换为文本
 输入参数 : (NSString *)base64  base64格式字符串
 输出参数 : N/A
 返回参数 : (NSString *)    文本
 备注信息 :
 ******************************************************************************/
+ (NSString *)textFromBase64String:(NSString *)base64;

@end