// Copyright 2011 Software Freedom Conservancy
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WEBDRIVER_IE_WEBDRIVER_H_
#define WEBDRIVER_IE_WEBDRIVER_H_

#include "IEServer.h"

#define EXPORT __declspec(dllexport)

#ifdef __cplusplus
extern "C" {
#endif

webdriver::Server* server = NULL;

EXPORT webdriver::Server* StartServer(int port);
EXPORT webdriver::Server* StartServerEx(int port,
                                        const std::string& host,
                                        const std::string& log_level,
                                        const std::string& log_file);
EXPORT void StopServer(webdriver::Server* myserver);
EXPORT int GetServerSessionCount();
EXPORT bool ServerIsRunning();
EXPORT int GetServerPort();

#ifdef __cplusplus
}
#endif

#endif // WEBDRIVER_IE_WEBDRIVER_H_
