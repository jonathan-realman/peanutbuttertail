#include <iostream>

/*
   Copyright (c) 2020, Maurice Wenzel
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the Shitposting.
4. Neither the name of the Shitposting nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MAURICE WENZEL ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MAURICE WENZEL BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

int main()
{
/std::string ip;/
std::string mail;
std::string password;
std::string device;
std::system("mkdir ~/.cache/pbt");
std::cout << "Simple video recorder written to work with the HDHomeRun network tuner" << std::endl;
std::cout << "please make a zap2it dot com account and enter the user credentials when prompted" << std::endl;
std::cout << "Enter your zap2xml account username e-mail" << std::endl;
std::cin >> mail;
std::cout << "Now enter your zap2xml account password"<< std::endl;
std::cin >> password;
std::system(("perl zap2xml.pl -u " + mail + " -p " + password ).c_str());
std::system("hdhomerun_config discover | grep device | awk -F 'device' '{print $2}'| awk -F 'found' '{print $1}' > device.txt") .csrt())
std::system(("hdhomerun_config " + device + "scan > channels.txt").cstr())
std::system("hdhomerun_config discover | grep "at" | awk -F 'at' '{print $2}'> ~/.cache/pbt/deviceip") .csrt())

/*std::cout << "Please put the IP of your network TV tuner in" << std::endl;
std::cin >> ip*/
return 0;
}
