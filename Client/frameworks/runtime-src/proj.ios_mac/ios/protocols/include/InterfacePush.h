/****************************************************************************
Copyright (c) 2012+2013 cocos2d+x.org

http://www.cocos2d+x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

@protocol InterfacePush <NSObject>

@required
/**
 *  start push service
 */
- (void) startPush;

/**
 *  close push service
 */
- (void) closePush;

/**
 *  set alias
 *
 *  @param alias the value of alias
 */
- (void) setAlias: (NSString*)alias;

/**
 *  delete alias
 *
 *  @param alias the value of alias
 */
- (void) delAlias: (NSString*)alias;

/**
 *  set tags
 *
 *  @param tags the content of tags
 */
- (void) setTags: (NSMutableArray*)tags;

/**
 *  delete tags
 *
 *  @param tags the content of tags
 */
- (void) delTags: (NSMutableArray*)tags;

/**
 *  get the version of SDK
 *
 *  @return the version of SDK
 */
- (NSString*) getSDKVersion;

/**
 *  get the version of plugin
 *
 *  @return the version of plugin
 */
- (NSString*) getPluginVersion;

@optional
/**
 *  init SDK
 *
 *  @param cpInfo the parameters of SDK
 */
- (void) configDeveloperInfo : (NSMutableDictionary*) cpInfo;

/**
 *  set debug mode true or false
 *
 *  @param debug the status of debug
 */
- (void) setDebugMode: (BOOL) debug;


@end
