/*! \mainpage Overview

IDE for mobile applications.

This IDE suited for a development of mobile applications. iOS and Android are supported  as  target
platform. It is possible to create installation packages (ipa for iOS and apk for Android) directly
from  IDE.  Angel  script   was  used  as  programming  language  of  application.   Base  part  of
application is a scene. Application may consists from several scenes. For exmaple one scene contain
loading screen and another scene contain all application objects and logic. Each scene  always have
one script file. Logic of scene lies in this script file. Script file may  include  another  script
files. All scenes and included script files must be added in project.

All objects added to scene can be accesses from script.  For  example  if  scene named Test contain
object named Label of type NGUILabel than with followed line of code we can change x coordinate:

Test::Label.x += 10;

All system function can be accesses from object named core. For example with followed  line of code
we can Log some message:

core.Trace(""Hello world);

All available methods of scene objects and core object listed in help.

For setting entry point function in script file object ScriptExecuter must be added to scene. Entry
point will execute once or every frame depend on ActOnce property of ScriptExecuter object.

Build contains some sample projects and one full application.

For generating install packages from IDE you will need to  place  valid  certificates  into  folder
'Bin/cert'. Also you will need set certificats name and password in setting.ini. For generating apk
IDE need Java SDK to be installed.

*/