***

###### 31Jul <br>
#### message <br>
 - message interface = message form : <br>
    1)topic(name,type): +pkgxml, +cmakelist -> pub-sub -> compile -> run <br>
    2)service(name,type) <br>
    3)action(name,type) <br>

***

###### 1Aug <br>
#### the first day actually run and controlled my Turtlebot3 : <br>
   +pkgxml, +cmakelist -> pub-sub -> compile -> run(controlled by keyboard) <br>

***

#### my laptop  <->  DDC  <->  my bot (simple diagram)  <br> 
 laptop <br>
 node1 <br>	
 node2  <br>
 - bring-up : open ros2 - ros2 launch turtlebot3_bringup robot.launch.py  <br>		 
| <br>
| <br>
DDS(multi port<-UDP,TDP) (weaker security)  (X) <br>
DDS(router id:turtle, pw:turtlebot3) 	      (O) <br>
| <br>
| <br>
turtlebot3 (Raspberry Pi) <br>

***

#### turtlebot3 setting order  <br>
 1. link mine to bot's router <br>
 (2. vmware connect) <br>

***

#### turtlebot3 info  <br>
- 12v <br>
- speed limit : 0.3m/s <br>
- has 2 moters : DC moters(simplest way we can set up)(diameter cell) <br>

***

#### turtlebot3 set-up
 - http://192.168.14.1 <br>
 - admin-set up-network-LAN <br>
 - nb(mine 02, turtlebot=burger) <br>
 - ssh ubuntu@192.168.14.50  <br>
 - apt list --upgradable  <br>
 - nb(turtle's 02, turtlebot=burger) <br>

 ***

#### turtlebot3 running order <br>
 1. write code (cmake, pkg.xml -> header -> cpp)
 2. compile the code
 3. (gazebo)
 4. turtlebor3 log in
 5. turtlebot3 run : ros2 launch turtlebot3_bringup robot.launch.py
 6. user code run : ex) ros2 run turtlebot3_teleop teleop_keyboard

***

#### on vscode  <br>
 - vscode open remote : SSH - ubuntu@192.168.14.50 (turtle's) <br>
 
 ***

#### gazebo simulator  <br>
 - install(on my laptop)  <br>
 - run : "gazebo"  <br>
 - stop : "killgazebo" (to abvoid gazebos conflict)  <br>

***

#### tips..  <br>
unset GTK_PATH : use it when you get " qt.qpa.plugin: Could not find the Qt platform plugin "wayland" in ...... "

***
