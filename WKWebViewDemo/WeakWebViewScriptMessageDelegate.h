//
//  WeakWebViewScriptMessageDelegate.h
//  WKWebViewDemo
//
//  Created by Paean on 2018/6/20.
//  Copyright © 2018年 蒋晨成. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>


// 为了解决WKWebView循环引用，导致内存不释放的问题
@interface WeakWebViewScriptMessageDelegate : NSObject<WKScriptMessageHandler>

//WKScriptMessageHandler 这个协议类专门用来处理JavaScript调用原生OC的方法
@property (nonatomic, weak)id<WKScriptMessageHandler> scriptDelegate;

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end
