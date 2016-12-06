/*
 * Copyright (C) 2016 eschao <esc.chao@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_PAGEFLIP_PAGEFLIP_EXCEPTION_H
#define ANDROID_PAGEFLIP_PAGEFLIP_EXCEPTION_H

#include <exception>
#include <string>
#include "error.h"

using namespace std;

namespace eschao {

class PageFlipException : public exception {

public:
    PageFlipException() : m_code(Error::ERROR) {
        m_message = "";
    }

    PageFlipException(int code, const char *msg = "") {
        m_code = code;
        m_message = msg;
    }

    const char *what() const {
        return m_message.c_str();
    }

    inline int code() const {
        return m_code;
    }

private:
    int m_code;
    string m_message;
};

}

#endif //ANDROID_PAGEFLIP_PAGEFLIP_EXCEPTION_H
