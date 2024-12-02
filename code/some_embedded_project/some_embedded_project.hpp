// Standard scheme of how to buildup an embedded header file
// 

/// The content should be contained in a project namespace that can be easily used in the sources files
/// 
/// ```cpp
/// # include "some_embedded_project.hpp"
/// using namespace some_embedded_project;
/// ```
namespace some_embedded_project {
    /// Configuration data stored in the controllers EEPROM or some kind of filesystem
    namespace config { 
        /// Standard name for loading function
        void load();

        /// Standard name for saving function
        void save();
    }

    /// Everything concerning devices like sensors or other periphal stuff
    namespace device { }
    
    /// Internal communication between microcontrollers or other components using a bus-system
    namespace io {
        /// Demo HardwareSerial
        static HardwareSerial* some_internal_serial;

        /// Standard name for setup function, should be placed in Arduinos Setup function
        void setup();
        
        /// Standard name for loop function, should be placed into the Arduinos Loop function
        void loop();
    }

    /// Motor control and more
    namespace motor { }

    /// Remote connections and interactions with them
    namespace remote {
        /// Standard name for setup function, should be placed in Arduinos Setup function
        void setup();

        /// Standard name for loop function, should be placed into the Arduinos Loop function
        void loop();
    }

    /// System stuff that interacts with all the other namespaces
    namespace system { }
}